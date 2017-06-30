<?php
/**
 * @file
 * feature_siasar_testing_form_workflow.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_siasar_testing_form_workflow_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_grupo|entityform|testingpurposes|form';
  $field_group->group_name = 'group_sub_grupo';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'testingpurposes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sección A',
    'weight' => '1',
    'children' => array(
      0 => 'field_cantidad_comunidades_apoya',
      1 => 'field_com_srv_telf_existe',
      2 => 'field_a_fuentes_de_financiamient',
      3 => 'field_edo_fisico_linea_conducion',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sección A',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_sub_grupo|entityform|testingpurposes|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_subsub_grupo|entityform|testingpurposes|form';
  $field_group->group_name = 'group_subsub_grupo';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'testingpurposes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sección B: blablabla',
    'weight' => '2',
    'children' => array(
      0 => 'field_tipo_de_sistema_de_absto',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Sección B: blablabla',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_subsub_grupo|entityform|testingpurposes|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_testing1|entityform|testingpurposes|form';
  $field_group->group_name = 'group_testing1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'testingpurposes';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Grupo 1',
    'weight' => '0',
    'children' => array(
      0 => 'field_pais',
      1 => 'field_b1_7',
      2 => 'field_entity_name',
      3 => 'field_entidad_local',
      4 => 'field_image',
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
  $field_groups['group_testing1|entityform|testingpurposes|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Grupo 1');
  t('Sección A');
  t('Sección B: blablabla');

  return $field_groups;
}
