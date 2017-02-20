<?php
/**
 * @file
 * feature_siasar_entityform_prestador_asistencia_tecnica.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_siasar_entityform_prestador_asistencia_tecnica_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cantidad_comun_servicios|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_cantidad_comun_servicios';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D1. Services for providers (community managed water service providers, or Community Water Boards – CWBs) ',
    'weight' => '22',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D1. Services for providers (community managed water service providers, or Community Water Boards – CWBs) ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cantidad-comun-servicios field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_cantidad_comun_servicios|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e1|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_e1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E1',
    'weight' => '28',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-e1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_e1|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. GENERAL INFORMATION AND SYSTEM OVERVIEW',
    'weight' => '0',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. GENERAL INFORMATION AND SYSTEM OVERVIEW',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'field-group',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info_general|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intervencion|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_intervencion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. INTERVENTION',
    'weight' => '1',
    'children' => array(
      0 => 'group_intervention_b1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. INTERVENTION',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'field-group',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_intervencion|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intervention_b1|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_intervention_b1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_intervencion';
  $field_group->data = array(
    'label' => 'B1',
    'weight' => '2',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B1',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'field-group',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_intervention_b1|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intervention_b2|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_intervention_b2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B2',
    'weight' => '3',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-intervention-b2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_intervention_b2|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_observaciones|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_observaciones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E. COMMENTS',
    'weight' => '4',
    'children' => array(),
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
  $field_groups['group_observaciones|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a1|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_pat_a1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A1',
    'weight' => '45',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pat_a1|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a2|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_pat_a2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A2',
    'weight' => '46',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pat-a2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pat_a2|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a3|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_pat_a3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A3',
    'weight' => '47',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-pat-a3 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_pat_a3|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c1|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log_c1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C1',
    'weight' => '15',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recursos-financ-hum-log-c1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_recursos_financ_hum_log_c1|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c2|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log_c2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C2',
    'weight' => '16',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recursos-financ-hum-log-c2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_recursos_financ_hum_log_c2|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c3|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log_c3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C3',
    'weight' => '17',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_recursos_financ_hum_log_c3|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c4|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log_c4';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C4. Logistics',
    'weight' => '18',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C4. Logistics',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-recursos-financ-hum-log-c4 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_recursos_financ_hum_log_c4|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. FINANCIAL, HUMAN, AND LOGISTICS RESOURCES ',
    'weight' => '2',
    'children' => array(),
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
  $field_groups['group_recursos_financ_hum_log|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tipo_de_apoyo|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_tipo_de_apoyo';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. TYPE OF SUPPORT',
    'weight' => '3',
    'children' => array(),
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
  $field_groups['group_tipo_de_apoyo|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A. GENERAL INFORMATION AND SYSTEM OVERVIEW');
  t('A1');
  t('A2');
  t('A3');
  t('B. INTERVENTION');
  t('B1');
  t('B2');
  t('C. FINANCIAL, HUMAN, AND LOGISTICS RESOURCES ');
  t('C1');
  t('C2');
  t('C3');
  t('C4. Logistics');
  t('D. TYPE OF SUPPORT');
  t('D1. Services for providers (community managed water service providers, or Community Water Boards – CWBs) ');
  t('E. COMMENTS');
  t('E1');

  return $field_groups;
}
