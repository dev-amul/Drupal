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
  $field_group->parent_name = 'group_tipo_de_apoyo';
  $field_group->data = array(
    'label' => 'D1. Number of Communities - Technical assistance given to service providers (e.g. water committee, etc.)',
    'weight' => '4',
    'children' => array(
      0 => 'field_actualizar_prov_servicio',
      1 => 'field_apoyar_actualizar_tarifa',
      2 => 'field_apoyar_caps_conflictos',
      3 => 'field_apoyar_juridica_caps',
      4 => 'field_apoyar_legalizacion_reglam',
      5 => 'field_asesorar_prestador_aom',
      6 => 'field_caps_medicion_pozo_agua',
      7 => 'field_verificar_apoyar_caps',
      8 => 'field_otras_tipo_apoyo',
      9 => 'field_otras_numero_comunidade',
      10 => 'field_revisar_actualizar_finanza',
      11 => 'field_siasar_planification_anual',
      12 => 'field_recolectar_muestras_agua',
      13 => 'field_apoyar_caps_planificacion',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D1. Services for providers (community managed water service providers, or Community Water Boards – CWBs) ',
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
  $field_groups['group_cantidad_comun_servicios|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e1|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_e1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_observaciones';
  $field_group->data = array(
    'label' => 'E1',
    'weight' => '6',
    'children' => array(
      0 => 'field_observaciones_comentarios',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'E1',
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
    'label' => 'A. General information and design',
    'weight' => '0',
    'children' => array(
      0 => 'field_pais',
      1 => 'field_status',
      2 => 'field_user_reference',
      3 => 'field_fecha_de_aplicacion',
      4 => 'group_pat_a3',
      5 => 'group_pat_a1',
      6 => 'group_pat_a2',
    ),
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
    'label' => 'B. Supervision',
    'weight' => '1',
    'children' => array(
      0 => 'group_intervention_b1',
      1 => 'group_intervention_b2',
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
    'children' => array(
      0 => 'field_total_comunidades_zona',
    ),
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
  $field_group->parent_name = 'group_intervencion';
  $field_group->data = array(
    'label' => 'B2',
    'weight' => '3',
    'children' => array(
      0 => 'field_cantidad_comunidades_apoya',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B2',
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
    'label' => 'E. Comments',
    'weight' => '5',
    'children' => array(
      0 => 'group_e1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'E. COMMENTS',
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
  $field_groups['group_observaciones|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a1|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_pat_a1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A1',
    'weight' => '42',
    'children' => array(
      0 => 'field_entity_name',
      1 => 'field_imagenpat',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A1',
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
  $field_groups['group_pat_a1|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a2|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_pat_a2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A2',
    'weight' => '43',
    'children' => array(
      0 => 'field_tipo_de_pat2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A2',
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
  $field_groups['group_pat_a2|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a3|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_pat_a3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A3',
    'weight' => '44',
    'children' => array(
      0 => 'field_entidad_local',
      1 => 'field_latitud',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A3',
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
  $field_groups['group_pat_a3|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c1|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log_c1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_recursos_financ_hum_log';
  $field_group->data = array(
    'label' => 'C1',
    'weight' => '3',
    'children' => array(
      0 => 'field_cantidad_tecnicos_zona',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C1',
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
  $field_groups['group_recursos_financ_hum_log_c1|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c2|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log_c2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_recursos_financ_hum_log';
  $field_group->data = array(
    'label' => 'C2',
    'weight' => '4',
    'children' => array(
      0 => 'field_cuenta_presupuesto_anual',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C2',
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
  $field_groups['group_recursos_financ_hum_log_c2|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c3|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log_c3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_recursos_financ_hum_log';
  $field_group->data = array(
    'label' => 'C3',
    'weight' => '5',
    'children' => array(
      0 => 'field_monto',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C3',
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
  $field_groups['group_recursos_financ_hum_log_c3|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c4|entityform|prestador_de_asistencia_t_cnica|default';
  $field_group->group_name = 'group_recursos_financ_hum_log_c4';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_recursos_financ_hum_log';
  $field_group->data = array(
    'label' => 'C4. Logistics',
    'weight' => '6',
    'children' => array(
      0 => 'field_cantidad_equipos_inform',
      1 => 'field_cantidad_equipos_transport',
      2 => 'field_cantidad_medicion_agua',
      3 => 'field_dispone_fondos_viaticos',
      4 => 'field_dispone_material_didactico',
      5 => 'field_dispone_servicios_internet',
      6 => 'field_dispone_fondos_combistible',
      7 => 'field_estado_equipos_transporte',
      8 => 'field_estado_equipos_informatico',
      9 => 'field_estado_medicion_agua',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C4. Logistics',
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
    'label' => 'C. Financial, human, and logistical resources',
    'weight' => '2',
    'children' => array(
      0 => 'group_recursos_financ_hum_log_c1',
      1 => 'group_recursos_financ_hum_log_c2',
      2 => 'group_recursos_financ_hum_log_c3',
      3 => 'group_recursos_financ_hum_log_c4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. FINANCIAL, HUMAN, AND LOGISTICS RESOURCES ',
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
    'label' => 'D. Type of support',
    'weight' => '3',
    'children' => array(
      0 => 'group_cantidad_comun_servicios',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D. TYPE OF SUPPORT',
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
  $field_groups['group_tipo_de_apoyo|entityform|prestador_de_asistencia_t_cnica|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A. General information and design');
  t('A1');
  t('A2');
  t('A3');
  t('B. Supervision');
  t('B1');
  t('B2');
  t('C. Financial, human, and logistical resources');
  t('C1');
  t('C2');
  t('C3');
  t('C4. Logistics');
  t('D. Type of support');
  t('D1. Number of Communities - Technical assistance given to service providers (e.g. water committee, etc.)');
  t('E. Comments');
  t('E1');

  return $field_groups;
}
