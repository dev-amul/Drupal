<?php
/**
 * @file
 * feature_siasar_entityform_water_quality.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_siasar_entityform_water_quality_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bacteriological_parameters|entityform|waq|form';
  $field_group->group_name = 'group_bacteriological_parameters';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'waq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E. Bacteriological Parameters',
    'weight' => '5',
    'children' => array(
      0 => 'field_fecal_coliforms',
      1 => 'field_total_coliforms',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_bacteriological_parameters|entityform|waq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_chemical_parameters|entityform|waq|form';
  $field_group->group_name = 'group_chemical_parameters';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'waq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. Chemical Parameters',
    'weight' => '3',
    'children' => array(
      0 => 'field_alkalinity',
      1 => 'field_carbonates',
      2 => 'field_calcium',
      3 => 'field_iron',
      4 => 'field_hardness',
      5 => 'field_sulfate',
      6 => 'field_chlorides',
      7 => 'field_nitrites',
      8 => 'field_manganese',
      9 => 'field_residual_chlorine',
      10 => 'field_potassium',
      11 => 'field_fluorine',
      12 => 'field_arsenic',
      13 => 'field_sodium',
      14 => 'field_bicarbonates',
      15 => 'field_nitrates',
      16 => 'field_lead',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_chemical_parameters|entityform|waq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_general|entityform|waq|form';
  $field_group->group_name = 'group_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'waq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. General',
    'weight' => '0',
    'children' => array(
      0 => 'field_survey_date',
      1 => 'field_altitude',
      2 => 'field_water_source_code',
      3 => 'field_geolocation',
      4 => 'field_water_source_type',
      5 => 'field_water_source_name',
      6 => 'field_pais',
      7 => 'field_user_reference',
      8 => 'field_entidad_local',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_general|entityform|waq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_observations|entityform|waq|form';
  $field_group->group_name = 'group_observations';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'waq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F. Observations',
    'weight' => '6',
    'children' => array(
      0 => 'field_observations',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_observations|entityform|waq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_organochlorine_parameters|entityform|waq|form';
  $field_group->group_name = 'group_organochlorine_parameters';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'waq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. Organochlorine Parameters',
    'weight' => '4',
    'children' => array(
      0 => 'field_organochlorine_pesticides',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_organochlorine_parameters|entityform|waq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_physical_parameters|entityform|waq|form';
  $field_group->group_name = 'group_physical_parameters';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'waq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Physical Parameters',
    'weight' => '2',
    'children' => array(
      0 => 'field_ph',
      1 => 'field_conductivity',
      2 => 'field_temperature',
      3 => 'field_turbidity',
      4 => 'field_color',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-physical-parameters field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups['group_physical_parameters|entityform|waq|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A. General');
  t('B. Physical Parameters');
  t('C. Chemical Parameters');
  t('D. Organochlorine Parameters');
  t('E. Bacteriological Parameters');
  t('F. Observations');

  return $field_groups;
}
