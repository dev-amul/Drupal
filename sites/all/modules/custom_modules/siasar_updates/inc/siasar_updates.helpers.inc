<?php

function _siasar_updates_open_parse_csv($source) {
  $file = fopen(DRUPAL_ROOT . '/sites/all/modules/custom_modules/siasar_updates/files/' . $source, 'r');
  $entries = array();
  $entries_count;

  while ($entries[] = fgetcsv($file, 0, ",", '"'));

  $entries_count = count($entries);

  if (!$entries[$entries_count - 1]) {
    unset ($entries[$entries_count - 1]);
  }
  return $entries;
}

/**
 * Helper function to retrieve all forms with invalid users assigned.
 *
 * @return array
 *   Array with entityforms IDs.
 */
function _get_orphan_entityforms() {
  $anonymous_ef = _get_anonymous_entityforms();
  $orphan_ef = _get_user_orphan_entityforms();

  if (!empty($anonymous_ef) && !empty($orphan_ef)) {
    $results = array_merge($anonymous_ef, $orphan_ef);
  }
  elseif (!empty($anonymous_ef)) {
    $results = $anonymous_ef;
  }
  else {
    $results = $orphan_ef;
  }

  return $results;
}

/**
 * Extract all forms without user.
 *
 * @return mixed
 */
function _get_anonymous_entityforms() {
  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'entityform');
  $query->propertyCondition('uid', NULL, "IS NULL");

  $results = $query->execute();

  return $results['entityform'];
}

/**
 * Get all forms with invalid user ID.
 *
 * @return mixed
 */
function _get_user_orphan_entityforms() {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'user');
  $users = $query->execute()['user'];
  $users_ids = array_keys($users);

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'entityform');
  $query->propertyCondition('uid', $users_ids, 'NOT IN');

  $results = $query->execute()['entityform'];

  return $results;
}

/**
 * Get all field collection wrong in con_system_ wrong.
 *
 * @return mixed
 */
function _get_a5_wrong_field_collection() {

  // Get values to exclude from the update.
  $excluded_results = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                                        LEFT OUTER JOIN field_data_field_com_viv_con_sistnva ON field_collection_item.item_id = field_data_field_com_viv_con_sistnva.entity_id
                                        LEFT OUTER JOIN field_data_field_system_ref ON field_collection_item.item_id = field_data_field_system_ref.entity_id
                                        LEFT OUTER JOIN field_data_field_prestador_servicio ON field_collection_item.item_id = field_data_field_prestador_servicio.entity_id
                                        WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                                        AND field_data_field_com_viv_con_sistnva.field_com_viv_con_sistnva_value=0
                                        AND field_data_field_system_ref.field_system_ref_target_id ISNULL
                                        AND field_data_field_prestador_servicio.field_prestador_servicio_target_id ISNULL");

  $excluded_results = $excluded_results->fetchAllKeyed(0, 0);

  // Find all values that are invalid for A5 field.
  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                LEFT OUTER JOIN field_data_field_prestador_servicio ON field_collection_item.item_id = field_data_field_prestador_servicio.entity_id
                WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                AND field_data_field_prestador_servicio.entity_id ISNULL
                AND field_collection_item.item_id NOT IN (:eforms_excluded)", array(':eforms_excluded' => $excluded_results));

  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                LEFT OUTER JOIN field_data_field_system_ref ON field_collection_item.item_id = field_data_field_system_ref.entity_id
                WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                AND field_data_field_system_ref.entity_id ISNULL
                AND field_collection_item.item_id NOT IN (:eforms_excluded)", array(':eforms_excluded' => $excluded_results));

  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                LEFT OUTER JOIN field_data_field_com_viv_con_sistnva ON field_collection_item.item_id = field_data_field_com_viv_con_sistnva.entity_id
                WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                AND field_data_field_com_viv_con_sistnva.entity_id ISNULL
                AND field_collection_item.item_id NOT IN (:eforms_excluded)", array(':eforms_excluded' => $excluded_results));

  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                LEFT OUTER JOIN field_data_field_com_viv_con_sistnva ON field_collection_item.item_id = field_data_field_com_viv_con_sistnva.entity_id
                LEFT OUTER JOIN field_data_field_system_ref ON field_collection_item.item_id = field_data_field_system_ref.entity_id
                LEFT OUTER JOIN field_data_field_prestador_servicio ON field_collection_item.item_id = field_data_field_prestador_servicio.entity_id
                WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                AND field_data_field_com_viv_con_sistnva.field_com_viv_con_sistnva_value=0
                AND field_data_field_com_viv_con_sistnva.entity_id NOT IN (:eforms_excluded)", array(':eforms_excluded' => $excluded_results));

  $field_collections = [];

  foreach ($queries as $query) {
    $aux = $field_collections;
    $field_collections = array_merge($query->fetchAllAssoc('item_id'), $aux);
  }

  $field_collections = array_map(function ($o) {
    return $o->item_id;
  }, $field_collections);

  // Remove possible duplicate values.
  $field_collections = array_unique($field_collections);

  return $field_collections;
}

/**
 * Get entities with A5 field wrong
 *
 * @return mixed
 */
function _get_entities_with_a5_field_wrong() {
  $field_collections = _get_a5_wrong_field_collection();
  $migrate_users = [522, 526, 523, 528, 521];

  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'entityform')
    ->propertyCondition('type', 'comunidad', '=')
    ->propertyCondition('uid', $migrate_users, 'NOT IN')
    ->fieldCondition('field_status', 'value', '4', '=')
    ->fieldCondition('field_com_viv_con_sistema', 'value', $field_collections, 'IN');

  $results = $query->execute();

  return $results['entityform'];
}
