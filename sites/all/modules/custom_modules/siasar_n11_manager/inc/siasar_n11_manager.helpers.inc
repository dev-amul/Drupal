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

function _siasar_n11_manager_rematch_location_to_new_terms($list) {

}

/**
 * Returns location field (field_entidad_local) value for a  entitform
 *
 * @param int $entityform_id 
 * @return int field_entidad_local_value
 */
function _siasar_n11_manager_fetch_entityform_location_tid($entityform_id) {
  $query_string = "SELECT * FROM {entityform} as e
    LEFT JOIN {field_data_field_entidad_local} AS l 
      ON l.entity_id = e.entityform_id 
      AND l.entity_type = 'entityform'
    WHERE e.entityform_id = :id
    
    ORDER BY l.revision_id DESC
    LIMIT 1;";

  $placeholders = array(
    ':id' => $entityform_id
  );

  $query = db_query($query_string, $placeholders);
  $result = $query->fetchAllAssoc('entityform_id');

  return (int) $result[$entityform_id]->field_entidad_local_tid;
}

/**
 * Get taxonomy term name from ID
 *
 * @param int $tid
 * @return string
 */
function _siasar_n11_manager_get_taxonomy_name_from_tid($tid) {
  $term = taxonomy_term_load($tid);
  return $term->name;
}

/**
 * Get all entityforms for a country
 *
 * @param string $country (iso2)
 * @return array entity_ids
 */
function _siasar_n11_manager_get_all_entityform_ids_for_country($country) {
  $country = country_load(strtoupper($country));

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'entityform')
    ->fieldCondition('field_pais', 'iso2', $country->iso2);

  $result = $query->execute();
  $ret = array_keys($result['entityform']);

  return $ret;
}
