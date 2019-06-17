<?php

/**
 * Implements hook_drush_command().
 */
function siasar_n11_manager_drush_command() {
  $items['siasar_load_n11'] = array(
    'description' => 'Load N11 manually',
    'aliases' => array('siasar-ln11'),
    'arguments' => array(
      'country_code' => 'Country code',
      'vocabulary vocab_machine_name name' => 'Vocabulary machine name',
      'file_uri' => 'CSV File URI (public://file.csv)',
      'skip' => 'Number of lines to skip',
      'linex' => 'Number of lines to process',
    ),
    'options' => [
      'zip' => 'Last column of the CSV file is a ZIP code (true/false, defaults to false)',
      'ignore first line' => 'First line to be ignored. Default to TRUE',
    ],
    'callback' => 'drush_siasar_load_n11',
    'examples' => array(
      'drush siasar-ln11 PE division_administrativa public://file.csv 0 1000' => 'Processes the first 1000 lines of the N11 for PERU.',
    ),
    'required-arguments' => TRUE,
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  $items['siasar-remove-n11-country'] = array(
    'description' => 'Removes all N11 data (taxonomy División Administrativa) for a country.',
    'aliases' => array('siasar-rn11c'),
    'arguments' => array(
      'country_iso2' => 'Country ISO2 code',
    ),
    'required-arguments' => true,
    'callback' => 'drush_siasar_remove_n11_countries',
    'examples' => array(
      'drush siasar-rn11c co' => 'Remove all N11 terms for Colombia (ISO2 CO).',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );


  $items['siasar-remove-n11-orphans'] = array(
    'description' => 'Removes all N11 terms (taxonomy División Administrativa) without assigned country.',
    'aliases' => array('siasar-rn11-o'),
    'arguments' => array(
    ),
    'required-arguments' => true,
    'callback' => 'drush_siasar_remove_orphan_n11_entries',
    'examples' => array(
      'drush siasar-rn11-o' => 'Removes all N11 orphan terms from division_administrativa vocabulary.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  return $items;
}

/**
 * Load N11 table from CSV file (separated by ;) from the command line
 * This is a Drush command callback.
 *
 * @param string $country_code
 * @param string $vocab_machine_name
 * @param string $file_uri
 * @param integer $skip
 * @param int $lines
 * @return void
 */
function drush_siasar_load_n11($country_code, $vocab_machine_name, $file_uri = 'public://file.csv', $skip = 0, $lines) {
  $zipcode_in_csv = function_exists('drush_get_option')
    ? filter_var(drush_get_option('zip', false), FILTER_VALIDATE_BOOLEAN)
    : false;

  siasar_n11_manager_load_n11($country_code, $vocab_machine_name, $file_uri, $skip, $lines, $zipcode_in_csv);
}

/**
 * Drush command to remove full N11 table for a specified country
 *
 * @param string $country_code (iso2 format)
 * @return void
 */
function drush_siasar_remove_n11_countries($country_code) {
  siasar_n11_manager_remove_n11_countries($country_code);
}


/**
 * Removes all taxonomies terms from division_administrativa without country.
 */
function drush_siasar_remove_orphan_n11_entries() {

  $vocabulary_machine_name = 'division_administrativa';

  $statement = "SELECT tid
    FROM {taxonomy_term_data} t
      INNER JOIN {taxonomy_vocabulary} v ON t.vid = v.vid
      LEFT JOIN {field_data_field_pais} f on t.tid = f.entity_id and f.bundle = v.machine_name and f.entity_type = 'taxonomy_term'
     WHERE f.entity_id IS NULL AND v.machine_name = :vocabulary_name";

  $query = db_query($statement,
    array(
      ':vocabulary_name' => $vocabulary_machine_name
    )
  );

  $tids = $query->fetchCol();
  $num_updated = 0;
  foreach($tids as $tid){
    taxonomy_term_delete($tid);
    $num_updated++;
  }

  drupal_set_message('Removed ' . $num_updated . ' orphan taxonomies.');

}
