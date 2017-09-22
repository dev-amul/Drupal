<?php

function siasar_updates_load_n11_colombia_from_csv($source){
  module_load_include('inc', 'siasar_updates', 'inc/siasar_updates.helpers');
  $entries = siasar_updates_open_parse_csv($source);

}

function siasar_updates_open_parse_csv($source) {
  $path = dirname(__FILE__);
  $file = fopen($path . '/' . $source, 'r');
  $entries = array();
  $entries_count;

  while ($entries[] = fgetcsv($file, 0, ";", '"')) ;

  $entries_count = count($entries);

  if (!$entries[$entries_count - 1]) {
    unset ($entries[$entries_count - 1]);
  }

  return $entries;
}
