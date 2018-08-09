<?php

// Helper functions for "drush_siasar_load_n11" function

/**
 * Check and display errors in command line parameters set for execution.
 *
 * @param string $country_code
 * @param string $vocab_machine_name
 * @param string $file_uri
 * @return bool
 */
function _siasar_n11_manager_load_n11_error_check($country_code, $vocab_machine_name, $file_uri) {
  $country = country_load(strtoupper($country_code));
  $vocab = taxonomy_vocabulary_machine_name_load($vocab_machine_name);
  $error = false;

  if (!$country) {
    drupal_set_message('Country code: [' . $country_code . '] does not exist.', 'error');
    $error = true;
  }

  if (!$vocab) {
    drupal_set_message('Vocabulary with machine name: [' . $vocab_machine_name . '] does not exist.', 'error');
    $error = true;
  }

  if (!file_exists($file_uri)) {
    drupal_set_message('File: ' . $file_uri . ' does not exist.', 'error');
    $error = true;
  }

  return $error;
}

/**
 * Returns a taxonomy term from a specific country based on its name.
 *
 * @param $vocabulary_name
 * @param $name
 * @param $parent_term_id
 * @param $country_code
 *
 * @return mixed
 */
function _siasar_n11_manager_get_taxonomy_by_name_and_country($vocabulary_name, $name, $parent_term_id, $country_code) {

  $query = db_query(
    'SELECT td.tid FROM {taxonomy_term_data} td
            INNER JOIN {taxonomy_vocabulary} tv ON td.vid = tv.vid
            INNER JOIN {taxonomy_term_hierarchy} th ON td.tid = th.tid
            INNER JOIN {field_data_field_pais} fp ON fp.entity_type = :entity_type AND 
              fp.bundle = :vocabulary_name AND 
              fp.field_pais_iso2 = :country_code AND fp.entity_id = td.tid
            WHERE 
              th.parent = :parent_tid AND 
              tv.machine_name = :vocabulary_name AND 
              td.name = :term_name',
    array(
      ':parent_tid' => $parent_term_id,
      ':vocabulary_name' => $vocabulary_name,
      ':term_name' => $name,
      ':country_code' => $country_code,
      ':entity_type' => 'taxonomy_term'
    )
  );
  return $query->fetchAllAssoc('tid');
}
