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
