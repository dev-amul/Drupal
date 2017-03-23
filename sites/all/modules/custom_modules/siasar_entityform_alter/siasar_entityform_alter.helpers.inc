<?php

// Global helper funcions that could be reused somewhere else.

/**
 * Gets a list of member countries, using taxonomy 'paises' as reference.
 */
function _siasar_entityform_alter_get_member_countries() {
  $query = new EntityFieldQuery;
  $query->entityCondition('entity_type', 'taxonomy_term');
  $query->entityCondition('bundle', 'paises');
  $query->fieldOrderBy('field_pais', 'iso2', 'ASC');
  $query->range(0, 1000);

  $result = $query->execute();
  if (isset($result['taxonomy_term'])) {
    $members = $result['taxonomy_term'];
  }

  $fields = field_info_instances('taxonomy_term', 'paises');
  $field_id = $fields['field_pais']['field_id'];
  field_attach_load('taxonomy_term', $members, FIELD_LOAD_CURRENT, array('field_id' => $field_id));

  return $members;
}

/**
 * Filters out countries from a #options list,
 * using a whitelist of member countries.
 */
function _siasar_entityform_alter_filter_out_countries_from_options($options, $members) {
  $new_options = array();
  if (isset($options['none'])) {
    $new_options['_none'] = $options['_none'];
  }

  foreach ($members as $member) {
    $member_iso2 = $member->field_pais[LANGUAGE_NONE][0]['iso2'];
    $new_options[$member_iso2] = $options[$member_iso2];
  }

  return $new_options;
}
