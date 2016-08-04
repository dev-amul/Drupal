<?php

backup_migrate_include('destinations.db');

/**
 * @file
 * Functions to handle the direct to database destination.
 */

/**
 * A destination type for saving to a database server.
 *
 * @ingroup backup_migrate_destinations
 */

class backup_migrate_destination_db_pgsql extends backup_migrate_destination_db {
  function type_name() {
    return t("PostgreSQL Database");
  }

  /**
   * Return a list of backup filetypes.
   */
  function file_types() {
    return array(
      "sql" => array(
        "extension" => "sql",
        "filemime" => "text/x-sql",
        "backup" => TRUE,
        "restore" => TRUE,
      ),
      "pgsql" => array(
        "extension" => "pgsql",
        "filemime" => "text/x-sql",
        "backup" => TRUE,
        "restore" => TRUE,
      ),
    );
  }

  /**
   * Declare any pgsql databases defined in the settings.php file as a possible destination.
   */
  function destinations() {
    $out = array();
    global $databases;
    foreach ((array)$databases as $db_key => $target) {
      foreach ((array)$target as $tgt_key => $info) {
        // Only pgsql supported by this destination.
        $key = $db_key . ':' . $tgt_key;
        if ($info['driver'] === 'pgsql') {
          $url = $info['driver'] . '://' . $info['username'] . ':' . $info['password'] . '@' . $info['host'] . ($info['port'] ? ':' . $info['port'] : '') . '/' . $info['database'];
          if ($destination = backup_migrate_create_destination('pgsql', array('url' => $url))) {
            // Treat the default database differently because it is probably the only one available.
            if ($key == 'default:default') {
              $destination->set_id('db');
              $destination->set_name(t('Default Database'));
              // Dissalow backing up to the default database because that's confusing and potentially dangerous.
              $destination->remove_op('scheduled backup');
              $destination->remove_op('manual backup');
            }
            else {
              $destination->set_id('db:'. $key);
              $destination->set_name($key .": ". $destination->get_display_location());
            }
            $out[$destination->get_id()] = $destination;
          }
        }
      }
    }
    return $out;
  }

  /** * Get the file type for to backup this destination to.
   */
  function get_file_type_id() {
    return 'pgsql';
  }

  /**
   * Backup the databases to a file.
   *
   * We use pg_dump to create the file because there seems to be no better way.
   */
  function _backup_db_to_file($file, $settings) {
    $exclude = !empty($settings->filters['exclude_tables']) ? $settings->filters['exclude_tables'] : array();
    $nodata = !empty($settings->filters['nodata_tables']) ? $settings->filters['nodata_tables'] : array();

    if ($file->open(TRUE)) {
      $exclude_array = array_merge($exclude, $nodata);

      if (!empty($exclude_array)) {
        $exclude_tables = ' --exclude-table='. join(' --exclude-table=', $exclude_array);
      } else {
        $exclude_tables = '';
      }

      $dump_cmd = escapeshellcmd("PGPASSWORD=" . $settings->source->dest_url['pass']  . " pg_dump --clean --no-owner --host=" . $settings->source->dest_url['host'] . " --username=" . $settings->source->dest_url['user'] . $exclude_tables . " " . $settings->source->dest_url['path']);

      $handle = popen($dump_cmd, "r");

      $output = "";
      $lines = 0;
      while ($output_line = fgets($handle)) {
        $output .= $output_line;
        $lines++;
      }

      pclose($handle);

      if (!empty($nodata)) {
        $structure_tables = ' --table='. join(' --table=', $nodata);

        $dump_cmd = escapeshellcmd("PGPASSWORD=" . $settings->source->dest_url['pass']  . " pg_dump --clean --no-owner --schema-only --host=" . $settings->source->dest_url['host'] . " --username=" . $settings->source->dest_url['user'] . $structure_tables . " " . $settings->source->dest_url['path']);

        $handle = popen($dump_cmd, "r");

        while ($output_line = fgets($handle)) {
          $output .= $output_line;
          $lines++;
        }

        pclose($handle);
      }

      $file->write($output);
      $file->close();

      return $lines;
    } else {
      return FALSE;
    }

  }

