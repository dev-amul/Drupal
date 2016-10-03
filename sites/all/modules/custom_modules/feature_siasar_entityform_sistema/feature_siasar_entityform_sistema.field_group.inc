<?php
/**
 * @file
 * feature_siasar_entityform_sistema.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_siasar_entityform_sistema_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_otras_divisiones|entityform|sistema|form';
  $field_group->group_name = 'group_otras_divisiones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A2. Otras divisiones',
    'weight' => '25',
    'children' => array(
      0 => 'field_cuenca_hidrografica',
      1 => 'field_area_planificacion',
      2 => 'field_otras_divisiones',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-otras-divisiones field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_otras_divisiones|entityform|sistema|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A2. Otras divisiones');

  return $field_groups;
}
