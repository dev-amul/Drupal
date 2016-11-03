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
