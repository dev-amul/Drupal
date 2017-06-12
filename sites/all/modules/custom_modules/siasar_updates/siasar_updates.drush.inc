<?php

/**
 * Implements hook_drush_command().
 */
function siasar_updates_drush_command() {

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

  return $items;
}

function drush_siasar_remap_unit($field, $old, $new) {
  drupal_set_message('Old is ' . $old);
  drupal_set_message('New is ' . $new);
  drupal_set_message('Field is ' . $field);

  $sql_find = "SELECT * FROM field_data_{$field} WHERE {$field}_target_id = $old";

  $result = db_query($sql_find);
  $items = $result->fetchAll();
  $items_count = count($items);

  if ($items_count == 0) {
    drupal_set_message('No items found, nothing to do.');
    return;
  }

  $proceed = drush_confirm('Found ' . $items_count . ' items. Do you want to proceed? There\'s no undo!');

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

function drush_siasar_fill_missing_countries($country_to_check = null) {
  $country_to_check = is_string($country_to_check)
    ? strtoupper($country_to_check)
    : null;
  $vid = 2; // 2 = Division Administrativa
  $terms_array = taxonomy_get_tree($vid,0,1,false);
  $terms = array();
  $num_updated = 0;

  foreach ($terms_array as $term) {
    $entity_term = entity_metadata_wrapper('taxonomy_term', taxonomy_term_load($term->tid));
    $country = $entity_term->field_pais->value();

    if($country_to_check && $country->iso2 != $country_to_check) continue;

    $terms[] = $entity_term;
    $children = taxonomy_get_tree($vid,$term->tid);
    foreach($children as $child) {
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
