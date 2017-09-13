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
  if (isset($options['_none'])) {
    $new_options['_none'] = $options['_none'];
  }

  foreach ($members as $member) {
    $member_iso2 = $member->field_pais[LANGUAGE_NONE][0]['iso2'];
    $new_options[$member_iso2] = t($options[$member_iso2]);
  }
  asort($new_options);

  return $new_options;
}

function _siasar_entityform_alter_date(&$items){

    $date = &$items[0]['value'];
    if(empty($date)) return;
    $parsed_date = date_parse($date);
    if(!$parsed_date) return;
    if(!$parsed_date['year'] ||
                !$parsed_date['month'] || !$parsed_date['day']){
                        $date = $date.'-01-01T00:00';
        }
    }


/**
 * Creates a select box with all entity type bundles as options
 *
 * @return array
 */
function _siasar_entityform_alter_create_entityforms_select_field($empty_value = null) {
  $entity_info = entity_get_info('entityform');
  $form_types = $entity_info['bundles'];
  $options = array();

  foreach ($form_types as $machine => $type) {
    $label_location = 'entityform:entityform_type:' . $machine . ':label';
    $translated_label = i18n_string_translate($label_location, $form_types[$machine]['label']);
    $options[$machine] = $translated_label;
  }
  $form_type_selector = array(
    '#type' => 'select',
    '#options' => $options,
    '#required' => false,
    '#empty_option' => t('- All -'),
  );

  if ($empty_value) {
    $form_type_selector['#empty_value'] = $empty_value;
  }

  return $form_type_selector;
}
