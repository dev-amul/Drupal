<?php

/**
 * Implements hook_drush_command().
 */
function siasar_updates_drush_command() {

  $items['siasar-find-broken-unit'] = array(
    'description' => 'Detects all broken units in any MVF field.',
    'aliases' => array('siasar-bu'),
    'callback' => 'drush_siasar_find_broken_unit',
    'arguments' => array(
    ),
    'required-arguments' => true,
    'examples' => array(
      'drush siasar-bfu' => 'Looks for all broken relationships to MVF fields.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  $items['siasar-find-unit'] = array(
    'description' => 'Detects in which field a unit is being used.',
    'aliases' => array('siasar-fu'),
    'callback' => 'drush_siasar_find_unit',
    'arguments' => array(
      'unit' => 'Unit ID.',
    ),
    'required-arguments' => true,
    'examples' => array(
      'drush siasar-fu 56' => 'Looks in all the MVF fields for a unit with ID 56.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  $items['siasar-remap-unit-global'] = array(
    'description' => 'It remaps entities using old units to new ones, as referenced in `units_unit` table.',
    'aliases' => array('siasar-rug'),
    'callback' => 'drush_siasar_remap_unit_global',
    'arguments' => array(
      'old' => 'Old Unit ID',
      'new' => 'New unit ID.',
    ),
    'required-arguments' => true,
    'examples' => array(
      'drush siasar-rug 42 56' => 'Remaps all occurrences of Unit 42 to unit 56 on all MVF fields, no matter the entity it belongs to.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  $items['siasar-remap-unit'] = array(
    'description' => 'It remaps entities using old units to new ones, as referenced in `units_unit` table.',
    'aliases' => array('siasar-ru'),
    'callback' => 'drush_siasar_remap_unit',
    'arguments' => array(
      'field' => 'Field machine name',
      'old' => 'Old Unit ID',
      'new' => 'New unit ID.',
    ),
    'required-arguments' => true,
    'examples' => array(
      'drush siasar-ru field_location 42 56' => 'Remaps all occurrences of Unit 42 to unit 56 on field_location, no matter the entity it belongs to.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  $items['siasar-fill-taxonomies-missing-countries'] = array(
    'description' => 'It adds the missing country on those vocabularies that doesnt have one already set.',
    'aliases' => array('siasar-fvmc'),
    'arguments' => array(
      'vocabulary_machine_name' => 'Vocabulary machine name',
      'country_code' => 'Country ISO2 code',
    ),
    'required-arguments' => true,
    'callback' => 'drush_siasar_fill_taxonomies_missing_countries',
    'examples' => array(
      'drush siasar-fvmc area_planificacion CO' => 'It adds the country Colombia to the terms that have no country, belonging to area_planificacion vocabulary.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  $items['siasar-fill-missing-countries'] = array(
    'description' => 'It adds the missing country on those administrative divisions that doesnt have one already set.',
    'aliases' => array('siasar-fmc'),
    'arguments' => array(
      'country_iso2' => 'Country ISO2 code',
    ),
    'required-arguments' => false,
    'callback' => 'drush_siasar_fill_missing_countries',
    'examples' => array(
      'drush siasar-fmc' => 'It adds the missing country on those administrative divisions that don\'t have one already set.',
      'drush siasar-fmc co' => 'Same as before, but only for Colombia (ISO2 CO).',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
  );

  $items['siasar-remove-n11-orphans'] = array(
    'description' => 'Removes all N11 data (taxonomy División Administrativa) for a country.',
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

  $items['siasar_update_rerun'] = array(
    'description' => 'Manually rerun an update hook for a module',
    'aliases' => array('siasar-urr'),
    'arguments' => array(
      'module' => 'Module',
      'version' => 'Update hook number',
    ),
    'callback' => 'drush_siasar_update_rerun',
    'required-arguments' => TRUE,
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

function drush_siasar_find_broken_unit() {
  $fields = field_info_fields();
  $mvf_fields = array(
    'mvf_number_integer_entityreference',
    'mvf_number_decimal_entityreference'
  );

  $query = [];

  foreach ($fields as $name => $field) {
    if ($field['module'] === 'mvf' && in_array($field['type'], $mvf_fields)) {
      $query []= "SELECT DISTINCT {$name}_target_id FROM field_data_{$name} a LEFT JOIN units_unit b ON a.{$name}_target_id = b.umid WHERE b.umid is NULL";
      $query []= "SELECT DISTINCT {$name}_target_id FROM field_revision_{$name} a LEFT JOIN units_unit b ON a.{$name}_target_id = b.umid WHERE b.umid is NULL";
    }
  }

  if (!empty($query)) {

    $result = db_query(implode(' UNION ALL ', $query));
    $items_data = $result->fetchCol();

    $items_data = array_unique($items_data);
    asort($items_data);
    drupal_set_message(implode("\n", $items_data));
  }
}


function drush_siasar_find_unit($unit, $detailed = FALSE) {
  $fields = field_info_fields();

  $fields_counter = array();
  $mvf_fields = array(
    'mvf_number_integer_entityreference',
    'mvf_number_decimal_entityreference'
  );

  foreach($fields as $name => $field) {
    if ($field['module'] === 'mvf' && in_array($field['type'], $mvf_fields)) {
      $fields_counter[] = $name;
      $sql_find = "SELECT * FROM field_data_{$name} WHERE {$name}_target_id = $unit";
      $result = db_query($sql_find);
      $items_data = $result->fetchAll();
      $items_data_count = count($items_data);

      $sql_find = "SELECT * FROM field_revision_{$name} WHERE {$name}_target_id = $unit";
      $result = db_query($sql_find);
      $items_revisions = $result->fetchAll();
      $items_revisions_count = count($items_revisions);

      $map_function = function($item) use ($name) {
        $msg = 'entity_id: ' . $item->entity_id . ' - entity_type: ' . $item->entity_type . ' - revision_id: ' . $item->revision_id . ' - value: ' . $item->{$name . '_value'};
        if ($item->entity_type === 'field_collection_item') {
          $sql_find = "SELECT * FROM field_collection_item WHERE item_id = {$item->entity_id} and revision_id = {$item->revision_id}";
          $result = db_query($sql_find);
          $field_collection = $result->fetchAll();

          if (!empty($field_collection)) {
            $field_collection = $field_collection[0];
            $sql_find = "SELECT * FROM field_revision_{$field_collection->field_name} WHERE {$field_collection->field_name}_value = {$field_collection->item_id} and {$field_collection->field_name}_revision_id = {$field_collection->revision_id}";
            $result = db_query($sql_find);
            $entity = $result->fetchAll();

            if (!empty($entity)) {
              $entity = $entity[0];
              $msg .= ' - [Host entity data] id: ' . $entity->entity_id . ' - revision: ' . $entity->revision_id . ' - bundle: ' . $entity->bundle;
            }
          }
        }

        return $msg;
      };
      if ($items_data_count) {
        drupal_set_message('Unit found at table: field_data_' . $name . ' - Matches: ' . $items_data_count);
        if ($detailed) {
          $results = array_map($map_function, $items_data);
          drupal_set_message(implode("\n", $results));
        }
      }
      if ($items_revisions_count) {
        drupal_set_message('Unit found at table: field_revision_' . $name . ' - Matches: ' . $items_revisions_count);
        if ($detailed) {
          $results = array_map($map_function, $items_revisions);
          drupal_set_message(implode("\n", $results));
        }
      }
    }
  }

  drupal_set_message('Reviewed ' . count($fields_counter) . ' fields and revisions.');
}

function drush_siasar_remap_unit_global($old, $new) {
  $fields = field_info_fields();

  $mvf_fields = array(
    'mvf_number_integer_entityreference',
    'mvf_number_decimal_entityreference'
  );

  foreach($fields as $name => $field) {
    if ($field['module'] === 'mvf' && in_array($field['type'], $mvf_fields)) {
      drush_siasar_remap_unit($name, $old, $new);
    }
  }
}

function drush_siasar_remap_unit($field, $old, $new) {
  drupal_set_message("Field is $field, converting $old -> $new");

  $sql_find = "SELECT * FROM field_data_{$field} WHERE {$field}_target_id = $old";
  $result = db_query($sql_find);
  $items = $result->fetchAll();
  $items_data_count = count($items);

  $sql_find = "SELECT * FROM field_revision_{$field} WHERE {$field}_target_id = $old";
  $result = db_query($sql_find);
  $items = $result->fetchAll();
  $items_revisions_count = count($items);

  if (!$items_data_count && !$items_revisions_count) {
    drupal_set_message('No items found, nothing to do.');
    return;
  }

  $proceed = function_exists('drush_confirm')
    ? drush_confirm('Found ' . ($items_data_count + $items_revisions_count) . ' items. Do you want to proceed? There\'s no undo!')
    : true;

  if (!$proceed) return;

  $column_name = $field . '_target_id';
  $num_updated = db_update('field_data_' . $field)
    ->fields(array(
      $column_name => $new,
    ))
    ->condition($column_name, $old, '=')
    ->execute();
  $num_updated = db_update('field_revision_' . $field)
    ->fields(array(
      $column_name => $new,
    ))
    ->condition($column_name, $old, '=')
    ->execute();

    drupal_set_message($num_updated . ' affected rows.');
}

function drush_siasar_fill_taxonomies_missing_countries($vocabulary_machine_name, $country_code) {

  $vocab = taxonomy_vocabulary_machine_name_load($vocabulary_machine_name);
  $country_code = is_string($country_code)
    ? strtoupper($country_code)
    : null;
  $num_updated = 0;
  $country = country_load(strtoupper($country_code));

  if ($vocab && $country) {

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

    foreach($tids as $tid){
      $loaded_term = taxonomy_term_load($tid);
      if (empty($loaded_term->field_pais)) {
        drupal_set_message('Country missing in term id : '.$loaded_term->tid . ', name: ' . $loaded_term->name);
        _siasar_updates_set_country_on_entity('taxonomy_term', $loaded_term, $country);
        $num_updated++;
      }
    }


  } else {
    if (!$vocab) {
      drupal_set_message('Vocabulary: ' . $vocabulary_machine_name . ' does not exist.');
    }
    if (!$country_code) {
      drupal_set_message('Country code: ' . $country_code . ' does not exist.');
    }
  }

  drupal_set_message($num_updated.' terms updated');
}

function drush_siasar_fill_missing_countries($country_to_check = null) {
  $country_to_check = is_string($country_to_check)
    ? strtoupper($country_to_check)
    : null;
  $vid = 2; // 2 = Division Administrativa
  $terms_array = taxonomy_get_tree($vid, 0, 1, false);
  $terms = array();
  $num_updated = 0;

  foreach ($terms_array as $term) {
    $entity_term = entity_metadata_wrapper('taxonomy_term', taxonomy_term_load($term->tid));
    $country = $entity_term->field_pais->value();

    if ($country_to_check && $country->iso2 != $country_to_check) continue;

    $terms[] = $entity_term;
    $children = taxonomy_get_tree($vid,$term->tid);
    foreach ($children as $child) {
      $loaded_term = taxonomy_term_load($child->tid);
      if (empty($loaded_term->field_pais)) {
        drupal_set_message('Country missing in term id : '.$loaded_term->tid . ', name: ' . $loaded_term->name);
        _siasar_updates_set_country_on_entity('taxonomy_term', $loaded_term, $country);
        $num_updated++;
      }
    }
  }
  drupal_set_message($num_updated.' terms updated');
}

function _siasar_updates_set_country_on_entity($entity_type, $entity, $country) {
  $wrapper = entity_metadata_wrapper('taxonomy_term', $entity);
  $wrapper->field_pais->set($country);
  $wrapper->save();
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

/**
 * Manually run hook_update_n
 * Example: drush siasar-urr siasar_updates 7101
 */
function drush_siasar_update_rerun($module, $version) {
  if (!module_load_install($module)) {
    drush_log('Unable to load ' . $module .'.install', 'error');
    return;
  }
  $update_hooks = drupal_get_schema_versions($module);
  if (empty($update_hooks) || !in_array($version, $update_hooks)) {
    drush_log('Update hook unavailable', 'error');
    return;
  }
  $function = $module . '_update_' . $version;
  $function();
}
