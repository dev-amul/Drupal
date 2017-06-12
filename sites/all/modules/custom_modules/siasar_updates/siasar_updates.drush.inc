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
    'callback' => 'drush_siasar_fill_missing_countries',
    'examples' => array(
      'drush siasar-fmc' => 'It adds the missing country on those administrative divisions that doesnt have one already set.',
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

function drush_siasar_fill_missing_countries() {
  $vid = 2; // 2 = Division Administrativa
  $terms_array = taxonomy_get_tree($vid,0,1,false);
  $terms = array();
  $num_updated = 0;
  foreach ($terms_array as $term){
    $entity_term = entity_metadata_wrapper('taxonomy_term', taxonomy_term_load($term->tid));
    $country = $entity_term->field_pais->value();

    $terms[] = $entity_term;
    $children = taxonomy_get_tree($vid,$term->tid);
    foreach($children as $child) {
      $loaded_term = taxonomy_term_load($child->tid);
      if (empty($loaded_term->field_pais)) {
        watchdog('siasar_updates', 'Country missing in term id : %tid', array('%tid' => $loaded_term->tid)));
        drupal_set_message('Country missing in term id : '.$loaded_term->tid);
        _siasar_updates_set_country($loaded_term->tid, $country);
        $num_updated++;
      }
    }
  }
  drupal_set_message($num_updated.' terms updated');
}

function _siasar_updates_set_country($tid, $country) {
  $entity_term = entity_metadata_wrapper('taxonomy_term', taxonomy_term_load($tid));
  $entity_term->field_pais->set($country);
  $entity_term->save();
}
