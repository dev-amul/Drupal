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

/**
 * Make sure the selected option saved in DB is showing on EDIT form,
 * even if editing user belongs to a different country / location,
 * as entity reference fields quite often have their options filtered by country and location.
 */
function _siasar_entityform_alter_select_add_default_value_back(&$element, $context) {
  if(!$element['#entity'] || isset($element['#entity']->is_new)) return; // Entity is new or it does not exist? Out.

  $entity_type = isset($element['#entity_type'])
    ? $element['#entity_type']
    : null;
  if ($entity_type != 'entityform') return; // Not an entityform? Out.

  $field = &$context['field'];
  $is_entity_reference = ($field['type'] == 'entityreference');
  $is_managed_by_views = ($field['settings']['handler'] == 'views');

  if(!($is_entity_reference && $is_managed_by_views)) return; // Not an entityreference or not managed by views? This one is not being filtered. Out.

  $entityform_wrapper = entity_metadata_wrapper($entity_type, $element['#entity']);
  $field_name = &$element['#field_name'];
  $default_value = (int) $entityform_wrapper->${field_name}->raw();

  if(isset($element['#options'][$default_value])) return; // Default value is already there in $options. Out.

  $reference_type = $field['settings']['target_type'];
  $target_entity = entity_load_single($reference_type, $default_value);
  $reference_wrapper = entity_metadata_wrapper($reference_type, $target_entity);
  $value_to_insert = array(
    $default_value => $reference_wrapper->label()
  );

  $options = $element['#options'];
  if($element['#required']) {
    unset($options['_none']);
    $element['#options'] = $value_to_insert + $options;
  } else {
    $element['#options'] = array_slice($options, 0, 1, true) + $value_to_insert + array_slice($options, 1, NULL, true);
  }
}

/**
 * Pass all entityreference to taxonomy terms option labels thorugh i18n translation function
 */
function _siasar_entityform_alter_pass_entity_references_through_translator(&$element, $context) {
  $field = &$context['field'];
  $is_entity_reference = ($field['type'] == 'entityreference');
  $is_taxonomy_term = ($field['settings']['target_type'] == 'taxonomy_term');

  if(!($is_entity_reference && $is_taxonomy_term)) return;

  $options = $element['#options'];

  if ($options['_none']) unset($options['_none']);

  foreach ($options as $tid => &$name) {
    $label_location = 'taxonomy:term:' . $tid . ':name';
    $element['#options'][$tid] = i18n_string_translate($label_location, $name);
  }
}
