<?php
/**
 * @file
 * feature_siasar_entityform_prestador_servicio.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_siasar_entityform_prestador_servicio_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acciones_correctivas|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_acciones_correctivas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => 'H4. Type of corrective measures',
    'weight' => '11',
    'children' => array(
      0 => 'field_reforestacion',
      1 => 'field_no_aguas_residuales',
      2 => 'field_sustitucion_componentes',
      3 => 'field_no_uso_plaguicidas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'H4. Type of corrective measures',
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
  $field_groups['group_acciones_correctivas|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_acciones_preventivas|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_acciones_preventivas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => 'H5. Type of preventive measures ',
    'weight' => '13',
    'children' => array(
      0 => 'field_revision_componentes_toma',
      1 => 'field_revision_estado_cercano',
      2 => 'field_revision_demarcacion',
      3 => 'field_no_tala_y_resforestacion',
      4 => 'field_revision_estado_obra',
      5 => 'field_proteccion_terreno',
      6 => 'field_proteccion_suelos',
      7 => 'field_revision_plan_contingencia',
      8 => 'field_proteccion_flora_fauna',
      9 => 'field_vigilancia_zona',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'H5. Type of preventive measures ',
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
  $field_groups['group_acciones_preventivas|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_aportaciones_extas|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_aportaciones_extas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_inf_ingr_extraordinarios';
  $field_group->data = array(
    'label' => 'D2. Have there been special contributions not directly related to water service?',
    'weight' => '19',
    'children' => array(
      0 => 'field__aportaciones_extras',
      1 => 'field_monto_aporte_finalizado',
      2 => 'field_monto_aporte_previsto',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D2. Have there been special contributions not directly related to water service?',
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
  $field_groups['group_aportaciones_extas|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_apoyo_tecnico|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_apoyo_tecnico';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => 'H1.',
    'weight' => '8',
    'children' => array(
      0 => 'field_nombre_entidad_apoya',
      1 => 'field_apoyo_gob_otros',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'H1.',
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
  $field_groups['group_apoyo_tecnico|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_atencion|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_atencion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => 'G1.',
    'weight' => '11',
    'children' => array(
      0 => 'field_atencion_del_prestador',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'G1.',
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
  $field_groups['group_atencion|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_balance_contable|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_balance_contable';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_inf_eco_ahorros';
  $field_group->data = array(
    'label' => 'F3. Is there a balance sheet?',
    'weight' => '8',
    'children' => array(
      0 => 'field_balance_contable',
      1 => 'field_pasivos_no_corrientes',
      2 => 'field_activos_corrientes',
      3 => 'field_activos_no_corrientes',
      4 => 'field_pasivos_corrientes_',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'F3. Is there a balance sheet?',
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
  $field_groups['group_balance_contable|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_clase_prestador|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_clase_prestador';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A2. Type of Provider',
    'weight' => '7',
    'children' => array(
      0 => 'field_otra_clase_de_prestador',
      1 => 'field_clase_de_prestador',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A2. Type of Provider',
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
  $field_groups['group_clase_prestador|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_cuenta_banco|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_cuenta_banco';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => '	B4.',
    'weight' => '20',
    'children' => array(
      0 => 'field_cuenta_banco',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '	B4.',
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
  $field_groups['group_cuenta_banco|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fact_pago|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_fact_pago';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C5. Billing, Payment and Revenue',
    'weight' => '8',
    'children' => array(
      0 => 'field_usuarios_deberian_pagan',
      1 => 'field_ingresos_reales',
      2 => 'field_usuarios_al_dia',
      3 => 'field_facturacion_promedio',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C5. Billing, Payment, and Income',
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
  $field_groups['group_fact_pago|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fondos_disponibles|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_fondos_disponibles';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_inf_eco_ahorros';
  $field_group->data = array(
    'label' => 'F2. Is liquid capital available?',
    'weight' => '7',
    'children' => array(
      0 => 'field__cuenta_con_fondos_disponi',
      1 => 'field_monto_total_fondos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'F2. Are there available funds?',
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
  $field_groups['group_fondos_disponibles|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_gastos_promedios|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_gastos_promedios';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_inf_economica_gastos';
  $field_group->data = array(
    'label' => 'E1.',
    'weight' => '5',
    'children' => array(
      0 => 'field_gasto_teorico_ambientales',
      1 => 'field_sumatoria_gastos_teoricos',
      2 => 'field_gasto_real_mantenimiento',
      3 => 'field_gasto_teorico_admin',
      4 => 'field_gasto_teorico_mantenimient',
      5 => 'field_sumatoria_gastos_reales',
      6 => 'field_gasto_promedio_admin',
      7 => 'field_gasto_teorico_operacion',
      8 => 'field_gasto_real_operacion',
      9 => 'field_gasto_real_ambientales',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'E1.',
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
  $field_groups['group_gastos_promedios|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_higiene_comunitaria|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_higiene_comunitaria';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => 'H2.',
    'weight' => '9',
    'children' => array(
      0 => 'field_higiene_comunitaria',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'H2.',
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
  $field_groups['group_higiene_comunitaria|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_basica|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_inf_basica';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A1.',
    'weight' => '6',
    'children' => array(
      0 => 'field_entidad_local',
      1 => 'field_imagenps',
      2 => 'field_codigo_de_prestador',
      3 => 'field_altitud',
      4 => 'field_entity_name',
      5 => 'field_latitud',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A1.',
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
  $field_groups['group_inf_basica|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_eco_ahorros|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_inf_eco_ahorros';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F. Financial information: working capital',
    'weight' => '5',
    'children' => array(
      0 => 'group_balance_contable',
      1 => 'group_fondos_disponibles',
      2 => 'group_ingresos_egresos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'F. FINANCIAL INFORMATION: SAVINGS',
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
  $field_groups['group_inf_eco_ahorros|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_economica_gastos|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_inf_economica_gastos';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E. Financial information: expenditures',
    'weight' => '4',
    'children' => array(
      0 => 'group_gastos_promedios',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'E. FINANCIAL INFORMATION: EXPENDITURES',
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
  $field_groups['group_inf_economica_gastos|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_ingr_extraordinarios|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_inf_ingr_extraordinarios';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. Financial information: additional revenue',
    'weight' => '3',
    'children' => array(
      0 => 'group_aportaciones_extas',
      1 => 'group_inf_ingresos_extras',
      2 => 'group_tasa_extension',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D. FINANCIAL INFORMATION: ADDITIONAL INCOME ',
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
  $field_groups['group_inf_ingr_extraordinarios|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_ingresos_extras|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_inf_ingresos_extras';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_inf_ingr_extraordinarios';
  $field_group->data = array(
    'label' => 'D1. Additional income from operations',
    'weight' => '18',
    'children' => array(
      0 => 'field_monto_total_finalizado',
      1 => 'field_ingresos_extra',
      2 => 'field_monto_previsto',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D1. Additional income from operations',
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
  $field_groups['group_inf_ingresos_extras|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inf_medicion_agua|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_inf_medicion_agua';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C4. Are metering data available?',
    'weight' => '7',
    'children' => array(
      0 => 'field_agua_facturada',
      1 => 'field_inf_medicion_agua',
      2 => 'field_agua_producida',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C4. Is there water metering information?',
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
  $field_groups['group_inf_medicion_agua|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_asoc|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_info_asoc';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Community organization information',
    'weight' => '1',
    'children' => array(
      0 => 'group_cuenta_banco',
      1 => 'group_junta_directiva',
      2 => 'group_legal',
      3 => 'group_rinde_cuentas',
      4 => 'group_tecnicos_repesentantes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. Community Association / Organization Information',
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
  $field_groups['group_info_asoc|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_economica|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_info_economica';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. Financial information: regular income',
    'weight' => '2',
    'children' => array(
      0 => 'group_fact_pago',
      1 => 'group_inf_medicion_agua',
      2 => 'group_mantenimiento_sistema',
      3 => 'group_mecanismo_pago',
      4 => 'group_tarifa',
      5 => 'group_tipo_tarifa',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. Financial information. Regular income',
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
  $field_groups['group_info_economica|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. General Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_pais',
      1 => 'field_user_reference',
      2 => 'field_fecha_aplicacion',
      3 => 'field_status',
      4 => 'field_closed_revisions',
      5 => 'group_clase_prestador',
      6 => 'group_inf_basica',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. General Information',
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
  $field_groups['group_info_general|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ingresos_egresos|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_ingresos_egresos';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_inf_eco_ahorros';
  $field_group->data = array(
    'label' => 'F1. Is the income and expenditure ledger up to date?',
    'weight' => '6',
    'children' => array(
      0 => 'field_libro_ingresos_egresos',
      1 => 'field_monto_total_de_egresos',
      2 => 'field_monto_total_de_ingresos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'F1. Is the income and expenditure ledger up to date?',
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
  $field_groups['group_ingresos_egresos|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_junta_directiva|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_junta_directiva';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => 'B2. Management Committee',
    'weight' => '18',
    'children' => array(
      0 => 'field_fecha_eleccion',
      1 => 'field_miembros_nombrados',
      2 => 'field_numero_reuniones',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' B2. Board of Directors',
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
  $field_groups['group_junta_directiva|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_legal|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_legal';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => 'B1. Legal Status',
    'weight' => '17',
    'children' => array(
      0 => 'field_estado_legal',
      1 => 'field_fecha_creacion',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B1. Legal Status and Incorporation',
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
  $field_groups['group_legal|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mantenimiento_operacion|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_mantenimiento_operacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'H. Operation and maintenance (O&M)',
    'weight' => '7',
    'children' => array(
      0 => 'group_acciones_correctivas',
      1 => 'group_acciones_preventivas',
      2 => 'group_apoyo_tecnico',
      3 => 'group_higiene_comunitaria',
      4 => 'group_proteccion',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'H. OPERATIONS AND MAINTENANCE',
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
  $field_groups['group_mantenimiento_operacion|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mantenimiento_sistema|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_mantenimiento_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C6. How Is the system maintained?',
    'weight' => '9',
    'children' => array(
      0 => 'field_mantenimiento_sistema',
      1 => 'field_otros_mantenimientos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C6. How Is the system maintained?',
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
  $field_groups['group_mantenimiento_sistema|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_mecanismo_pago|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_mecanismo_pago';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C3. Is the community familiar with the billing system and are bills issued at a regular frequency?',
    'weight' => '6',
    'children' => array(
      0 => 'field_otros_motivos',
      1 => 'field_mecanismo_pago_tarifa',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C3. Is the community familiar with the rate payment mechanism and is it regularly applied?',
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
  $field_groups['group_mecanismo_pago|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_observaciones|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_observaciones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'I. Comments',
    'weight' => '9',
    'children' => array(
      0 => 'field_comentarios',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => ' I. COMMENTS',
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
  $field_groups['group_observaciones|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_operacion_mantenimiento|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_operacion_mantenimiento';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'G. Operation and maintenance (O&M)',
    'weight' => '6',
    'children' => array(
      0 => 'group_atencion',
      1 => 'group_personal',
      2 => 'group_recursos',
      3 => 'group_reglamento',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'G. OPERATIONS AND MAINTENANCE',
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
  $field_groups['group_operacion_mantenimiento|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_personal';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => 'G3.',
    'weight' => '13',
    'children' => array(
      0 => 'field_personal_prestador',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'G3.',
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
  $field_groups['group_personal|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proteccion|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_proteccion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => 'H3.',
    'weight' => '10',
    'children' => array(
      0 => 'field_proteccion_zona_fuente',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'H3.',
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
  $field_groups['group_proteccion|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_recursos|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_recursos';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => 'G2.',
    'weight' => '12',
    'children' => array(
      0 => 'field_recursos_prestador',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'G2.',
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
  $field_groups['group_recursos|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reglamento|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_reglamento';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => 'G4.',
    'weight' => '15',
    'children' => array(
      0 => 'field_reglamento_servicios',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'G4.',
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
  $field_groups['group_reglamento|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rinde_cuentas|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_rinde_cuentas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => 'B5. Accountability',
    'weight' => '21',
    'children' => array(
      0 => 'field_acta_rendicion_cuentas',
      1 => 'field_rinde_cuentas',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B5. Accountability',
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
  $field_groups['group_rinde_cuentas|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tarifa|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_tarifa';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C1.',
    'weight' => '4',
    'children' => array(
      0 => 'field_tiene_definido_tipo_tarifa',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C1.',
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
  $field_groups['group_tarifa|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tasa_extension|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_tasa_extension';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_inf_ingr_extraordinarios';
  $field_group->data = array(
    'label' => 'D3.',
    'weight' => '20',
    'children' => array(
      0 => 'field_tasa_anual_de_expansion_pr',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D3.',
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
  $field_groups['group_tasa_extension|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tecnicos_repesentantes|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_tecnicos_repesentantes';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_asoc';
  $field_group->data = array(
    'label' => 'B3. Management Committee Representatives and Technicians',
    'weight' => '19',
    'children' => array(
      0 => 'field_representantes',
      1 => 'field_tecnicos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Board of Directors: Representatives and Technicians',
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
  $field_groups['group_tecnicos_repesentantes|entityform|prestador_de_servicio|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tipo_tarifa|entityform|prestador_de_servicio|default';
  $field_group->group_name = 'group_tipo_tarifa';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_economica';
  $field_group->data = array(
    'label' => 'C2. Rate Type and Amount',
    'weight' => '5',
    'children' => array(
      0 => 'field_tipo_de_tarifa',
      1 => 'field_tarifa_media_mensual',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C2. Rate Type and Amount',
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
  $field_groups['group_tipo_tarifa|entityform|prestador_de_servicio|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('	B4.');
  t('A. General Information');
  t('A1.');
  t('A2. Type of Provider');
  t('B. Community organization information');
  t('B1. Legal Status');
  t('B2. Management Committee');
  t('B3. Management Committee Representatives and Technicians');
  t('B5. Accountability');
  t('C. Financial information: regular income');
  t('C1.');
  t('C2. Rate Type and Amount');
  t('C3. Is the community familiar with the billing system and are bills issued at a regular frequency?');
  t('C4. Are metering data available?');
  t('C5. Billing, Payment and Revenue');
  t('C6. How Is the system maintained?');
  t('D. Financial information: additional revenue');
  t('D1. Additional income from operations');
  t('D2. Have there been special contributions not directly related to water service?');
  t('D3.');
  t('E. Financial information: expenditures');
  t('E1.');
  t('F. Financial information: working capital');
  t('F1. Is the income and expenditure ledger up to date?');
  t('F2. Is liquid capital available?');
  t('F3. Is there a balance sheet?');
  t('G. Operation and maintenance (O&M)');
  t('G1.');
  t('G2.');
  t('G3.');
  t('G4.');
  t('H. Operation and maintenance (O&M)');
  t('H1.');
  t('H2.');
  t('H3.');
  t('H4. Type of corrective measures');
  t('H5. Type of preventive measures ');
  t('I. Comments');

  return $field_groups;
}
