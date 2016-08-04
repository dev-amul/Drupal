<?php
/**
 * @file
 * features_pat.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function features_pat_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cantidad_comun_servicios|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_cantidad_comun_servicios';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_tipo_de_apoyo';
  $field_group->data = array(
    'label' => 'D1. Cantidad de comunidades a las que se prestan los siguientes servicios',
    'weight' => '17',
    'children' => array(
      0 => 'field_apoyar_caps_conflictos',
      1 => 'field_caps_medicion_pozo_agua',
      2 => 'field_actualizar_prov_servicio',
      3 => 'field_siasar_planification_anual',
      4 => 'field_asesorar_prestador_aom',
      5 => 'field_apoyar_caps_planificacion',
      6 => 'field_apoyar_legalizacion_reglam',
      7 => 'field_otras_numero_comunidade',
      8 => 'field_verificar_apoyar_caps',
      9 => 'field_apoyar_juridica_caps',
      10 => 'field_apoyar_actualizar_tarifa',
      11 => 'field_otras_tipo_apoyo',
      12 => 'field_revisar_actualizar_finanza',
      13 => 'field_recolectar_muestras_agua',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cantidad-comun-servicios field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cantidad_comun_servicios|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. Información General del prestador de servicio',
    'weight' => '0',
    'children' => array(
      0 => 'field_encuestador',
      1 => 'field_fecha_de_aplicacion',
      2 => 'group_pat_a3',
      3 => 'group_pat_a2',
      4 => 'group_pat_a1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. Información General del prestador de servicio',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info_general|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intervencion|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_intervencion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Intervención',
    'weight' => '1',
    'children' => array(
      0 => 'group_intervention_b1',
      1 => 'group_intervention_b2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. Intervención',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_intervencion|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intervention_b1|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_intervention_b1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_intervencion';
  $field_group->data = array(
    'label' => 'B1',
    'weight' => '2',
    'children' => array(
      0 => 'field_total_comunidades_zona',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-intervention-b1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_intervention_b1|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_intervention_b2|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_intervention_b2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_intervencion';
  $field_group->data = array(
    'label' => 'B2',
    'weight' => '3',
    'children' => array(
      0 => 'field_cantidad_comunidades_apoya',
    ),
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
  $field_groups['group_intervention_b2|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_observaciones|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_observaciones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E. Observaciones',
    'weight' => '4',
    'children' => array(
      0 => 'field_observaciones_comentarios',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'E. Observaciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_observaciones|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a1|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_pat_a1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A1',
    'weight' => '15',
    'children' => array(
      0 => 'field_nombre_del_pat',
    ),
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
  $field_groups['group_pat_a1|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a2|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_pat_a2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A2',
    'weight' => '16',
    'children' => array(
      0 => 'field_tipo_de_pat',
    ),
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
  $field_groups['group_pat_a2|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_pat_a3|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_pat_a3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A3',
    'weight' => '17',
    'children' => array(
      0 => 'field_zona_de_atencion',
    ),
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
  $field_groups['group_pat_a3|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c1|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_recursos_financ_hum_log_c1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recursos_financ_hum_log';
  $field_group->data = array(
    'label' => 'C1',
    'weight' => '15',
    'children' => array(
      0 => 'field_cantidad_tecnicos_zona',
    ),
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
  $field_groups['group_recursos_financ_hum_log_c1|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c2|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_recursos_financ_hum_log_c2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recursos_financ_hum_log';
  $field_group->data = array(
    'label' => 'C2',
    'weight' => '16',
    'children' => array(
      0 => 'field_cuenta_presupuesto_anual',
    ),
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
  $field_groups['group_recursos_financ_hum_log_c2|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c3|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_recursos_financ_hum_log_c3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recursos_financ_hum_log';
  $field_group->data = array(
    'label' => 'C3',
    'weight' => '17',
    'children' => array(
      0 => 'field_monto',
    ),
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
  $field_groups['group_recursos_financ_hum_log_c3|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log_c4|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_recursos_financ_hum_log_c4';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_recursos_financ_hum_log';
  $field_group->data = array(
    'label' => 'C4. Recusos logísticos',
    'weight' => '18',
    'children' => array(
      0 => 'field_dispone_servicios_internet',
      1 => 'field_cantidad_equipos_inform',
      2 => 'field_estado_medicion_agua',
      3 => 'field_dispone_fondos_viaticos',
      4 => 'field_dispone_material_didactico',
      5 => 'field_estado_equipos_transporte',
      6 => 'field_cantidad_equipos_transport',
      7 => 'field_cantidad_medicion_agua',
      8 => 'field_dispone_fondos_combistible',
      9 => 'field_estado_equipos_inform',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recursos-financ-hum-log-c4 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_recursos_financ_hum_log_c4|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos_financ_hum_log|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_recursos_financ_hum_log';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. Recursos financieros, humanos y logísticos',
    'weight' => '2',
    'children' => array(
      0 => 'group_recursos_financ_hum_log_c1',
      1 => 'group_recursos_financ_hum_log_c3',
      2 => 'group_recursos_financ_hum_log_c4',
      3 => 'group_recursos_financ_hum_log_c2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. Recursos financieros, humanos y logísticos',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_recursos_financ_hum_log|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tipo_de_apoyo|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_tipo_de_apoyo';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. Tipo de apoyo',
    'weight' => '3',
    'children' => array(
      0 => 'group_cantidad_comun_servicios',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D. Tipo de apoyo',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tipo_de_apoyo|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A. Información General del prestador de servicio');
  t('A1');
  t('A2');
  t('A3');
  t('B. Intervención');
  t('B1');
  t('B2');
  t('C. Recursos financieros, humanos y logísticos');
  t('C1');
  t('C2');
  t('C3');
  t('C4. Recusos logísticos');
  t('D. Tipo de apoyo');
  t('D1. Cantidad de comunidades a las que se prestan los siguientes servicios');
  t('E. Observaciones');

  return $field_groups;
}
