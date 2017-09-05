<?php

// Rewrite translations from CSV

function siasar_updates_rewrite_translations_from_csv($source) {
  $entries = siasar_updates_open_parse_csv($source);
  $groups = field_group_info_groups();

  foreach ($entries as $entry) {
    siasar_updates_update_source_of_translation($entry[0], $entry[1]);
    siasar_updates_update_field_groups($groups, $entry[0], $entry[1]);
  }
}

function siasar_updates_open_parse_csv($source) {
  $path = dirname(__FILE__);
  $file = fopen($path . '/../files/translation_rewrite_source.csv', 'r');
  $entries = array();
  $entries_count;

  while ($entries[] = fgetcsv($file, 10000, ";", '"')) ;

  $entries_count = count($entries);

  if (!$entries[$entries_count - 1]) {
    unset ($entries[$entries_count - 1]);
  }

  return $entries;
}

function siasar_updates_update_source_of_translation($source_string, $destination_string) {
  $query = db_update('locales_source')
    ->fields(array(
        'source' => $destination_string
      )
    )
    ->condition('source', $source_string)
    ->execute();

  return $query;
}

function siasar_updates_update_field_groups($group_tree, $source, $target) {

  if (is_object(reset($group_tree))) {
    siasar_updates_match_update_field_group($group_tree, $source, $target);
    return;
  }

  foreach ($group_tree as $element) {
    siasar_updates_update_field_groups($element, $source, $target);
  }
}

function siasar_updates_match_update_field_group($group_tree, $source, $target) {
  foreach($group_tree as $group) {
    if ($group->label !== $source) continue;

    $group->label = $target;
    field_group_group_save($group);
    break;
  }
}
