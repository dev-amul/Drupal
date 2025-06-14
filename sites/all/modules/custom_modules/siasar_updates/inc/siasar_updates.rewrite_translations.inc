<?php

// Rewrite translations from CSV

function siasar_updates_rewrite_translations_from_csv($source) {
  module_load_include('inc', 'siasar_updates', 'siasar_updates.helpers');
  $entries = _siasar_updates_open_parse_csv($source);
  $groups = field_group_info_groups();

  foreach ($entries as $entry) {
    siasar_updates_update_source_of_translation($entry[0], $entry[1]);
    siasar_updates_update_field_groups($groups, $entry[0], $entry[1]);
  }
}

function siasar_updates_update_source_of_translation($source_string, $destination_string) {
  $source_string = strtolower($source_string);
  $query = db_update('locales_source')
    ->fields(array(
        'source' => $destination_string
      )
    )
    ->where('LOWER(source) LIKE LOWER(\''. '%' . db_like($source_string) . '%\')')
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
  $clean_source = _siasar_updates_clean_string($source);

  foreach($group_tree as $group) {
    $clean_label = _siasar_updates_clean_string($group->label);

    if ($clean_label != $clean_source) continue;

    $entity_group = field_group_load_field_group($group->group_name, $group->entity_type, $group->bundle, $group->mode);
    $entity_group->label = trim($target);
    field_group_group_save($entity_group);
  }
}

function _siasar_updates_clean_string($src) {
  return trim(strtolower($src));
}
