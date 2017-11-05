<?php

/**
 * The following script normalizes "de-translated" fields. When a field is set as "translatable"
 * and then set back to "not translatable", Drupal makes its best to normalize this data,
 * transforming the data stored into language neutral (LANGUAGE_NONE) content.
 *
 * Sometimes this normalization is not possible, because data exists in more than one language.
 *
 * This script locates the latest version, normalizes it to LANGUAGE_NONE and remove all others.
 */

function siasar_updates_normalize_field_language($field, $entity_type, $verbose = false) {
  $field_revision_id_exists = _siasar_updates_normalize_field_language_validate_field_revision_id($field);
  $query = db_select('field_data_' . $field, 'f');
  $query->fields('f');
  $query->condition('language' , 'und', '<>');
  $result = $query->execute();
  $count = 0;

  while($row = $result->fetchAssoc()) {
    $count++;
    $duplicates = _siasar_updates_normalize_field_language_get_duplicates($field, $row['entity_id'], $field_revision_id_exists);
    _siasar_updates_normalize_field_language_process_duplicates($field, $duplicates, $entity_type, $field_revision_id_exists, $verbose);
  }

  return $count;
}

/**
 * Helper function to find duplicated data.
 *
 * Returns query result.
 */
function _siasar_updates_normalize_field_language_get_duplicates($field, $entity_id, $field_revision_id_exists) {

  $query = db_select('field_data_' . $field, 'f');
  $query->fields('f');
  $query->condition('entity_id' , $entity_id);
  if ($field_revision_id_exists) {
    $query->orderBy($field . '_revision_id', 'DESC');
  }
  $result = $query->execute()->fetchAll();

  return $result;
}

function _siasar_updates_normalize_field_language_validate_field_revision_id($field) {
  $sql = "SELECT exists (" .
    "SELECT 1 FROM information_schema.columns WHERE table_name='".'field_data_'.$field.
    "' and column_name='" . $field . '_revision_id' . "' LIMIT 1)";
  $result = db_query($sql)->fetchField();

  return $result;
}

function _siasar_updates_normalize_field_language_process_duplicates($field, $duplicates, $entity_type, $field_revision_id_exists, $verbose) {
  if (empty($duplicates)) return;

  $others = $duplicates;
  $latest = null;
  $prop_revision_id = null;

  if ($field_revision_id_exists) {
    $latest = array_shift($others);
    $prop_revision_id = $field . '_revision_id';
  }

  // delete others
  $output = _siasar_updates_normalize_field_language_delete_others($field, $entity_type, $others, $field_revision_id_exists, $prop_revision_id);
  if ($verbose) {
    echo ($output . ' duplicates removed. ');
  }

  // Normalize $latest
  $output = _siasar_updates_normalize_field_language_normalize_latest($field, $latest, $field_revision_id_exists, $prop_revision_id);
  if ($verbose) {
    echo ($output . ' duplicates updated. ');
  }
}


function _siasar_updates_normalize_field_language_delete_others($field, $entity_type, $others, $field_revision_id_exists, $prop_revision_id) {
  foreach($others as $d) {
    if($prop_revision_id) {
      $entity = entity_revision_load($entity_type, $d->{$prop_revision_id});
      if ($entity && $entity->language != 'und') $entity->delete();
    }

    $query = db_delete('field_data_' . $field)
      ->condition('entity_id', $d->entity_id)
      ->condition('revision_id', $d->revision_id)
      ->condition('language' , 'und', '<>');

    if ($field_revision_id_exists) {
      $query->condition($prop_revision_id, $d->{$prop_revision_id});
    }
    return $query->execute();
  }
}

function _siasar_updates_normalize_field_language_normalize_latest($field, $latest, $field_revision_id_exists, $prop_revision_id) {
  if ($latest == null || $latest->language == LANGUAGE_NONE) return;

  $query = db_update('field_data_' . $field)
    ->condition('entity_id', $latest->entity_id)
    ->condition('revision_id', $latest->revision_id)
    ->fields(array(
      'language' => LANGUAGE_NONE,
    ));

  if ($field_revision_id_exists) {
    $query->condition($prop_revision_id, $latest->{$prop_revision_id});
  }
  return $query->execute();
}
