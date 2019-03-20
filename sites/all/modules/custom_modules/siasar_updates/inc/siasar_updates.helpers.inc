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
