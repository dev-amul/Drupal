<?php
/**
 * @file
 * feaute_prestador_servicio.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feaute_prestador_servicio_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acciones_correctivas|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_acciones_correctivas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => '	 H4. Acciones correctivas',
    'weight' => '86',
    'children' => array(
      0 => 'field_no_aguas_residuales',
      1 => 'field_reforestacion',
      2 => 'field_sustitucion_componentes',
      3 => 'field_no_uso_plaguicidas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-acciones-correctivas field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_acciones_correctivas|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acciones_preventivas|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_acciones_preventivas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => '	 H5. Acciones preventivas',
    'weight' => '87',
    'children' => array(
      0 => 'field_proteccion_flora_fauna',
      1 => 'field_proteccion_terreno',
      2 => 'field_revision_estado_cercano',
      3 => 'field_revision_demarcacion',
      4 => 'field_vigilancia_zona',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-acciones-preventivas field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_acciones_preventivas|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aportaciones_extas|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_aportaciones_extas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inf_ingr_extraordinarios';
  $field_group->data = array(
    'label' => 'D2. Aportaciones extraordinarias no directamente vinculadas al servicio de agua',
    'weight' => '73',
    'children' => array(
      0 => 'field_monto_aporte_previsto',
      1 => 'field_monto_aporte_final',
      2 => 'field__aportaciones_extras',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-aportaciones-extas field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_aportaciones_extas|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apoyo_tecnico|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_apoyo_tecnico';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => '	H1',
    'weight' => '83',
    'children' => array(
      0 => 'field_apoyo_gob_otros',
      1 => 'field_nombre_entidad_apoya',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-apoyo-tecnico field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_apoyo_tecnico|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_atencion_operacion|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_atencion_operacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => '	G1',
    'weight' => '77',
    'children' => array(
      0 => 'field_atencion_operacion_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-atencion-operacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_atencion_operacion|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_balance_contable|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_balance_contable';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inf_eco_ahorros';
  $field_group->data = array(
    'label' => 'F3. Balance contable',
    'weight' => '73',
    'children' => array(
      0 => 'field_balance_contable',
      1 => 'field__pasivos_no_corrientes',
      2 => 'field__activos_corrientes',
      3 => 'field_activos_no_corrientes',
      4 => 'field__pasivos_corrientes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-balance-contable field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_balance_contable|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clase_prestador|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_clase_prestador';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A2. Clase prestador',
    'weight' => '3',
    'children' => array(
      0 => 'field_otra_clase_de_prestador',
      1 => 'field_clase_de_prestador',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-clase-prestador field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_clase_prestador|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cuenta_banco|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_cuenta_banco';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => '	B4.',
    'weight' => '30',
    'children' => array(
      0 => 'field_cuenta_banco',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-cuenta-banco field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_cuenta_banco|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fact_pago|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_fact_pago';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => '	 C5. Pago, facturación e ingresos',
    'weight' => '64',
    'children' => array(
      0 => 'field_usuarios_al_dia',
      1 => 'field_promedio_mensual',
      2 => 'field_ingresos_reales',
      3 => 'field_usuarios_deberian_pagan',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fact-pago field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_fact_pago|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fondos_disponibles|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_fondos_disponibles';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inf_eco_ahorros';
  $field_group->data = array(
    'label' => '	 F2. Fondos disponibles',
    'weight' => '72',
    'children' => array(
      0 => 'field_monto_total_fondos',
      1 => 'field_fondos_disponibles',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fondos-disponibles field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_fondos_disponibles|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gastos_promedios|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_gastos_promedios';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inf_economica_gastos';
  $field_group->data = array(
    'label' => 'E1',
    'weight' => '71',
    'children' => array(
      0 => 'field_gasto_real_operacion',
      1 => 'field_gasto_teorico_operacion',
      2 => 'field__gasto_real_adm',
      3 => 'field_gasto_teorico_ambientales',
      4 => 'field_sumatoria_gastos_reales',
      5 => 'field_gasto_real_serv_ambient',
      6 => 'field_sumatoria_gastos_teoricos',
      7 => 'field_gasto_teorico_mantenimient',
      8 => 'field_gasto_teorico_adm',
      9 => 'field_gasto_real_mantenimiento',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-gastos-promedios field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_gastos_promedios|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_higiene_comunitaria|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_higiene_comunitaria';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => 'H2',
    'weight' => '84',
    'children' => array(
      0 => 'field_higiene_comunitaria',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-higiene-comunitaria field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_higiene_comunitaria|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_basica|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_inf_basica';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A1.',
    'weight' => '2',
    'children' => array(
      0 => 'field_entidad_local_chica',
      1 => 'field_entidad_regional',
      2 => 'field_altitud',
      3 => 'field_entidad_local_mayor',
      4 => 'field_nombre_del_prestador',
      5 => 'field_otras_divisiones',
      6 => 'field_latitud',
      7 => 'field_codigo_sistema',
      8 => 'field_longitud',
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
  $field_groups['group_inf_basica|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_eco_ahorros|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_inf_eco_ahorros';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '	 F. Información económica. Ahorros',
    'weight' => '5',
    'children' => array(
      0 => 'group_fondos_disponibles',
      1 => 'group_ingresos_egresos',
      2 => 'group_balance_contable',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '	 F. Información económica. Ahorros',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_inf_eco_ahorros|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_economica_gastos|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_inf_economica_gastos';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '	 E. Información económica. Gastos',
    'weight' => '4',
    'children' => array(
      0 => 'group_gastos_promedios',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '	 E. Información económica. Gastos',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_inf_economica_gastos|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_ingr_extraordinarios|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_inf_ingr_extraordinarios';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. Información económica. Ingresos extraordinarios',
    'weight' => '3',
    'children' => array(
      0 => 'group_inf_ingresos_extras',
      1 => 'group_tasa_expancion',
      2 => 'group_aportaciones_extas',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'D. Información económica. Ingresos extraordinarios',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-inf-ingr-extraordinarios field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_inf_ingr_extraordinarios|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_ingresos_extras|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_inf_ingresos_extras';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inf_ingr_extraordinarios';
  $field_group->data = array(
    'label' => '	 D1. Ingresos extraordinarios de funcionamiento',
    'weight' => '72',
    'children' => array(
      0 => 'field_monto_finalizado',
      1 => 'field_ingresos_extra',
      2 => 'field_monto_previsto',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inf-ingresos-extras field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_inf_ingresos_extras|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_medicion_agua|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_inf_medicion_agua';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C4. ¿Se tiene información sobre la medición del agua?',
    'weight' => '63',
    'children' => array(
      0 => 'field_agua_producida',
      1 => 'field_inf_medicion_agua',
      2 => 'field_agua_facturada',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-inf-medicion-agua field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_inf_medicion_agua|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_asoc|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_info_asoc';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Información sobre asociaciones u organizaciones comunitarias',
    'weight' => '1',
    'children' => array(
      0 => 'group_tecnicos_repesentantes',
      1 => 'group_legal',
      2 => 'group_junta_directiva',
      3 => 'group_rinde_cuentas',
      4 => 'group_cuenta_banco',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'B. Información sobre asociaciones u organizaciones comunitarias',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_info_asoc|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_economica|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_info_economica';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. Información Económica. Ingresos Regulares',
    'weight' => '2',
    'children' => array(
      0 => 'group_mecanismo_pago',
      1 => 'group_inf_medicion_agua',
      2 => 'group_tarifa',
      3 => 'group_mantenimiento_sistema',
      4 => 'group_fact_pago',
      5 => 'group_tipo_tarifa',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'C. Información Económica. Ingresos Regulares',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_info_economica|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. Información General',
    'weight' => '0',
    'children' => array(
      0 => 'group_inf_basica',
      1 => 'group_clase_prestador',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'A. Información General',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'H1',
        'show_label' => '1',
        'label_element' => 'H1',
        'attributes' => '',
      ),
    ),
  );
  $field_groups['group_info_general|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ingresos_egresos|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_ingresos_egresos';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inf_eco_ahorros';
  $field_group->data = array(
    'label' => '	 F1. ingresos y egresos al día',
    'weight' => '71',
    'children' => array(
      0 => 'field_libro_ingresos_egresos',
      1 => 'field_monto_total_egresos',
      2 => 'field_monto_total_ingresos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-ingresos-egresos field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_ingresos_egresos|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_junta_directiva|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_junta_directiva';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => '	 B2. Junta Directiva',
    'weight' => '28',
    'children' => array(
      0 => 'field_numero_reuniones',
      1 => 'field_miembros_nombrados',
      2 => 'field_fecha_eleccion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-junta-directiva field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_junta_directiva|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legal|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_legal';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => '	 B1. Estado legal y constitución',
    'weight' => '27',
    'children' => array(
      0 => 'field_fecha_creacion',
      1 => 'field_estado_legal',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-legal field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_legal|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mantenimiento_operacion|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_mantenimiento_operacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => 'H. Operación y mantenimiento',
    'weight' => '81',
    'children' => array(
      0 => 'field_no_tala_y_resforestacion',
      1 => 'field_revision_plan_contingencia',
      2 => 'field_proteccion_suelos',
      3 => 'field_revision_estado_obra',
      4 => 'field_revision_componentes_toma',
      5 => 'group_apoyo_tecnico',
      6 => 'group_proteccion_zona',
      7 => 'group_higiene_comunitaria',
      8 => 'group_acciones_correctivas',
      9 => 'group_acciones_preventivas',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'H. Operación y mantenimiento',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_mantenimiento_operacion|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mantenimiento_sistema|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_mantenimiento_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => '	 C6. ¿De qué forma es mantenido el sistema?',
    'weight' => '65',
    'children' => array(
      0 => 'field_otros_mantenimientos',
      1 => 'field_mantenimiento_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mantenimiento-sistema field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_mantenimiento_sistema|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mecanismo_pago|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_mecanismo_pago';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C3. ¿La comunidad conoce el mecanismo de pago de la tarifa y se aplica de forma regular?',
    'weight' => '62',
    'children' => array(
      0 => 'field_mecanismo_pago_tarifa',
      1 => 'field_otros_motivos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-mecanismo-pago field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_mecanismo_pago|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_obs_comentarios|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_obs_comentarios';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_observaciones';
  $field_group->data = array(
    'label' => '	I1',
    'weight' => '27',
    'children' => array(
      0 => 'field_observaciones_comentarios',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-obs-comentarios field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_obs_comentarios|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_observaciones|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_observaciones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => ' I. Observaciones',
    'weight' => '22',
    'children' => array(
      0 => 'group_obs_comentarios',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => ' I. Observaciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_observaciones|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_operacion_mantenimiento|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_operacion_mantenimiento';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '	 G. Operación y mantenimiento',
    'weight' => '6',
    'children' => array(
      0 => 'group_mantenimiento_operacion',
      1 => 'group_atencion_operacion',
      2 => 'group_reglamento',
      3 => 'group_recursos',
      4 => 'group_personal',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => '	 G. Operación y mantenimiento',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
      'formatter' => '',
    ),
  );
  $field_groups['group_operacion_mantenimiento|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => '	G3',
    'weight' => '79',
    'children' => array(
      0 => 'field_personal_prestador',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-personal field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_personal|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proteccion_zona|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_proteccion_zona';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => 'H3',
    'weight' => '85',
    'children' => array(
      0 => 'field_proteccion_zona_fuente',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proteccion-zona field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_proteccion_zona|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_recursos';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => 'G2',
    'weight' => '78',
    'children' => array(
      0 => 'field_recursos_prestador',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-recursos field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_recursos|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reglamento|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_reglamento';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => '	G4',
    'weight' => '80',
    'children' => array(
      0 => 'field_reglamento_servicios',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-reglamento field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_reglamento|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rinde_cuentas|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_rinde_cuentas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => '	 B5. Rendición de cuentas',
    'weight' => '32',
    'children' => array(
      0 => 'field_rinde_cuentas',
      1 => 'field_acta_rendicion_cuentas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rinde-cuentas field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_rinde_cuentas|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tarifa|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_tarifa';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C1',
    'weight' => '60',
    'children' => array(
      0 => 'field_tiene_definido_tipo_tarifa',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tarifa field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tarifa|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tasa_expancion|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_tasa_expancion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inf_ingr_extraordinarios';
  $field_group->data = array(
    'label' => 'D3',
    'weight' => '74',
    'children' => array(
      0 => 'field_tasa_anual_de_expansi_n_pr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tasa-expancion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tasa_expancion|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tecnicos_repesentantes|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_tecnicos_repesentantes';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => 'B3. Técnicos y representantes de Junta Directiva',
    'weight' => '29',
    'children' => array(
      0 => 'field_representantes',
      1 => 'field_tecnicos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tecnicos-repesentantes field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tecnicos_repesentantes|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tipo_tarifa|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_tipo_tarifa';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C2. Tipo y cuantía de la tarifa',
    'weight' => '61',
    'children' => array(
      0 => 'field_tipo_de_tarifa',
      1 => 'field_tarifa_media_mensual',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tipo-tarifa field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tipo_tarifa|entityform|prestador_de_servicio|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('	 B1. Estado legal y constitución');
  t('	 B2. Junta Directiva');
  t('	 B5. Rendición de cuentas');
  t('	 C5. Pago, facturación e ingresos');
  t('	 C6. ¿De qué forma es mantenido el sistema?');
  t('	 D1. Ingresos extraordinarios de funcionamiento');
  t('	 E. Información económica. Gastos');
  t('	 F. Información económica. Ahorros');
  t('	 F1. ingresos y egresos al día');
  t('	 F2. Fondos disponibles');
  t('	 G. Operación y mantenimiento');
  t('	 H4. Acciones correctivas');
  t('	 H5. Acciones preventivas');
  t('	B4.');
  t('	G1');
  t('	G3');
  t('	G4');
  t('	H1');
  t('	I1');
  t(' I. Observaciones');
  t('A. Información General');
  t('A1.');
  t('A2. Clase prestador');
  t('B. Información sobre asociaciones u organizaciones comunitarias');
  t('B3. Técnicos y representantes de Junta Directiva');
  t('C. Información Económica. Ingresos Regulares');
  t('C1');
  t('C2. Tipo y cuantía de la tarifa');
  t('C3. ¿La comunidad conoce el mecanismo de pago de la tarifa y se aplica de forma regular?');
  t('C4. ¿Se tiene información sobre la medición del agua?');
  t('D. Información económica. Ingresos extraordinarios');
  t('D2. Aportaciones extraordinarias no directamente vinculadas al servicio de agua');
  t('D3');
  t('E1');
  t('F3. Balance contable');
  t('G2');
  t('H. Operación y mantenimiento');
  t('H2');
  t('H3');

  return $field_groups;
}
