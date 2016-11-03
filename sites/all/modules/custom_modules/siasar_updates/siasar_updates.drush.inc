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
      'drush siasar-ru field_location 42 56 ' => 'Remaps all occurrences of Unit 42 to unit 56 on field_location, no matter the entity it belongs to.',
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

  drupal_set_message('Items: ' . count($items));

  $sql_update = "UPDATE field_data_{$field} SET field_{$field}_target_id = $new WHERE {$field}_target_id = $old";

  //db_query($query, array $args = array(), array $options = array())
  //db_update($table, array $options = array())


/*

$result = db_query('SELECT n.nid, n.title, n.created
FROM {node} n WHERE n.uid = :uid', array(':uid' => $uid));

$num_updated = db_update('node') // Table name no longer needs {}
  ->fields(array(
    'uid' => 5,
    'status' => 1,
  ))
  ->condition('created', REQUEST_TIME - 3600, '>=')
  ->execute();
  */
  drupal_set_message($sql_find);
  drupal_set_message($sql_update);
}
