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
  module_load_include('inc', 'siasar_n11_manager', 'inc/siasar_n11_manager.helpers');

  $error_in_command_line = siasar_n11_manager_load_n11_error_check($country_code, $vocab_machine_name, $file_uri);
  if ($error_in_command_line)
    return;

  $is_drush = (drupal_is_cli() && function_exists('drush_main'));
  $country = country_load(strtoupper($country_code));
  $zipcode_in_csv = function_exists('drush_get_option')
    ? filter_var(drush_get_option('zip', false), FILTER_VALIDATE_BOOLEAN)
    : false;

  $vocab = taxonomy_vocabulary_machine_name_load($vocab_machine_name);

  $parse_csv = function($file) {
    return str_getcsv($file, ';');
  };
  $csv = array_map($parse_csv, file($file_uri));

  $terms_processed = array();
  $new_terms = 0;

  for($line = $skip; $line < count($csv) && isset($csv[$line]) && $line < ($lines + $skip); $line++) {
    $chunk = &$csv[$line];

    $terms_processed_level = &$terms_processed;
    $parent_term_id = 0;

      $real_chunk_length = $zipcode_in_csv
        ? count($chunk) - 1
        : count($chunk);

    for($i = 0; $i < $real_chunk_length; $i++) {
      $term_name = $chunk[$i];

      if (!isset($terms_processed_level[$term_name])) {

        $term = siasar_n11_manager_get_taxonomy_by_name_and_country($vocab->machine_name, $term_name, $parent_term_id, $country->iso2);
        if (count($term)) {
          $term = reset($term);
        }

        if (!$term) {
          $term = new stdClass();

          $term->parent = $parent_term_id;
          $term->name = $term_name;
          $term->vid = $vocab->vid;
          $term->field_pais[LANGUAGE_NONE][0]['iso2'] = $country->iso2;

          if ($zipcode_in_csv && $i == ($real_chunk_length - 1))
            $term->field_codigo_division_admin[LANGUAGE_NONE][0]['value'] = $chunk[$i + 1];

          taxonomy_term_save($term);
          $new_terms++;

        }

        $parent_term_id = $term->tid;
        $terms_processed_level[$term_name] = array(
          'tid' => $term->tid,
          'children' => array(),
        );

      } else {
        $parent_term_id = $terms_processed_level[$term_name]['tid'];
      }
      $terms_processed_level = &$terms_processed_level[$term_name]['children'];
    }
    if($is_drush && ($line / 25) == floor($line / 25)) {
      echo ('#');
    }
  }
  if ($is_drush)
    echo("\n");

  drupal_set_message('Lines processed: ' . ($line - $skip). ' Saved ' . $new_terms . ' new locations.');
}


function drush_siasar_remove_n11_countries($country_code = null) {
  $country = country_load(strtoupper($country_code));
  if (!is_object($country)) {
    drupal_set_message('No country specified, aborting.');
    return;
  }

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term')
  ->entityCondition('bundle', 'division_administrativa')
  ->fieldCondition('field_pais', 'iso2', $country->iso2);

  $result = $query->execute();

  if (!isset($result['taxonomy_term']) || count($result['taxonomy_term']) == 0) {
    drupal_set_message('No terms found, nothing to do, aborting.');
    return;
  }

  foreach($result['taxonomy_term'] as $k => $t) {
    taxonomy_term_delete($k);
  }

}