  /**
   * Backup the databases to a file.
   */
  function _restore_db_from_file($file, $settings) {

    $dump_cmd = escapeshellcmd("PGPASSWORD=" . $settings->source->dest_url['pass']  . " psql --host=" . $settings->source->dest_url['host'] . " --username=" . $settings->source->dest_url['user'] . " --file ". $file->filepath() . " " . $settings->source->dest_url['path']);


    exec($dump_cmd, $output_array, $return);

    $num = count($output_array);

    if ($return) {  // 0 == success, non-zero = fail
      drupal_set_message(t("Unable to open file %file to restore database", array("%file" => $file->filepath())), 'error');
      $num = FALSE;
    }

    return $num;
  }

  /**
   * Get a list of tables in the database.
   */
  function get_table_names() {
    $out = array();
    foreach ($this->_get_tables() as $table) {
      $out[$table['table_name']] = $table['table_name'];
    }
    return $out;
  }

  /**
   * Lock the list of given tables in the database.
   */
  function _lock_tables($tables) {
    if ($tables) {
      $tables_escaped = array();
      foreach ($tables as $table) {
        $tables_escaped[] = '`'. db_escape_table($table) .'`  WRITE';
      }
      $this->query('LOCK TABLES '. implode(', ', $tables_escaped));
    }
  }

  /**
   * Unlock all tables in the database.
   */
  function _unlock_tables($settings) {
    $this->query('UNLOCK TABLES');
  }

  /**
   * Get a list of tables in the db.
   */
  function _get_tables() {
    $out = array();
    // get auto_increment values and names of all tables
    $tables = $this->query("SELECT * FROM information_schema.tables WHERE table_schema = 'public' ORDER by table_name ASC", array(), array('fetch' => PDO::FETCH_ASSOC));
    foreach ($tables as $table) {
      $out[$table['table_name']] = $table;
    }
    return $out;
  }

  /**
   * Get the sql for the structure of the given table.
   */
  function _get_table_structure_sql($table) {
    $out = "";
    $result = $this->query("SHOW CREATE TABLE `". $table['table_name'] ."`", array(), array('fetch' => PDO::FETCH_ASSOC));
    foreach ($result as $create) {
      $out .= "DROP TABLE IF EXISTS `". $table['name'] ."`;\n";
      // Remove newlines and convert " to ` because PDO seems to convert those for some reason.
      $out .= strtr($create['create table'], array("\n" => ' ', '"' => '`'));
      if ($table['auto_increment']) {
        $out .= " AUTO_INCREMENT=". $table['auto_increment'];
      }
      $out .= ";\n";
    }
    return $out;
  }
  
  /**
   *  Get the sql to insert the data for a given table
   */
  function _dump_table_data_sql_to_file($file, $table) {
    $rows_per_line = variable_get('backup_migrate_data_rows_per_line', 30);
    $bytes_per_line = variable_get('backup_migrate_data_bytes_per_line', 2000);
  
    $lines = 0;
    $data = $this->query("SELECT * FROM `". $table['name'] ."`", array(), array('fetch' => PDO::FETCH_ASSOC));
    $rows = $bytes = 0;

    // Escape backslashes, PHP code, special chars
    $search = array('\\', "'", "\x00", "\x0a", "\x0d", "\x1a");
    $replace = array('\\\\', "''", '\0', '\n', '\r', '\Z');
  
    $line = array();
    foreach ($data as $row) {
      // DB Escape the values.
      $items = array();
      foreach ($row as $key => $value) {
        $items[] = is_null($value) ? "null" : "'". str_replace($search, $replace, $value) ."'";
      }
  
      // If there is a row to be added.
      if ($items) {
        // Start a new line if we need to.
        if ($rows == 0) {
          $file->write("INSERT INTO `". $table['name'] ."` VALUES ");
          $bytes = $rows = 0;
        }
        // Otherwise add a comma to end the previous entry.
        else {
          $file->write(",");
        }
  
        // Write the data itself.
        $sql = implode(',', $items);
        $file->write('('. $sql .')');
        $bytes += strlen($sql);
        $rows++;
  
        // Finish the last line if we've added enough items
        if ($rows >= $rows_per_line || $bytes >= $bytes_per_line) {
          $file->write(";\n");
          $lines++;
          $bytes = $rows = 0;
        }
      }
    }
    // Finish any unfinished insert statements.
    if ($rows > 0) {
      $file->write(";\n");
      $lines++;
    }
  
    return $lines;
  }

  /**
   * Run a db query on this destination's db.
   */
  function query($query, $args = array(), $options = array()) {
    if ($conn = $this->_get_db_connection()) {
      return $conn->query($query, $args, $options);
    }
  }
}