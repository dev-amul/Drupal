<?php

  function _siasar_updates_open_parse_csv($source) {
  $path = dirname(__FILE__);
  $file = fopen($path . '/' . $source, 'r');
  $entries = array();
  $entries_count;

  while ($entries[] = fgetcsv($file, 10000, ";", '"')) ;

  $entries_count = count($entries);

  if (!$entries[$entries_count - 1]) {
    unset ($entries[$entries_count - 1]);
  }

  return $entries;
}
