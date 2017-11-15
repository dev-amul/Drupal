<?php
/**
 * @file
 * feature_siasar_field_bases.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_siasar_field_bases_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a5|entityform|sistema|form';
  $field_group->group_name = 'group_a5';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A6. Are there adequate water resources (at the source) to meet demand?',
    'weight' => '120',
    'children' => array(
      0 => 'field_agua_en_verano',
      1 => 'field_agua_en_invierno',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A6. Is there sufficient water in the source(s) to meet demand?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-a5 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_a5|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a6_croquis_del_sistema|entityform|sistema|form';
  $field_group->group_name = 'group_a6_croquis_del_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A7. Water Supply System Design',
    'weight' => '121',
    'children' => array(
      0 => 'field_a6_croquis',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A7. Water supply system sketch',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-a6-croquis-del-sistema field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_a6_croquis_del_sistema|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a_info_general_sistema|entityform|sistema|form';
  $field_group->group_name = 'group_a_info_general_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. General information and design',
    'weight' => '0',
    'children' => array(
      0 => 'field_pais',
      1 => 'field_fecha_de_aplicaci_n',
      2 => 'field_user_reference',
      3 => 'group_otras_divisiones',
      4 => 'group_financiamiento_inicial',
      5 => 'group_rehabilitaciones_sistema',
      6 => 'group_a5',
      7 => 'group_a6_croquis_del_sistema',
      8 => 'group_info_general',
      9 => 'group_tpo_sist_abastecimeinto',
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
  $field_groups['group_a_info_general_sistema|entityform|sistema|form'] = $field_group;

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
    'label' => 'H4. Type of corrective measures',
    'weight' => '13',
    'children' => array(
      0 => 'field_no_uso_plaguicidas',
      1 => 'field_sustitucion_componentes',
      2 => 'field_no_aguas_residuales',
      3 => 'field_reforestacion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'H4. Type of corrective measures',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-acciones-correctivas field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'H5. Type of preventive measures ',
    'weight' => '14',
    'children' => array(
      0 => 'field_no_tala_y_resforestacion',
      1 => 'field_revision_estado_obra',
      2 => 'field_revision_componentes_toma',
      3 => 'field_revision_estado_cercano',
      4 => 'field_proteccion_flora_fauna',
      5 => 'field_proteccion_suelos',
      6 => 'field_revision_plan_contingencia',
      7 => 'field_vigilancia_zona',
      8 => 'field_proteccion_terreno',
      9 => 'field_revision_demarcacion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'H5. Type of preventive measures ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-acciones-preventivas field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'D2. Have there been special contributions not directly related to water service?',
    'weight' => '129',
    'children' => array(
      0 => 'field_monto_aporte_previsto',
      1 => 'field_monto_aporte_finalizado',
      2 => 'field__aportaciones_extras',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D2. Have there been special contributions not directly related to water service?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-aportaciones-extas field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'H1.',
    'weight' => '9',
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
  $field_group->identifier = 'group_atencion|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_atencion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_operacion_mantenimiento';
  $field_group->data = array(
    'label' => 'G1.',
    'weight' => '10',
    'children' => array(
      0 => 'field_atencion_del_prestador',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-atencion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_atencion|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b1|entityform|sistema|form';
  $field_group->group_name = 'group_b1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_fuente_captacion';
  $field_group->data = array(
    'label' => 'B1',
    'weight' => '45',
    'children' => array(
      0 => 'field_fuente_y_o_captacion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-b1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b1|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b2|field_collection_item|field_fuente_y_o_captacion|form';
  $field_group->group_name = 'group_b2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_fuente_y_o_captacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B2. Environmental conditions surrounding the source and/or intake (e.g. riverbanks, recharge zones, well fields, etc.)',
    'weight' => '1',
    'children' => array(
      0 => 'field_existencia_z_erosionadas',
      1 => 'field_existencia_deareas_verdes',
      2 => 'field_existenciade_contaminacion',
      3 => 'field_proteccion_de_la_fuente',
      4 => 'field_existencia_de_indicio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B2. Status of the area near the source or system water intake ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-b2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b2|field_collection_item|field_fuente_y_o_captacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b3_grid_1_1|entityform|comunidad|form';
  $field_group->group_name = 'group_b3_grid_1_1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_b3_grid_1';
  $field_group->data = array(
    'label' => 'OCCASIONAL USE',
    'weight' => '86',
    'children' => array(
      0 => 'field_com_num_viv_usoinfa',
      1 => 'field_com_num_viv_usohab',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'OCCASIONAL USE',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => 'SOME family members use improved sanitation SOME of the time.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b3_grid_1_1|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b3_grid_1_2|entityform|comunidad|form';
  $field_group->group_name = 'group_b3_grid_1_2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_b3_grid_1';
  $field_group->data = array(
    'label' => 'FULL-TIME use',
    'weight' => '87',
    'children' => array(
      0 => 'field_com_num_viv_usoinfb',
      1 => 'field_com_num_viv_usotodos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FULL-TIME use',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => 'ALL family members (including men, women, the elderly, and children) use improved sanitation ALL of the time.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b3_grid_1_2|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b3_grid_1|entityform|comunidad|form';
  $field_group->group_name = 'group_b3_grid_1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_uso_inf';
  $field_group->data = array(
    'label' => 'Type I',
    'weight' => '78',
    'children' => array(
      0 => 'group_b3_grid_1_1',
      1 => 'group_b3_grid_1_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tipo I',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid full-width',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b3_grid_1|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b3_grid_2_1|entityform|comunidad|form';
  $field_group->group_name = 'group_b3_grid_2_1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_b3_grid_2';
  $field_group->data = array(
    'label' => 'OCCASIONAL USE',
    'weight' => '92',
    'children' => array(
      0 => 'field_com_num_viv_usoinfa2',
      1 => 'field_com_num_viv_usohab2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'OCCASIONAL USE',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => 'SOME family members use improved sanitation SOME of the time.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b3_grid_2_1|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b3_grid_2_2|entityform|comunidad|form';
  $field_group->group_name = 'group_b3_grid_2_2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_b3_grid_2';
  $field_group->data = array(
    'label' => 'FULL-TIME use',
    'weight' => '93',
    'children' => array(
      0 => 'field_com_num_viv_usoinfb2',
      1 => 'field_com_num_viv_usotodos2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'FULL-TIME use',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => 'ALL family members (including men, women, the elderly, and children) use improved sanitation ALL of the time.',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b3_grid_2_2|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b3_grid_2|entityform|comunidad|form';
  $field_group->group_name = 'group_b3_grid_2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_uso_inf';
  $field_group->data = array(
    'label' => 'Type II',
    'weight' => '79',
    'children' => array(
      0 => 'group_b3_grid_2_1',
      1 => 'group_b3_grid_2_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tipo II',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid full-width',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b3_grid_2|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b3|field_collection_item|field_fuente_y_o_captacion|form';
  $field_group->group_name = 'group_b3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_fuente_y_o_captacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B3.',
    'weight' => '2',
    'children' => array(
      0 => 'field_infraestructura_captacion',
      1 => 'field_existe_macro_medicion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B3.',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-b3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b3|field_collection_item|field_fuente_y_o_captacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b4_grid|entityform|comunidad|form';
  $field_group->group_name = 'group_b4_grid';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_no_uso';
  $field_group->data = array(
    'label' => 'Unimproved',
    'weight' => '73',
    'children' => array(
      0 => 'field_com_no_uso_vivnumtodos',
      1 => 'field_com_no_uso_vivnumuso',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'No mejorada',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => 'group-b4-grid',
        'classes' => 'group-grid full-width',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b4_grid|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b4|field_collection_item|field_fuente_y_o_captacion|form';
  $field_group->group_name = 'group_b4';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_fuente_y_o_captacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B4. State of Water Intake Infrastructure',
    'weight' => '17',
    'children' => array(
      0 => 'field_observaciones',
      1 => 'field_edo_fisico_infra_cptcion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B4. Physical condition of water catchment infrastructure',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-b4 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_b4|field_collection_item|field_fuente_y_o_captacion|form'] = $field_group;

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
    'label' => 'F3. Is there a balance sheet?',
    'weight' => '100',
    'children' => array(
      0 => 'field_balance_contable',
      1 => 'field_pasivos_no_corrientes',
      2 => 'field_activos_no_corrientes',
      3 => 'field_activos_corrientes',
      4 => 'field_pasivos_corrientes_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F3. Is there a balance sheet?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-balance-contable field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_balance_contable|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c1|entityform|sistema|form';
  $field_group->group_name = 'group_c1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c';
  $field_group->data = array(
    'label' => 'C1',
    'weight' => '73',
    'children' => array(
      0 => 'field_lineas_de_conduccion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-c1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c1|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c1|field_collection_item|field_lineas_de_conduccion|form';
  $field_group->group_name = 'group_c1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_lineas_de_conduccion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C1. Water Transmission Line(s)',
    'weight' => '1',
    'children' => array(
      0 => 'field_c1_1',
      1 => 'field_c1_4',
      2 => 'field_longitud_de_la_linea',
      3 => 'field_diametro_medio_de_tuberia',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C1. Water mains',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-c1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c1|field_collection_item|field_lineas_de_conduccion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c2|field_collection_item|field_lineas_de_conduccion|form';
  $field_group->group_name = 'group_c2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_lineas_de_conduccion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C2. State of Water Transmission Line(s)',
    'weight' => '6',
    'children' => array(
      0 => 'field_c2_2',
      1 => 'field_edo_fisico_linea_conducion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C2. Physical condition of the water mains',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-c2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c2|field_collection_item|field_lineas_de_conduccion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_1_1|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_1_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_1';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '81',
    'children' => array(
      0 => 'field_com_fic_cesh_pi',
      1 => 'field_com_fic_cesh_pa',
      2 => 'field_com_fic_cesh_pe',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personal',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_1_1|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_1_2|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_1_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_1';
  $field_group->data = array(
    'label' => 'Students',
    'weight' => '82',
    'children' => array(
      0 => 'field_com_fic_cesh_pu',
      1 => 'field_com_fic_cesh_pm',
      2 => 'field_com_fic_cesh_pq',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Alumnado',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_1_2|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_1_3|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_1_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_1';
  $field_group->data = array(
    'label' => 'Shared',
    'weight' => '83',
    'children' => array(
      0 => 'field_com_fic_cesh_paa',
      1 => 'field_com_fic_cesh_pba',
      2 => 'field_com_fic_cesh_pca',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Comunes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_1_3|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_1|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_fic_cesh';
  $field_group->data = array(
    'label' => 'Type I',
    'weight' => '42',
    'children' => array(
      0 => 'group_c4_grid_1_1',
      1 => 'group_c4_grid_1_2',
      2 => 'group_c4_grid_1_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tipo I',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_1|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_2_1|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_2_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_2';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '89',
    'children' => array(
      0 => 'field_com_fic_cesh_pb',
      1 => 'field_com_fic_cesh_pj',
      2 => 'field_com_fic_cesh_pf',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personal',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_2_1|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_2_2|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_2_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_2';
  $field_group->data = array(
    'label' => 'Students',
    'weight' => '90',
    'children' => array(
      0 => 'field_com_fic_cesh_pr',
      1 => 'field_com_fic_cesh_pn',
      2 => 'field_com_fic_cesh_pv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Alumnado',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_2_2|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_2_3|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_2_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_2';
  $field_group->data = array(
    'label' => 'Shared',
    'weight' => '91',
    'children' => array(
      0 => 'field_com_fic_cesh_pab',
      1 => 'field_com_fic_cesh_pcb',
      2 => 'field_com_fic_cesh_pbb',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Comunes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_2_3|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_2|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_fic_cesh';
  $field_group->data = array(
    'label' => 'Type II',
    'weight' => '43',
    'children' => array(
      0 => 'group_c4_grid_2_1',
      1 => 'group_c4_grid_2_2',
      2 => 'group_c4_grid_2_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Tipo II',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_2|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_3_1|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_3_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_3';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '97',
    'children' => array(
      0 => 'field_com_fic_cesh_pk',
      1 => 'field_com_fic_cesh_pg',
      2 => 'field_com_fic_cesh_pc',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personal',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_3_1|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_3_2|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_3_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_3';
  $field_group->data = array(
    'label' => 'Students',
    'weight' => '98',
    'children' => array(
      0 => 'field_com_fic_cesh_ps',
      1 => 'field_com_fic_cesh_po',
      2 => 'field_com_fic_cesh_pw',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Alumnado',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_3_2|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_3_3|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_3_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_3';
  $field_group->data = array(
    'label' => 'Shared',
    'weight' => '99',
    'children' => array(
      0 => 'field_com_fic_cesh_pcc',
      1 => 'field_com_fic_cesh_pbc',
      2 => 'field_com_fic_cesh_pac',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Comunes',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_3_3|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_3|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_fic_cesh';
  $field_group->data = array(
    'label' => 'Unimproved',
    'weight' => '44',
    'children' => array(
      0 => 'group_c4_grid_3_1',
      1 => 'group_c4_grid_3_2',
      2 => 'group_c4_grid_3_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'No mejorada',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_3|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_4_1|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_4_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_4';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '46',
    'children' => array(
      0 => 'field_com_fic_cesh_pl',
      1 => 'field_com_fic_cesh_ph',
      2 => 'field_com_fic_cesh_pd',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Personal',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_4_1|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_4_2|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_4_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_4';
  $field_group->data = array(
    'label' => 'Students',
    'weight' => '47',
    'children' => array(
      0 => 'field_com_fic_cesh_pp',
      1 => 'field_com_fic_cesh_pt',
      2 => 'field_com_fic_cesh_px',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Alumnado',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_4_2|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_4_3|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_4_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_c4_grid_4';
  $field_group->data = array(
    'label' => 'Shared',
    'weight' => '48',
    'children' => array(
      0 => 'field_com_fic_cesh_pcd',
      1 => 'field_com_fic_cesh_pbd',
      2 => 'field_com_fic_cesh_pad',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Común',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_4_3|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c4_grid_4|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_c4_grid_4';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_fic_cesh';
  $field_group->data = array(
    'label' => 'Less than 10m',
    'weight' => '45',
    'children' => array(
      0 => 'group_c4_grid_4_1',
      1 => 'group_c4_grid_4_2',
      2 => 'group_c4_grid_4_3',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Menos 10m',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-grid',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_c4_grid_4|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

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
    'label' => 'D1. Number of Communities - Technical assistance given to service providers (e.g. water committee, etc.)',
    'weight' => '22',
    'children' => array(
      0 => 'field_otras_tipo_apoyo',
      1 => 'field_asesorar_prestador_aom',
      2 => 'field_apoyar_juridica_caps',
      3 => 'field_apoyar_legalizacion_reglam',
      4 => 'field_apoyar_actualizar_tarifa',
      5 => 'field_recolectar_muestras_agua',
      6 => 'field_verificar_apoyar_caps',
      7 => 'field_siasar_planification_anual',
      8 => 'field_otras_numero_comunidade',
      9 => 'field_revisar_actualizar_finanza',
      10 => 'field_apoyar_caps_planificacion',
      11 => 'field_caps_medicion_pozo_agua',
      12 => 'field_actualizar_prov_servicio',
      13 => 'field_apoyar_caps_conflictos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D1. Services for providers (community managed water service providers, or Community Water Boards – CWBs) ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-cantidad-comun-servicios field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_cantidad_comun_servicios|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

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
    'label' => 'A2. Type of Provider',
    'weight' => '97',
    'children' => array(
      0 => 'field_clase_de_prestador',
      1 => 'field_otra_clase_de_prestador',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A2. Type of Provider',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-clase-prestador field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_clase_prestador|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_poblacion|entityform|comunidad|form';
  $field_group->group_name = 'group_co_poblacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A3.',
    'weight' => '73',
    'children' => array(
      0 => 'field_field_com_obs_poblacion',
      1 => 'field_etnia_en_mayoria',
      2 => 'field_idioma_predominante',
      3 => 'field_com_poblacion_total',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A3.',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-co-poblacion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_co_poblacion|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_cantidad_viv|entityform|comunidad|form';
  $field_group->group_name = 'group_com_cantidad_viv';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A4.',
    'weight' => '74',
    'children' => array(
      0 => 'field_com_viv_totales',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A4.',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-cantidad-viv field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_cantidad_viv|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_ce|entityform|comunidad|form';
  $field_group->group_name = 'group_com_ce';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_fic_ce';
  $field_group->data = array(
    'label' => 'C1. Schools',
    'weight' => '8',
    'children' => array(
      0 => 'field_com_ce_existe',
      1 => 'field_ce_location',
      2 => 'field_com_ce_nombre',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C1. Schools',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-ce field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_ce|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_cs|entityform|comunidad|form';
  $field_group->group_name = 'group_com_cs';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_con_fic_cs';
  $field_group->data = array(
    'label' => 'D1. Health centers',
    'weight' => '7',
    'children' => array(
      0 => 'field_com_cs_existe',
      1 => 'field_com_cs_nombre',
      2 => 'field_cs_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D1. Health centers',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-cs field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_cs|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_dist_viviendas|entityform|comunidad|form';
  $field_group->group_name = 'group_com_dist_viviendas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A5. Distribution of households with access to a water supply system',
    'weight' => '75',
    'children' => array(
      0 => 'field_com_viv_con_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A5. Household distribution by system ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-dist-viviendas field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_dist_viviendas|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_exist_infestr|entityform|comunidad|form';
  $field_group->group_name = 'group_com_exist_infestr';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B2. Household sanitation facility',
    'weight' => '29',
    'children' => array(
      0 => 'field_com_num_viv_infta',
      1 => 'field_field_com_num_viv_infnt',
      2 => 'field_com_num_viv_inftb',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B2. Sanitation. Existing household infrastructure',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-exist-infestr field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_exist_infestr|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_fic_cecg|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_com_fic_cecg';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C2. School: General characteristics',
    'weight' => '0',
    'children' => array(
      0 => 'field_con_fic_ce_fnombre',
      1 => 'field_com_fic_ce_fcodigo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C2. School: General characteristics',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cecg field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_com_fic_cecg|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_fic_cesa|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_com_fic_cesa';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C3. School: Water Supply System',
    'weight' => '3',
    'children' => array(
      0 => 'field_com_fic_cesa_pa',
      1 => 'field_system_ref',
      2 => 'field_com_fic_cesa_pd',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C3. School: Water Supply System',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cesa field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_com_fic_cesa|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_fic_cesh|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_com_fic_cesh';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C4. Schools: Sanitation and hygiene',
    'weight' => '4',
    'children' => array(
      0 => 'group_c4_grid_1',
      1 => 'group_c4_grid_2',
      2 => 'group_c4_grid_3',
      3 => 'group_c4_grid_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C4. Schools: Sanitation and hygiene',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cesh field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_com_fic_cesh|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_fic_ce|entityform|comunidad|form';
  $field_group->group_name = 'group_com_fic_ce';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. Schools',
    'weight' => '2',
    'children' => array(
      0 => 'field_con_fic_ce_ficha',
      1 => 'group_com_ce',
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
  $field_groups['group_com_fic_ce|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_fic_cscg|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_com_fic_cscg';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D2. Healthcare center: General characteristics',
    'weight' => '0',
    'children' => array(
      0 => 'field_group_com_fic_cscgnom',
      1 => 'field_com_fic_cscgperf',
      2 => 'field_com_fic_cscgperm',
      3 => 'field_com_fic_cscgusum',
      4 => 'field_com_fic_cscgusuf',
      5 => 'field_com_fic_cssgcodigo',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D2. Healthcare center: General characteristics',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cscg field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_fic_cscg|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_fic_cssa|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_com_fic_cssa';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D3.  Healthcare center: Water system',
    'weight' => '1',
    'children' => array(
      0 => 'field_system_ref',
      1 => 'field_com_fic_cssa_pd',
      2 => 'field_com_fic_cssa_pa',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D3.  Healthcare center: Water system',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cssa field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_fic_cssa|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_fic_cssh|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_com_fic_cssh';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D4.  Healthcare center: Sanitation and hygiene',
    'weight' => '2',
    'children' => array(
      0 => 'group_d4_grid_1',
      1 => 'group_d4_grid_2',
      2 => 'group_d4_grid_3',
      3 => 'group_d4_grid_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D4.  Healthcare center: Sanitation and hygiene',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cssh field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_fic_cssh|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_higiene|entityform|comunidad|form';
  $field_group->group_name = 'group_com_higiene';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B5. Household hygiene',
    'weight' => '33',
    'children' => array(
      0 => 'field_com_hig_num_vivtodos',
      1 => 'field_com_hig_num_vivagua',
      2 => 'field_com_hig_num_vivbasica',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B5. Household hygiene',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-higiene field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_higiene|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_interv_prev|entityform|comunidad|form';
  $field_group->group_name = 'group_com_interv_prev';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_interv';
  $field_group->data = array(
    'label' => 'E1. Interventions scheduled or in progress ',
    'weight' => '43',
    'children' => array(
      0 => 'field_com_fc_systypunimprove',
      1 => 'field_com_fc_impsystem',
      2 => 'field_com_fc_systypimprove',
      3 => 'field_com_fc_newwatsystem',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'E1. Interventions scheduled or in progress ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-interv-prev field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_interv_prev|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_interv|entityform|comunidad|form';
  $field_group->group_name = 'group_com_interv';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E. Interventions',
    'weight' => '4',
    'children' => array(
      0 => 'group_com_interv_prev',
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
  $field_groups['group_com_interv|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_no_uso|entityform|comunidad|form';
  $field_group->group_name = 'group_com_no_uso';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B4. Use of unimproved sanitation',
    'weight' => '32',
    'children' => array(
      0 => 'group_b4_grid',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B4. Un-improved sanitation. Use of infrastructure ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-no-uso field-group-fieldset group-grid-container',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_com_no_uso|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_obs_obscom|entityform|comunidad|form';
  $field_group->group_name = 'group_com_obs_obscom';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_obs';
  $field_group->data = array(
    'label' => 'F1. Comments and observations',
    'weight' => '43',
    'children' => array(
      0 => 'field_com_obs_obscomre',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F1. Comments and observations',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-obs-obscom field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_com_obs_obscom|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_obs|entityform|comunidad|form';
  $field_group->group_name = 'group_com_obs';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F. Comments',
    'weight' => '5',
    'children' => array(
      0 => 'group_com_obs_obscom',
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
  $field_groups['group_com_obs|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_proc_empleado|entityform|comunidad|form';
  $field_group->group_name = 'group_com_proc_empleado';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B1. Data collection method',
    'weight' => '28',
    'children' => array(
      0 => 'field_com_num_viv_muestra',
      1 => 'field_com_lev_muestral',
      2 => 'field_com_lev_utilform',
      3 => 'field_com_lev_general',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B1. Process used to complete this form',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-proc-empleado field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_proc_empleado|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_recotrata|entityform|comunidad|form';
  $field_group->group_name = 'group_com_recotrata';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B6. Solid waste collection and disposal',
    'weight' => '34',
    'children' => array(
      0 => 'field_com_recotrata_prac',
      1 => 'field_com_recontrata_numvivc',
      2 => 'field_com_recotrata_disp',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B6. Solid waste collection and disposal',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-recotrata field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_recotrata|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_saneamiento|entityform|comunidad|form';
  $field_group->group_name = 'group_com_saneamiento';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Sanitation and hygiene',
    'weight' => '1',
    'children' => array(
      0 => 'group_com_uso_inf',
      1 => 'group_com_exist_infestr',
      2 => 'group_com_no_uso',
      3 => 'group_com_higiene',
      4 => 'group_com_recotrata',
      5 => 'group_com_proc_empleado',
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
  $field_groups['group_com_saneamiento|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_srv|entityform|comunidad|form';
  $field_group->group_name = 'group_com_srv';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A7. Public services',
    'weight' => '77',
    'children' => array(
      0 => 'field_com_srv_existe',
      1 => 'field_com_srv_inte_existe',
      2 => 'field_com_srv_caracteristicas',
      3 => 'field_com_srv_telm_existe',
      4 => 'field_com_srv_telf_existe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A7. Electricity and communications',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-srv field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_srv|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_uso_inf|entityform|comunidad|form';
  $field_group->group_name = 'group_com_uso_inf';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B3. Use of improved sanitation (Type 1 or Type 2)',
    'weight' => '30',
    'children' => array(
      0 => 'group_b3_grid_2',
      1 => 'group_b3_grid_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B3. Sanitation. Use of IMPROVED infrastructure type 1 or type 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-uso-inf field-group-fieldset group-grid-container',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_uso_inf|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_viviendas_sin_sistema|entityform|comunidad|form';
  $field_group->group_name = 'group_com_viviendas_sin_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A6. No. of households without access to a water system',
    'weight' => '76',
    'children' => array(
      0 => 'field_com_viv_sin_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A6. Households without system',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-viviendas-sin-sistema field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_com_viviendas_sin_sistema|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_comentarios|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_comentarios';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_observaciones';
  $field_group->data = array(
    'label' => 'I1.',
    'weight' => '147',
    'children' => array(
      0 => 'field_comentarios',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-comentarios field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_comentarios|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_con_fic_cs|entityform|comunidad|form';
  $field_group->group_name = 'group_con_fic_cs';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. Health center',
    'weight' => '3',
    'children' => array(
      0 => 'field_com_fic_cs_ficha',
      1 => 'group_com_cs',
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
  $field_groups['group_con_fic_cs|entityform|comunidad|form'] = $field_group;

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
  $field_group->identifier = 'group_c|entityform|sistema|form';
  $field_group->group_name = 'group_c';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. Transmission line(s)',
    'weight' => '2',
    'children' => array(
      0 => 'group_c1',
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
  $field_groups['group_c|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d1|field_collection_item|field_d_infraestructura|form';
  $field_group->group_name = 'group_d1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_d_infraestructura';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D1. Water treatment infrastructure',
    'weight' => '3',
    'children' => array(
      0 => 'field_d1_4',
      1 => 'field_tipo_de_tratamiento',
      2 => 'field_d1_5',
      3 => 'field_d1_1',
      4 => 'field_d1_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D1. Water treatment infrastructure',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-d1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_d1|field_collection_item|field_d_infraestructura|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d2|field_collection_item|field_d_infraestructura|form';
  $field_group->group_name = 'group_d2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_d_infraestructura';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D2. State of Water Treatment Infrastructure',
    'weight' => '6',
    'children' => array(
      0 => 'field_edo_fisico_linea_tto',
      1 => 'field_d2_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D2. Physical condition of water treatment infrastructure',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-d2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_d2|field_collection_item|field_d_infraestructura|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d|entityform|sistema|form';
  $field_group->group_name = 'group_d';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. Water treatment infrastructure',
    'weight' => '3',
    'children' => array(
      0 => 'field_d_infraestructura',
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
  $field_groups['group_d|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e1|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_e1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_observaciones';
  $field_group->data = array(
    'label' => 'E1',
    'weight' => '28',
    'children' => array(
      0 => 'field_observaciones_comentarios',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'E1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-e1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_e1|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e1|entityform|sistema|form';
  $field_group->group_name = 'group_e1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_e';
  $field_group->data = array(
    'label' => 'E1',
    'weight' => '74',
    'children' => array(
      0 => 'field_e_infraestructura_almac',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'E1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-e1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_e1|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e1|field_collection_item|field_e_infraestructura_almac|form';
  $field_group->group_name = 'group_e1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_e_infraestructura_almac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E1. Water storage infrastructure',
    'weight' => '0',
    'children' => array(
      0 => 'field_e1_5_altitud',
      1 => 'field_latitud_longitud',
      2 => 'field_e1_1',
      3 => 'field_frecuencia_limpieza_infr',
      4 => 'field_capacidad_almacenamiento',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'E1. Water storage infrastructure',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-e1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_e1|field_collection_item|field_e_infraestructura_almac|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e2|field_collection_item|field_e_infraestructura_almac|form';
  $field_group->group_name = 'group_e2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_e_infraestructura_almac';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E2. Physical condition of water storage infrastructure',
    'weight' => '6',
    'children' => array(
      0 => 'field_e2_2',
      1 => 'field_edo_fisico_infr_almac',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'E2. Physical condition of water storage infrastructure',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-e2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_e2|field_collection_item|field_e_infraestructura_almac|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e|entityform|sistema|form';
  $field_group->group_name = 'group_e';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E. Water storage infrastructure',
    'weight' => '4',
    'children' => array(
      0 => 'group_e1',
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
  $field_groups['group_e|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f1|entityform|sistema|form';
  $field_group->group_name = 'group_f1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_f';
  $field_group->data = array(
    'label' => 'F1',
    'weight' => '72',
    'children' => array(
      0 => 'field_f_red_de_distribucion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-f1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_f1|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f1|field_collection_item|field_f_red_de_distribucion|form';
  $field_group->group_name = 'group_f1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_f_red_de_distribucion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F1. Water Distribution Network',
    'weight' => '0',
    'children' => array(
      0 => 'field_f1_5',
      1 => 'field_f1_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F1. Water distribution ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-f1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_f1|field_collection_item|field_f_red_de_distribucion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f2|field_collection_item|field_f_red_de_distribucion|form';
  $field_group->group_name = 'group_f2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_f_red_de_distribucion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F3. Average Distance from Household to Public Standpost',
    'weight' => '2',
    'children' => array(
      0 => 'field_f2_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F3. Average distance from homes to the standpipes ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-f2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_f2|field_collection_item|field_f_red_de_distribucion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f3|field_collection_item|field_f_red_de_distribucion|form';
  $field_group->group_name = 'group_f3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_f_red_de_distribucion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F4. State of Water Distribution Infrastructure',
    'weight' => '3',
    'children' => array(
      0 => 'field_f3_2',
      1 => 'field_edo_fisico_red_dist',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F4. Physical condition of water distribution infrastructure',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-f3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_f3|field_collection_item|field_f_red_de_distribucion|form'] = $field_group;

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
    'label' => 'C5. Billing, Payment and Revenue',
    'weight' => '7',
    'children' => array(
      0 => 'field_usuarios_al_dia',
      1 => 'field_usuarios_deberian_pagan',
      2 => 'field_ingresos_reales',
      3 => 'field_facturacion_promedio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C5. Billing, Payment, and Income',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-fact-pago field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_fact_pago|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_financiamiento_inicial|entityform|sistema|form';
  $field_group->group_name = 'group_financiamiento_inicial';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A3. Initial Source(s) of Construction Financing',
    'weight' => '117',
    'children' => array(
      0 => 'field_a_fuentes_de_financiamient',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A3. Initial construction financing sources ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-financiamiento-inicial field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_financiamiento_inicial|entityform|sistema|form'] = $field_group;

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
    'label' => 'F2. Is liquid capital available?',
    'weight' => '99',
    'children' => array(
      0 => 'field__cuenta_con_fondos_disponi',
      1 => 'field_monto_total_fondos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F2. Are there available funds?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-fondos-disponibles field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_fondos_disponibles|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fuente_captacion|entityform|sistema|form';
  $field_group->group_name = 'group_fuente_captacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Water source and/or water intake works',
    'weight' => '1',
    'children' => array(
      0 => 'group_b1',
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
  $field_groups['group_fuente_captacion|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fuente_y_ocaptacion|field_collection_item|field_fuente_y_o_captacion|form';
  $field_group->group_name = 'group_fuente_y_ocaptacion';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_fuente_y_o_captacion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B1. Source and/or catchment',
    'weight' => '0',
    'children' => array(
      0 => 'field_nombre_de_la_fuente',
      1 => 'field_b1_7',
      2 => 'field_b1_altitud',
      3 => 'field_codigo_de_la_fuente',
      4 => 'field_es_la_fuente_principal',
      5 => 'field_tipo_de_fuente',
      6 => 'field_fecha_toma_caudal_ep_seca',
      7 => 'field_caudal_fuente_epoca_seca',
      8 => 'field_caudal_de_la_fuente',
      9 => 'field_fecha_toma_cdal_epoca_seca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B1. Source and/or catchment',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-fuente-y-ocaptacion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_fuente_y_ocaptacion|field_collection_item|field_fuente_y_o_captacion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f|entityform|sistema|form';
  $field_group->group_name = 'group_f';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F. Water Distribution Network',
    'weight' => '5',
    'children' => array(
      0 => 'group_f1',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'F. Water Distribution Network',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_f|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g1|entityform|sistema|form';
  $field_group->group_name = 'group_g1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_g';
  $field_group->data = array(
    'label' => 'G1. System Flow Rate',
    'weight' => '68',
    'children' => array(
      0 => 'field_caudal_actual_del_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'G1. Present system flow',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-g1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_g1|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g2|entityform|sistema|form';
  $field_group->group_name = 'group_g2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_g';
  $field_group->data = array(
    'label' => 'G2. Chlorine Disinfection',
    'weight' => '69',
    'children' => array(
      0 => 'field_g2_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'G2. Disinfection using chlorine',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-g2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_g2|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g3|entityform|sistema|form';
  $field_group->group_name = 'group_g3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_g';
  $field_group->data = array(
    'label' => 'G3. Household Water Treatment',
    'weight' => '70',
    'children' => array(
      0 => 'field_g3_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'G3. Household filtration',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-g3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_g3|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g4|entityform|sistema|form';
  $field_group->group_name = 'group_g4';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_g';
  $field_group->data = array(
    'label' => 'G4. Drinking Water Quality',
    'weight' => '71',
    'children' => array(
      0 => 'field_g4_4',
      1 => 'field_g4_3',
      2 => 'field_fecha_analisis_coliformes',
      3 => 'field_fecha_analisiscalidad_agua',
      4 => 'field_cantidad_de_cloro_residual',
      5 => 'field_fecha_analisis_fq',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'G4. Water quality',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-g4 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_g4|entityform|sistema|form'] = $field_group;

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
    'label' => 'E1.',
    'weight' => '114',
    'children' => array(
      0 => 'field_gasto_teorico_operacion',
      1 => 'field_gasto_real_operacion',
      2 => 'field_gasto_teorico_admin',
      3 => 'field_gasto_teorico_ambientales',
      4 => 'field_gasto_teorico_mantenimient',
      5 => 'field_sumatoria_gastos_reales',
      6 => 'field_gasto_promedio_admin',
      7 => 'field_gasto_real_mantenimiento',
      8 => 'field_gasto_real_ambientales',
      9 => 'field_sumatoria_gastos_teoricos',
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
  $field_group->identifier = 'group_g|entityform|sistema|form';
  $field_group->group_name = 'group_g';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'G. Drinking water quantity and quality',
    'weight' => '6',
    'children' => array(
      0 => 'group_g1',
      1 => 'group_g3',
      2 => 'group_g2',
      3 => 'group_g4',
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
  $field_groups['group_g|entityform|sistema|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_h1|entityform|sistema|form';
  $field_group->group_name = 'group_h1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_h';
  $field_group->data = array(
    'label' => 'H1.',
    'weight' => '17',
    'children' => array(
      0 => 'field_h1_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'H1.',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-h1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_h1|entityform|sistema|form'] = $field_group;

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
    'label' => 'H2.',
    'weight' => '11',
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
  $field_group->identifier = 'group_h|entityform|sistema|form';
  $field_group->group_name = 'group_h';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'H. Comments',
    'weight' => '7',
    'children' => array(
      0 => 'group_h1',
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
  $field_groups['group_h|entityform|sistema|form'] = $field_group;

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
    'weight' => '96',
    'children' => array(
      0 => 'field_pais',
      1 => 'field_imagenps',
      2 => 'field_altitud',
      3 => 'field_entity_name',
      4 => 'field_entidad_local',
      5 => 'field_codigo_de_prestador',
      6 => 'field_latitud',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A1.',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-info-general field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'F. Financial information: working capital',
    'weight' => '5',
    'children' => array(
      0 => 'group_fondos_disponibles',
      1 => 'group_balance_contable',
      2 => 'group_ingresos_egresos',
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
    'label' => 'E. Financial information: expenditures',
    'weight' => '4',
    'children' => array(
      0 => 'group_gastos_promedios',
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
    'label' => 'D. Financial information: additional revenue',
    'weight' => '3',
    'children' => array(
      0 => 'group_aportaciones_extas',
      1 => 'group_inf_ingresos_extras',
      2 => 'group_tasa_extension',
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
    'label' => 'D1. Additional revenue from operations',
    'weight' => '127',
    'children' => array(
      0 => 'field_ingresos_extra',
      1 => 'field_monto_previsto',
      2 => 'field_monto_total_finalizado',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D1. Additional revenue from operations',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-inf-ingresos-extras field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'C4. Are metering data available?',
    'weight' => '6',
    'children' => array(
      0 => 'field_inf_medicion_agua',
      1 => 'field_agua_facturada',
      2 => 'field_agua_producida',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C4. Is there water metering information?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-inf-medicion-agua field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'B. Community organization information',
    'weight' => '1',
    'children' => array(
      0 => 'group_legal',
      1 => 'group_junta_directiva',
      2 => 'group_tecnicos_repesentantes',
      3 => 'group_cuenta_banco',
      4 => 'group_rinde_cuentas',
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
    'label' => 'C. Financial information: regular income',
    'weight' => '2',
    'children' => array(
      0 => 'group_mecanismo_pago',
      1 => 'group_inf_medicion_agua',
      2 => 'group_fact_pago',
      3 => 'group_mantenimiento_sistema',
      4 => 'group_tarifa',
      5 => 'group_tipo_tarifa',
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
  $field_groups['group_info_economica|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general_comunidad|entityform|comunidad|form';
  $field_group->group_name = 'group_info_general_comunidad';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. General information',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_reference',
      1 => 'field_fecha_encuesta',
      2 => 'field_pais',
      3 => 'group_otras_divisiones',
      4 => 'group_com_viviendas_sin_sistema',
      5 => 'group_com_srv',
      6 => 'group_com_dist_viviendas',
      7 => 'group_co_poblacion',
      8 => 'group_com_cantidad_viv',
      9 => 'group_info_general',
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
  $field_groups['group_info_general_comunidad|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general|entityform|comunidad|form';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A1.',
    'weight' => '71',
    'children' => array(
      0 => 'field_entidad_local',
      1 => 'field_entity_name',
      2 => 'field_com_codigo_comunidad',
      3 => 'field_imagenc',
      4 => 'field_com_georef',
      5 => 'field_com_altitud',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A1.',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-info-general field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_info_general|entityform|comunidad|form'] = $field_group;

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
    'label' => 'A. General information and design',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_reference',
      1 => 'field_pais',
      2 => 'field_fecha_de_aplicacion',
      3 => 'group_pat_a1',
      4 => 'group_pat_a2',
      5 => 'group_pat_a3',
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
  $field_groups['group_info_general|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

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
    'label' => 'A. General Information',
    'weight' => '0',
    'children' => array(
      0 => 'field_fecha_aplicacion',
      1 => 'field_user_reference',
      2 => 'group_clase_prestador',
      3 => 'group_inf_basica',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'A. General Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_info_general|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general|entityform|sistema|form';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A1',
    'weight' => '115',
    'children' => array(
      0 => 'field_entity_name',
      1 => 'field_anno_construccion',
      2 => 'field_entidad_local',
      3 => 'field_codigo_de_sistema',
      4 => 'field_latitud',
      5 => 'field_alto',
      6 => 'field_imagen',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-info-general field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_info_general|entityform|sistema|form'] = $field_group;

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
    'label' => 'F1. Is the income and expenditure ledger up to date?',
    'weight' => '97',
    'children' => array(
      0 => 'field_libro_ingresos_egresos',
      1 => 'field_monto_total_de_egresos',
      2 => 'field_monto_total_de_ingresos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F1. Is the income and expenditure ledger up to date?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-ingresos-egresos field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_ingresos_egresos|entityform|prestador_de_servicio|form'] = $field_group;

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
    'label' => 'B. Supervision',
    'weight' => '1',
    'children' => array(
      0 => 'group_intervention_b2',
      1 => 'group_intervention_b1',
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
      'label' => 'B1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-intervention-b1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
      'label' => 'B2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-intervention-b2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_intervention_b2|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

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
    'label' => 'B2. Management Committee',
    'weight' => '28',
    'children' => array(
      0 => 'field_numero_reuniones',
      1 => 'field_fecha_eleccion',
      2 => 'field_miembros_nombrados',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => ' B2. Board of Directors',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-junta-directiva field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'B1. Legal Status',
    'weight' => '27',
    'children' => array(
      0 => 'field_estado_legal',
      1 => 'field_fecha_creacion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B1. Legal Status and Incorporation',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-legal field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'H. OPERATIONS AND MAINTENANCE',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
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
    'label' => 'C6. How Is the system maintained?',
    'weight' => '8',
    'children' => array(
      0 => 'field_otros_mantenimientos',
      1 => 'field_mantenimiento_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C6. How Is the system maintained?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-mantenimiento-sistema field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'C3. Is the community familiar with the billing system and are bills issued at a regular frequency?',
    'weight' => '5',
    'children' => array(
      0 => 'field_otros_motivos',
      1 => 'field_mecanismo_pago_tarifa',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C3. Is the community familiar with the rate payment mechanism and is it regularly applied?',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-mecanismo-pago field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_mecanismo_pago|entityform|prestador_de_servicio|form'] = $field_group;

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
    'label' => 'E. Comments',
    'weight' => '4',
    'children' => array(
      0 => 'group_e1',
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
  $field_groups['group_observaciones|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

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
    'label' => 'I. Comments',
    'weight' => '8',
    'children' => array(
      0 => 'group_comentarios',
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
    'label' => 'G. Operation and maintenance (O&M)',
    'weight' => '6',
    'children' => array(
      0 => 'group_atencion',
      1 => 'group_personal',
      2 => 'group_recursos',
      3 => 'group_reglamento',
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
  $field_groups['group_operacion_mantenimiento|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_otras_divisiones|entityform|comunidad|form';
  $field_group->group_name = 'group_otras_divisiones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A2. Other Administrative and/or Geographical Divisions',
    'weight' => '72',
    'children' => array(
      0 => 'field_otras_divisiones',
      1 => 'field_cuenca_hidrografica',
      2 => 'field_area_planificacion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A2. Other divisions',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-otras-divisiones field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_otras_divisiones|entityform|comunidad|form'] = $field_group;

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
    'label' => 'A2. Other Administrative and/or Geographical Divisions',
    'weight' => '116',
    'children' => array(
      0 => 'field_area_planificacion',
      1 => 'field_cuenca_hidrografica',
      2 => 'field_otras_divisiones',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A2. Other divisions',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-otras-divisiones field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_otras_divisiones|entityform|sistema|form'] = $field_group;

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
    'weight' => '45',
    'children' => array(
      0 => 'field_imagenpat',
      1 => 'field_entity_name',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
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
    'weight' => '46',
    'children' => array(
      0 => 'field_tipo_de_pat2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pat-a2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
    'weight' => '47',
    'children' => array(
      0 => 'field_entidad_local',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A3',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-pat-a3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_pat_a3|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_personal_docente|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_personal_docente';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => '﻿﻿﻿Teaching and Administrative Staff',
    'weight' => '1',
    'children' => array(
      0 => 'field_com_fic_ce_fdocf',
      1 => 'field_com_fic_ce_fdocm',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => '﻿﻿﻿Teaching and Administrative Staff',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-personal-docente field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_personal_docente|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

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
    'label' => 'G3.',
    'weight' => '12',
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
  $field_group->identifier = 'group_poblacion_estudiantil|field_collection_item|field_con_fic_ce_ficha|form';
  $field_group->group_name = 'group_poblacion_estudiantil';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_con_fic_ce_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Student Body',
    'weight' => '2',
    'children' => array(
      0 => 'field_com_fic_ce_festm',
      1 => 'field_com_fic_ce_festf',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Student Body',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-poblacion-estudiantil field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_poblacion_estudiantil|field_collection_item|field_con_fic_ce_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_proteccion|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_proteccion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_mantenimiento_operacion';
  $field_group->data = array(
    'label' => 'H3.',
    'weight' => '12',
    'children' => array(
      0 => 'field_proteccion_zona_fuente',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-proteccion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_proteccion|entityform|prestador_de_servicio|form'] = $field_group;

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
      'label' => 'C1',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-recursos-financ-hum-log-c1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
      'label' => 'C2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-recursos-financ-hum-log-c2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
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
      'label' => 'C3',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
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
    'label' => 'C4. Logistics',
    'weight' => '18',
    'children' => array(
      0 => 'field_dispone_fondos_combistible',
      1 => 'field_dispone_servicios_internet',
      2 => 'field_cantidad_equipos_transport',
      3 => 'field_estado_equipos_informatico',
      4 => 'field_dispone_fondos_viaticos',
      5 => 'field_estado_equipos_transporte',
      6 => 'field_estado_fondos_viaticos',
      7 => 'field_cantidad_medicion_agua',
      8 => 'field_dispone_material_didactico',
      9 => 'field_cantidad_equipos_inform',
      10 => 'field_estado_medicion_agua',
      11 => 'field_estado_fondos_combustible',
      12 => 'field_estado_servicios_internet',
      13 => 'field_estado_material_didactico',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C4. Logistics',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-recursos-financ-hum-log-c4 field-group-fieldset parallel-widgets',
        'description' => '',
      ),
      'formatter' => 'open',
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
    'label' => 'C. Financial, human, and logistical resources',
    'weight' => '2',
    'children' => array(
      0 => 'group_recursos_financ_hum_log_c3',
      1 => 'group_recursos_financ_hum_log_c4',
      2 => 'group_recursos_financ_hum_log_c1',
      3 => 'group_recursos_financ_hum_log_c2',
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
  $field_groups['group_recursos_financ_hum_log|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

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
    'label' => 'G2.',
    'weight' => '11',
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
  $field_group->identifier = 'group_red_distribucion|field_collection_item|field_f_red_de_distribucion|form';
  $field_group->group_name = 'group_red_distribucion';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_f_red_de_distribucion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F2. Distribution network',
    'weight' => '1',
    'children' => array(
      0 => 'field_f1_2',
      1 => 'field_f1_4',
      2 => 'field_f1_3',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F2. Distribution network',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-red-distribucion field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_red_distribucion|field_collection_item|field_f_red_de_distribucion|form'] = $field_group;

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
    'label' => 'G4.',
    'weight' => '13',
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
  $field_group->identifier = 'group_rehabilitaciones_sistema|entityform|sistema|form';
  $field_group->group_name = 'group_rehabilitaciones_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A4. Refurbishment(s) and/or Expansion(s)',
    'weight' => '118',
    'children' => array(
      0 => 'field_rehabilitaciones_y_o_ampli',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A4. System refurbishments and/or expansions',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-rehabilitaciones-sistema field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_rehabilitaciones_sistema|entityform|sistema|form'] = $field_group;

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
    'label' => 'B5. Accountability',
    'weight' => '32',
    'children' => array(
      0 => 'field_rinde_cuentas',
      1 => 'field_acta_rendicion_cuentas',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B5. Accountability',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-rinde-cuentas field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'C1.',
    'weight' => '2',
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
  $field_group->identifier = 'group_tasa_extension|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_tasa_extension';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_inf_ingr_extraordinarios';
  $field_group->data = array(
    'label' => 'D3.',
    'weight' => '130',
    'children' => array(
      0 => 'field_tasa_anual_de_expansion_pr',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tasa-extension field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tasa_extension|entityform|prestador_de_servicio|form'] = $field_group;

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
    'label' => 'B3. Management Committee Representatives and Technicians',
    'weight' => '29',
    'children' => array(
      0 => 'field_representantes',
      1 => 'field_tecnicos',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Board of Directors: Representatives and Technicians',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-tecnicos-repesentantes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_tecnicos_repesentantes|entityform|prestador_de_servicio|form'] = $field_group;

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
    'label' => 'D. Type of support',
    'weight' => '3',
    'children' => array(
      0 => 'group_cantidad_comun_servicios',
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
  $field_groups['group_tipo_de_apoyo|entityform|prestador_de_asistencia_t_cnica|form'] = $field_group;

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
    'label' => 'C2. Water tariffs',
    'weight' => '4',
    'children' => array(
      0 => 'field_tipo_de_tarifa',
      1 => 'field_tarifa_media_mensual',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C2. Water tariffs',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-tipo-tarifa field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_tipo_tarifa|entityform|prestador_de_servicio|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tpo_sist_abastecimeinto|entityform|sistema|form';
  $field_group->group_name = 'group_tpo_sist_abastecimeinto';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A5. Type of water supply system',
    'weight' => '119',
    'children' => array(
      0 => 'field_a4_2',
      1 => 'field_tipo_de_sistema_de_absto',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A5. Type of water supply system',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-tpo-sist-abastecimeinto field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_tpo_sist_abastecimeinto|entityform|sistema|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('	B4.');
  t('A. General Information');
  t('A. General information');
  t('A. General information and design');
  t('A1');
  t('A1.');
  t('A2');
  t('A2. Other Administrative and/or Geographical Divisions');
  t('A2. Type of Provider');
  t('A3');
  t('A3.');
  t('A3. Initial Source(s) of Construction Financing');
  t('A4.');
  t('A4. Refurbishment(s) and/or Expansion(s)');
  t('A5. Distribution of households with access to a water supply system');
  t('A5. Type of water supply system');
  t('A6. Are there adequate water resources (at the source) to meet demand?');
  t('A6. No. of households without access to a water system');
  t('A7. Public services');
  t('A7. Water Supply System Design');
  t('B. Community organization information');
  t('B. Sanitation and hygiene');
  t('B. Supervision');
  t('B. Water source and/or water intake works');
  t('B1');
  t('B1. Data collection method');
  t('B1. Legal Status');
  t('B1. Source and/or catchment');
  t('B2');
  t('B2. Environmental conditions surrounding the source and/or intake (e.g. riverbanks, recharge zones, well fields, etc.)');
  t('B2. Household sanitation facility');
  t('B2. Management Committee');
  t('B3.');
  t('B3. Management Committee Representatives and Technicians');
  t('B3. Use of improved sanitation (Type 1 or Type 2)');
  t('B4. State of Water Intake Infrastructure');
  t('B4. Use of unimproved sanitation');
  t('B5. Accountability');
  t('B5. Household hygiene');
  t('B6. Solid waste collection and disposal');
  t('C. Financial information: regular income');
  t('C. Financial, human, and logistical resources');
  t('C. Schools');
  t('C. Transmission line(s)');
  t('C1');
  t('C1.');
  t('C1. Schools');
  t('C1. Water Transmission Line(s)');
  t('C2');
  t('C2. School: General characteristics');
  t('C2. State of Water Transmission Line(s)');
  t('C2. Water tariffs');
  t('C3');
  t('C3. Is the community familiar with the billing system and are bills issued at a regular frequency?');
  t('C3. School: Water Supply System');
  t('C4. Are metering data available?');
  t('C4. Logistics');
  t('C4. Schools: Sanitation and hygiene');
  t('C5. Billing, Payment and Revenue');
  t('C6. How Is the system maintained?');
  t('D. Financial information: additional revenue');
  t('D. Health center');
  t('D. Type of support');
  t('D. Water treatment infrastructure');
  t('D1. Additional revenue from operations');
  t('D1. Health centers');
  t('D1. Number of Communities - Technical assistance given to service providers (e.g. water committee, etc.)');
  t('D1. Water treatment infrastructure');
  t('D2. Have there been special contributions not directly related to water service?');
  t('D2. Healthcare center: General characteristics');
  t('D2. State of Water Treatment Infrastructure');
  t('D3.');
  t('D3.  Healthcare center: Water system');
  t('D4.  Healthcare center: Sanitation and hygiene');
  t('E. Comments');
  t('E. Financial information: expenditures');
  t('E. Interventions');
  t('E. Water storage infrastructure');
  t('E1');
  t('E1.');
  t('E1. Interventions scheduled or in progress ');
  t('E1. Water storage infrastructure');
  t('E2. Physical condition of water storage infrastructure');
  t('F. Comments');
  t('F. Financial information: working capital');
  t('F. Water Distribution Network');
  t('F1');
  t('F1. Comments and observations');
  t('F1. Is the income and expenditure ledger up to date?');
  t('F1. Water Distribution Network');
  t('F2. Distribution network');
  t('F2. Is liquid capital available?');
  t('F3. Average Distance from Household to Public Standpost');
  t('F3. Is there a balance sheet?');
  t('F4. State of Water Distribution Infrastructure');
  t('FULL-TIME use');
  t('G. Drinking water quantity and quality');
  t('G. Operation and maintenance (O&M)');
  t('G1.');
  t('G1. System Flow Rate');
  t('G2.');
  t('G2. Chlorine Disinfection');
  t('G3.');
  t('G3. Household Water Treatment');
  t('G4.');
  t('G4. Drinking Water Quality');
  t('H. Comments');
  t('H. Operation and maintenance (O&M)');
  t('H1.');
  t('H2.');
  t('H3.');
  t('H4. Type of corrective measures');
  t('H5. Type of preventive measures ');
  t('I. Comments');
  t('I1.');
  t('Less than 10m');
  t('OCCASIONAL USE');
  t('Shared');
  t('Staff');
  t('Student Body');
  t('Students');
  t('Type I');
  t('Type II');
  t('Unimproved');
  t('﻿﻿﻿Teaching and Administrative Staff');

  return $field_groups;
}
