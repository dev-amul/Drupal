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
    'weight' => '4',
    'children' => array(
      0 => 'field_bacteriological_total',
      1 => 'field_total_coliforms',
      2 => 'field_fecal_coliforms',
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
    'weight' => '2',
    'children' => array(
      0 => 'field_nitrates',
      1 => 'field_nitrites',
      2 => 'field_calcium',
      3 => 'field_carbonates',
      4 => 'field_chemical_total',
      5 => 'field_alkalinity',
      6 => 'field_arsenic',
      7 => 'field_fluorine',
      8 => 'field_lead',
      9 => 'field_bicarbonates',
      10 => 'field_sodium',
      11 => 'field_chlorides',
      12 => 'field_hardness',
      13 => 'field_manganese',
      14 => 'field_iron',
      15 => 'field_potassium',
      16 => 'field_residual_chlorine',
      17 => 'field_sulfate',
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
      0 => 'field_altitude',
      1 => 'field_geolocation',
      2 => 'field_pais',
      3 => 'field_user_reference',
      4 => 'field_codigo_de_la_fuente',
      5 => 'field_nombre_de_la_fuente',
      6 => 'field_tipo_de_fuente',
      7 => 'field_entidad_local',
      8 => 'field_survey_date',
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
    'weight' => '5',
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
    'weight' => '3',
    'children' => array(
      0 => 'field_organochlorine_pesticides',
      1 => 'field_organochlorine_total',
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
    'weight' => '1',
    'children' => array(
      0 => 'field_turbidity',
      1 => 'field_color',
      2 => 'field_ph',
      3 => 'field_conductivity',
      4 => 'field_physical_total',
      5 => 'field_temperature',
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
