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

function siasar_updates_normalize_field_language($field = null, $entity_type) {
  if (empty($field)) return false;

  $query = db_select('field_data_' . $field, 'f');
  $query->fields('f');
  $query->condition('language' , 'und', '<>');
  $result = $query->execute();
  $count = 0;

  while($row = $result->fetchAssoc()) {
    $count++;
    $duplicates = _siasar_updates_normalize_field_language_get_duplicates($field, $row['entity_id']);
    _siasar_updates_normalize_field_language_and_delete($field, $duplicates, $entity_type);
  }

  return $count;
}

function _siasar_updates_normalize_field_language_get_duplicates($field, $entity_id) {
  $query = db_select('field_data_' . $field, 'f');
  $query->fields('f');
  $query->condition('entity_id' , $entity_id);
  $query->orderBy($field . '_revision_id', 'DESC');
  $result = $query->execute()->fetchAll();

  return $result;
}

function _siasar_updates_normalize_field_language_and_delete($field, $duplicates, $entity_type) {
  $others = $duplicates;
  $latest = array_shift($others);
  $prop_revision_id = $field . '_revision_id';

  // delete others
  foreach($others as $d) {
    $entity = entity_revision_load($entity_type, $d->{$prop_revision_id});
    if($entity) $entity->delete();

    $query = db_delete('field_data_' . $field)
      ->condition('entity_id', $d->entity_id)
      ->condition('revision_id', $d->revision_id)
      ->condition($prop_revision_id, $d->{$prop_revision_id});

    $query->execute();
  }

  // Normalize $latest
  if ($latest->language !== LANGUAGE_NONE)  {
    $query = db_update('field_data_' . $field)
      ->fields(array(
        'language' => LANGUAGE_NONE,
      ))
      ->condition('entity_id', $latest->entity_id)
      ->condition('revision_id', $latest->revision_id)
      ->condition($prop_revision_id, $latest->{$prop_revision_id});
    $query->execute();
  }
}
