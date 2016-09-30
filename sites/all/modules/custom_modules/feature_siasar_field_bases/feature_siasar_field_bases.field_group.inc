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
    'label' => 'A5. ¿Hay suficiente agua en las fuentes en función de la demanda?',
    'weight' => '29',
    'children' => array(
      0 => 'field_agua_en_invierno',
      1 => 'field_agua_en_verano',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-a5 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'A6. Croquis del sistema de abastecimiento de agua',
    'weight' => '30',
    'children' => array(
      0 => 'field_a6_croquis',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-a6-croquis-del-sistema field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'A. Información General y esquema del sistema',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_reference',
      1 => 'field_fecha_de_aplicaci_n',
      2 => 'group_rehabilitaciones_sistema',
      3 => 'group_a5',
      4 => 'group_a6_croquis_del_sistema',
      5 => 'group_tpo_sist_abastecimeinto',
      6 => 'group_financiamiento_inicial',
      7 => 'group_info_general',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'A. Información General y esquema del sistema',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-a-info-general-sistema field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
    'label' => '	 H4. Acciones correctivas',
    'weight' => '13',
    'children' => array(
      0 => 'field_sustitucion_componentes',
      1 => 'field_reforestacion',
      2 => 'field_no_aguas_residuales',
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
    'weight' => '14',
    'children' => array(
      0 => 'field_proteccion_flora_fauna',
      1 => 'field_proteccion_suelos',
      2 => 'field_revision_estado_cercano',
      3 => 'field_revision_plan_contingencia',
      4 => 'field_revision_estado_obra',
      5 => 'field_no_tala_y_resforestacion',
      6 => 'field_revision_componentes_toma',
      7 => 'field_vigilancia_zona',
      8 => 'field_proteccion_terreno',
      9 => 'field_revision_demarcacion',
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
    'weight' => '129',
    'children' => array(
      0 => 'field_monto_aporte_previsto',
      1 => 'field__aportaciones_extras',
      2 => 'field_monto_aporte_finalizado',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-b1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'B2. Estado de zona cercana a la fuente o toma de agua del sistema',
    'weight' => '1',
    'children' => array(
      0 => 'field_existencia_z_erosionadas',
      1 => 'field_existencia_deareas_verdes',
      2 => 'field_proteccion_de_la_fuente',
      3 => 'field_existenciade_contaminacion',
      4 => 'field_existencia_de_indicio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-b2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_b2|field_collection_item|field_fuente_y_o_captacion|form'] = $field_group;

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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-b3 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_b3|field_collection_item|field_fuente_y_o_captacion|form'] = $field_group;

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
    'label' => 'B4. Estado físico de la infraestructura de captación de agua',
    'weight' => '17',
    'children' => array(
      0 => 'field_observaciones',
      1 => 'field_edo_fisico_infra_cptcion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-b4 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'F3. Balance contable',
    'weight' => '100',
    'children' => array(
      0 => 'field_activos_no_corrientes',
      1 => 'field_activos_corrientes',
      2 => 'field_pasivos_corrientes_',
      3 => 'field_balance_contable',
      4 => 'field_pasivos_no_corrientes',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-c1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'C1. Línea de conducción',
    'weight' => '1',
    'children' => array(
      0 => 'field_c1_1',
      1 => 'field_c1_4',
      2 => 'field_diametro_medio_de_tuberia',
      3 => 'field_longitud_de_la_linea',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-c1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'C2. Estado físico de la infraestructura de conducción de agua',
    'weight' => '6',
    'children' => array(
      0 => 'field_c2_2',
      1 => 'field_edo_fisico_linea_conducion',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C2. Estado físico de la infraestructura de conducción de agua',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-c2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_c2|field_collection_item|field_lineas_de_conduccion|form'] = $field_group;

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
    'weight' => '22',
    'children' => array(
      0 => 'field_apoyar_caps_conflictos',
      1 => 'field_otras_numero_comunidade',
      2 => 'field_asesorar_prestador_aom',
      3 => 'field_verificar_apoyar_caps',
      4 => 'field_otras_tipo_apoyo',
      5 => 'field_recolectar_muestras_agua',
      6 => 'field_apoyar_caps_planificacion',
      7 => 'field_apoyar_actualizar_tarifa',
      8 => 'field_apoyar_legalizacion_reglam',
      9 => 'field_revisar_actualizar_finanza',
      10 => 'field_siasar_planification_anual',
      11 => 'field_apoyar_juridica_caps',
      12 => 'field_actualizar_prov_servicio',
      13 => 'field_caps_medicion_pozo_agua',
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
  $field_group->identifier = 'group_clase_prestador|entityform|prestador_de_servicio|form';
  $field_group->group_name = 'group_clase_prestador';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_servicio';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A2. Clase prestador',
    'weight' => '97',
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
  $field_group->identifier = 'group_co_poblacion|entityform|comunidad|form';
  $field_group->group_name = 'group_co_poblacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A3.',
    'weight' => '5',
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
    'weight' => '6',
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
    'label' => 'C1. Centros educativos',
    'weight' => '8',
    'children' => array(
      0 => 'field_com_ce_nombre',
      1 => 'field_ce_location',
      2 => 'field_com_ce_existe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C1. Centros educativos',
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
    'label' => 'D1. Centros de salud',
    'weight' => '7',
    'children' => array(
      0 => 'field_com_cs_nombre',
      1 => 'field_com_cs_existe',
      2 => 'field_cs_location',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D1. Centros de salud',
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
    'label' => 'A5. Distribución de viviendas con sistema',
    'weight' => '7',
    'children' => array(
      0 => 'field_com_viv_con_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A5. Distribución de viviendas con sistema',
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
    'label' => 'B2. Saneamiento. Existencia de infraestructura para las viviendas',
    'weight' => '29',
    'children' => array(
      0 => 'field_com_num_viv_inftb',
      1 => 'field_com_num_viv_infta',
      2 => 'field_field_com_num_viv_infnt',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-exist-infestr field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'C2. Características generales',
    'weight' => '0',
    'children' => array(
      0 => 'field_con_fic_ce_fnombre',
      1 => 'field_com_fic_ce_fcodigo',
      2 => 'field_com_fic_ce_fdocf',
      3 => 'field_com_fic_ce_festf',
      4 => 'field_com_fic_ce_festm',
      5 => 'field_com_fic_ce_fdocm',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C2. Características generales',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cecg field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'C3. Sistema de agua',
    'weight' => '1',
    'children' => array(
      0 => 'field_com_fic_cesa_pa',
      1 => 'field_com_fic_cesa_pd',
      2 => 'field_system_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C3. Sistema de agua',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cesa field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'C4. Saneamiento e higiene',
    'weight' => '2',
    'children' => array(
      0 => 'field_com_fic_cesh_pd',
      1 => 'field_com_fic_cesh_pp',
      2 => 'field_com_fic_cesh_pq',
      3 => 'field_com_fic_cesh_pu',
      4 => 'field_com_fic_cesh_pa',
      5 => 'field_com_fic_cesh_pc',
      6 => 'field_com_fic_cesh_pw',
      7 => 'field_com_fic_cesh_ps',
      8 => 'field_com_fic_cesh_pl',
      9 => 'field_com_fic_cesh_pv',
      10 => 'field_com_fic_cesh_pg',
      11 => 'field_com_fic_cesh_ph',
      12 => 'field_com_fic_cesh_pf',
      13 => 'field_com_fic_cesh_pm',
      14 => 'field_com_fic_cesh_pr',
      15 => 'field_com_fic_cesh_pt',
      16 => 'field_com_fic_cesh_px',
      17 => 'field_com_fic_cesh_pn',
      18 => 'field_com_fic_cesh_pj',
      19 => 'field_com_fic_cesh_pk',
      20 => 'field_com_fic_cesh_po',
      21 => 'field_com_fic_cesh_pb',
      22 => 'field_com_fic_cesh_pe',
      23 => 'field_com_fic_cesh_pi',
      24 => 'field_com_fic_cesh_pac',
      25 => 'field_com_fic_cesh_pad',
      26 => 'field_com_fic_cesh_paa',
      27 => 'field_com_fic_cesh_pab',
      28 => 'field_com_fic_cesh_pcb',
      29 => 'field_com_fic_cesh_pbc',
      30 => 'field_com_fic_cesh_pba',
      31 => 'field_com_fic_cesh_pca',
      32 => 'field_com_fic_cesh_pcc',
      33 => 'field_com_fic_cesh_pbb',
      34 => 'field_com_fic_cesh_pbd',
      35 => 'field_com_fic_cesh_pcd',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'C4. Saneamiento e higiene',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-cesh field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'C. Ficha de centro educativo',
    'weight' => '4',
    'children' => array(
      0 => 'field_con_fic_ce_ficha',
      1 => 'group_com_ce',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'C. Ficha de centro educativo',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-fic-ce field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
    'label' => 'D2. Características generales',
    'weight' => '0',
    'children' => array(
      0 => 'field_group_com_fic_cscgnom',
      1 => 'field_com_fic_cscgusuf',
      2 => 'field_com_fic_cscgperm',
      3 => 'field_com_fic_cscgusum',
      4 => 'field_com_fic_cssgcodigo',
      5 => 'field_com_fic_cscgperf',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D2. Características generales',
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
    'label' => 'D3. Sistema de agua',
    'weight' => '1',
    'children' => array(
      0 => 'field_com_fic_cssa_pa',
      1 => 'field_com_fic_cssa_pd',
      2 => 'field_system_ref',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D3. Sistema de agua',
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
    'label' => 'D4. Saneamiento e higiene',
    'weight' => '2',
    'children' => array(
      0 => 'field_com_fic_cssh_pg',
      1 => 'field_com_fic_cssh_pt',
      2 => 'field_com_fic_cssh_pm',
      3 => 'field_com_fic_cssh_pr',
      4 => 'field_com_fic_cssh_pv',
      5 => 'field_com_fic_cssh_pw',
      6 => 'field_com_fic_cssh_pb',
      7 => 'field_com_fic_cssh_pd',
      8 => 'field_com_fic_cssh_pc',
      9 => 'field_com_fic_cssh_pe',
      10 => 'field_com_fic_cssh_pf',
      11 => 'field_com_fic_cssh_ph',
      12 => 'field_com_fic_cssh_pu',
      13 => 'field_com_fic_cssh_pq',
      14 => 'field_com_fic_cssh_pn',
      15 => 'field_com_fic_cssh_pl',
      16 => 'field_com_fic_cssh_ps',
      17 => 'field_com_fic_cssh_px',
      18 => 'field_com_fic_cssh_pj',
      19 => 'field_com_fic_cssh_po',
      20 => 'field_com_fic_cssh_pa',
      21 => 'field_com_fic_cssh_pk',
      22 => 'field_com_fic_cssh_pp',
      23 => 'field_com_fic_cssh_pi',
      24 => 'field_com_fic_cssh_pbb',
      25 => 'field_com_fic_cssh_pbc',
      26 => 'field_com_fic_cssh_pac',
      27 => 'field_com_fic_cssh_pbd',
      28 => 'field_com_fic_cssh_pca',
      29 => 'field_com_fic_cssh_pba',
      30 => 'field_com_fic_cssh_paa',
      31 => 'field_com_fic_cssh_pad',
      32 => 'field_com_fic_cssh_pab',
      33 => 'field_com_fic_cssh_pcb',
      34 => 'field_com_fic_cssh_pcc',
      35 => 'field_com_fic_cssh_pcd',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'D4. Saneamiento e higiene',
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
    'label' => 'B5. Higiene en viviendas',
    'weight' => '33',
    'children' => array(
      0 => 'field_com_hig_num_vivtodos',
      1 => 'field_com_hig_num_vivagua',
      2 => 'field_com_hig_num_vivbasica',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B5. Higiene en viviendas',
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
    'label' => 'E1. Intervenciones previstas o en proceso',
    'weight' => '43',
    'children' => array(
      0 => 'field_com_fc_systypunimprove',
      1 => 'field_com_fc_impsystem',
      2 => 'field_com_fc_systypimprove',
      3 => 'field_com_fc_newwatsystem',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-interv-prev field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'E. Intervenciones',
    'weight' => '6',
    'children' => array(
      0 => 'group_com_interv_prev',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'E. Intervenciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-interv field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
    'label' => 'B4. Saneamiento. Uso de la infraestructura NO MEJORADA',
    'weight' => '32',
    'children' => array(
      0 => 'field_com_no_uso_vivnumtodos',
      1 => 'field_com_no_uso_vivnumuso',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B4. Saneamiento. Uso de la infraestructura NO MEJORADA',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-no-uso field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'F1. Observaciones y comentarios',
    'weight' => '43',
    'children' => array(
      0 => 'field_com_obs_obscomre',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-obs-obscom field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'F. Observaciones',
    'weight' => '7',
    'children' => array(
      0 => 'group_com_obs_obscom',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'F. Observaciones',
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
    'label' => 'B1. Proceso empleado para rellenar el formulario',
    'weight' => '28',
    'children' => array(
      0 => 'field_com_lev_general',
      1 => 'field_com_num_viv_muestra',
      2 => 'field_com_lev_muestral',
      3 => 'field_com_lev_utilform',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-proc-empleado field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'B6. Recolección y tratamiento de basuras',
    'weight' => '34',
    'children' => array(
      0 => 'field_com_recotrata_disp',
      1 => 'field_com_recotrata_prac',
      2 => 'field_com_recontrata_numvivc',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B6. Recolección y tratamiento de basuras',
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
    'label' => 'B. Saneamiento e higiene',
    'weight' => '3',
    'children' => array(
      0 => 'group_com_exist_infestr',
      1 => 'group_com_higiene',
      2 => 'group_com_recotrata',
      3 => 'group_com_uso_inf',
      4 => 'group_com_no_uso',
      5 => 'group_com_proc_empleado',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'B. Saneamiento e higiene',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-saneamiento field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
    'label' => 'A7. Energía y Servicios de comunicación',
    'weight' => '9',
    'children' => array(
      0 => 'field_com_srv_existe',
      1 => 'field_com_srv_telm_existe',
      2 => 'field_com_srv_telf_existe',
      3 => 'field_com_srv_caracteristicas',
      4 => 'field_com_srv_inte_existe',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-srv field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_com_srv|entityform|comunidad|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_uso_compartido|entityform|comunidad|form';
  $field_group->group_name = 'group_com_uso_compartido';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B4. Saneamiento mejorado. Uso COMPARTIDO de la infraestructura',
    'weight' => '31',
    'children' => array(),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-uso-compartido field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_com_uso_compartido|entityform|comunidad|form'] = $field_group;

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
    'label' => 'B3. Saneamiento. Uso de la infraestructura MEJORADA de tipo 1 y tipo 2',
    'weight' => '30',
    'children' => array(
      0 => 'field_com_num_viv_usotodos',
      1 => 'field_com_num_viv_usohab',
      2 => 'field_com_num_viv_usoinfa',
      3 => 'field_com_num_viv_usoinfb',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'B3. Saneamiento. Uso de la infraestructura MEJORADA de tipo 1 y tipo 2',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-com-uso-inf field-group-fieldset',
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
    'label' => 'A6. Viviendas sin sistema',
    'weight' => '8',
    'children' => array(
      0 => 'field_com_viv_sin_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-com-viviendas-sin-sistema field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'D. Ficha de centro de salud',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_fic_cs_ficha',
      1 => 'group_com_cs',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'D. Ficha de centro de salud',
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
    'label' => 'C. Lineas de conduccion',
    'weight' => '2',
    'children' => array(
      0 => 'group_c1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'C. Lineas de conduccion',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-c field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
    'label' => 'D1. Infraestructura de tratamiento',
    'weight' => '3',
    'children' => array(
      0 => 'field_d1_1',
      1 => 'field_tipo_de_tratamiento',
      2 => 'field_d1_4',
      3 => 'field_d1_3',
      4 => 'field_d1_5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-d1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'D2. Estado físico de la infraestructura de tratamiento de agua',
    'weight' => '6',
    'children' => array(
      0 => 'field_edo_fisico_linea_tto',
      1 => 'field_d2_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-d2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'D. Infraestructura de tramiento',
    'weight' => '3',
    'children' => array(
      0 => 'field_d_infraestructura',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'D. Infraestructura de tramiento',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-d field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-e1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-e1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'E1. Infraestructura de almacenamiento',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-e1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'E2. Estado físico de la infraestructura de almacenamiento de agua',
    'weight' => '6',
    'children' => array(
      0 => 'field_e2_2',
      1 => 'field_edo_fisico_infr_almac',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-e2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'E. Infraestructura de almacenamiento',
    'weight' => '4',
    'children' => array(
      0 => 'group_e1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'E. Infraestructura de almacenamiento',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-f1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'F1. Distribución de agua',
    'weight' => '0',
    'children' => array(
      0 => 'field_f1_1',
      1 => 'field_f1_5',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F1. Distribución de agua',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-f1 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'F3. Distancia promedio de las casas a puntos de toma de agua públicos',
    'weight' => '2',
    'children' => array(
      0 => 'field_f2_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F3. Distancia promedio de las casas a puntos de toma de agua públicos',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-f2 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'F4. Estado físico de la infraestructura de distribución de agua',
    'weight' => '3',
    'children' => array(
      0 => 'field_f3_2',
      1 => 'field_edo_fisico_red_dist',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'F4. Estado físico de la infraestructura de distribución de agua',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-f3 field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => '	 C5. Pago, facturación e ingresos',
    'weight' => '7',
    'children' => array(
      0 => 'field_usuarios_deberian_pagan',
      1 => 'field_ingresos_reales',
      2 => 'field_usuarios_al_dia',
      3 => 'field_facturacion_promedio',
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
  $field_group->identifier = 'group_financiamiento_inicial|entityform|sistema|form';
  $field_group->group_name = 'group_financiamiento_inicial';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A2. Fuentes de financiamiento de la construcción inicial ',
    'weight' => '26',
    'children' => array(
      0 => 'field_a_fuentes_de_financiamient',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A2. Fuentes de financiamiento de la construcción inicial ',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-financiamiento-inicial field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => '	 F2. Fondos disponibles',
    'weight' => '99',
    'children' => array(
      0 => 'field__cuenta_con_fondos_disponi',
      1 => 'field_monto_total_fondos',
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
  $field_group->identifier = 'group_fuente_captacion|entityform|sistema|form';
  $field_group->group_name = 'group_fuente_captacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Fuente y captación de agua',
    'weight' => '1',
    'children' => array(
      0 => 'group_b1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'B. Fuente y captación de agua',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-fuente-captacion field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
    'label' => 'B1. Fuente y/o captación',
    'weight' => '0',
    'children' => array(
      0 => 'field_nombre_de_la_fuente',
      1 => 'field_b1_altitud',
      2 => 'field_codigo_de_la_fuente',
      3 => 'field_b1_7',
      4 => 'field_tipo_de_fuente',
      5 => 'field_es_la_fuente_principal',
      6 => 'field_fecha_toma_cdal_epoca_seca',
      7 => 'field_caudal_de_la_fuente',
      8 => 'field_caudal_fuente_epoca_seca',
      9 => 'field_fecha_toma_caudal_ep_seca',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-fuente-y-ocaptacion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'F. DISTRIBUCIÓN DE AGUA',
    'weight' => '5',
    'children' => array(
      0 => 'group_f1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'F. DISTRIBUCIÓN DE AGUA',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-f field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
      ),
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
    'label' => 'G1. Caudal actual del sistema',
    'weight' => '68',
    'children' => array(
      0 => 'field_caudal_actual_del_sistema',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'G2. Desinfección con cloro',
    'weight' => '69',
    'children' => array(
      0 => 'field_g2_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'G3. Filtración domiciliaria',
    'weight' => '70',
    'children' => array(
      0 => 'field_g3_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g3 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'G4. Calidad del agua',
    'weight' => '71',
    'children' => array(
      0 => 'field_g4_4',
      1 => 'field_g4_3',
      2 => 'field_fecha_analisiscalidad_agua',
      3 => 'field_cantidad_de_cloro_residual',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-g4 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
      0 => 'field_gasto_teorico_ambientales',
      1 => 'field_gasto_real_operacion',
      2 => 'field_gasto_teorico_mantenimient',
      3 => 'field_gasto_teorico_operacion',
      4 => 'field_gasto_teorico_admin',
      5 => 'field_sumatoria_gastos_reales',
      6 => 'field_gasto_real_mantenimiento',
      7 => 'field_gasto_promedio_admin',
      8 => 'field_sumatoria_gastos_teoricos',
      9 => 'field_gasto_real_ambientales',
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
    'label' => 'G. Cantidad y calidad de agua potable',
    'weight' => '6',
    'children' => array(
      0 => 'group_g2',
      1 => 'group_g3',
      2 => 'group_g1',
      3 => 'group_g4',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'G. Cantidad y calidad de agua potable',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-g field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-h1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'H. Observaciones',
    'weight' => '7',
    'children' => array(
      0 => 'group_h1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'H. Observaciones',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-h field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
      0 => 'field_altitud',
      1 => 'field_imagenps',
      2 => 'field_codigo_de_prestador',
      3 => 'field_entity_name',
      4 => 'field_latitud',
      5 => 'field_entidad_local',
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
      0 => 'group_ingresos_egresos',
      1 => 'group_fondos_disponibles',
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
      0 => 'group_tasa_extension',
      1 => 'group_inf_ingresos_extras',
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
    'weight' => '127',
    'children' => array(
      0 => 'field_ingresos_extra',
      1 => 'field_monto_total_finalizado',
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
    'weight' => '6',
    'children' => array(
      0 => 'field_inf_medicion_agua',
      1 => 'field_agua_producida',
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
      1 => 'group_junta_directiva',
      2 => 'group_rinde_cuentas',
      3 => 'group_cuenta_banco',
      4 => 'group_legal',
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
      0 => 'group_tarifa',
      1 => 'group_mantenimiento_sistema',
      2 => 'group_inf_medicion_agua',
      3 => 'group_mecanismo_pago',
      4 => 'group_tipo_tarifa',
      5 => 'group_fact_pago',
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
  $field_group->identifier = 'group_info_general_comunidad|entityform|comunidad|form';
  $field_group->group_name = 'group_info_general_comunidad';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. Información general',
    'weight' => '2',
    'children' => array(
      0 => 'field_user_reference',
      1 => 'field_fecha_encuesta',
      2 => 'group_com_dist_viviendas',
      3 => 'group_info_general',
      4 => 'group_com_viviendas_sin_sistema',
      5 => 'group_com_cantidad_viv',
      6 => 'group_co_poblacion',
      7 => 'group_com_srv',
      8 => 'group_otras_divisiones',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'A. Información general',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-info-general-comunidad field-group-html-element',
        'element' => 'h1',
        'show_label' => '1',
        'label_element' => 'h1',
        'attributes' => '',
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
    'weight' => '2',
    'children' => array(
      0 => 'field_entity_name',
      1 => 'field_com_georef',
      2 => 'field_com_codigo_comunidad',
      3 => 'field_imagenc',
      4 => 'field_com_altitud',
      5 => 'field_entidad_local',
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
    'label' => 'A. Información general y esquema del sistema',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_reference',
      1 => 'field_fecha_de_aplicacion',
      2 => 'group_pat_a2',
      3 => 'group_pat_a1',
      4 => 'group_pat_a3',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'A. Información general y esquema del sistema',
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
    'label' => 'A. Información General',
    'weight' => '0',
    'children' => array(
      0 => 'field_fecha_aplicacion',
      1 => 'field_user_reference',
      2 => 'group_clase_prestador',
      3 => 'group_inf_basica',
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
  $field_group->identifier = 'group_info_general|entityform|sistema|form';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A1',
    'weight' => '25',
    'children' => array(
      0 => 'field_anno_construccion',
      1 => 'field_alto',
      2 => 'field_entity_name',
      3 => 'field_latitud',
      4 => 'field_imagen',
      5 => 'field_codigo_de_sistema',
      6 => 'field_entidad_local',
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
      'formatter' => 'collapsible',
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
    'label' => 'F1. Ingresos y egresos al día',
    'weight' => '97',
    'children' => array(
      0 => 'field_libro_ingresos_egresos',
      1 => 'field_monto_total_de_egresos',
      2 => 'field_monto_total_de_ingresos',
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
      0 => 'group_intervention_b2',
      1 => 'group_intervention_b1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
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
      0 => 'field_estado_legal',
      1 => 'field_fecha_creacion',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'H. Operación y mantenimiento',
    'weight' => '7',
    'children' => array(
      0 => 'group_proteccion',
      1 => 'group_acciones_correctivas',
      2 => 'group_higiene_comunitaria',
      3 => 'group_apoyo_tecnico',
      4 => 'group_acciones_preventivas',
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
    'weight' => '8',
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
    'weight' => '5',
    'children' => array(
      0 => 'field_otros_motivos',
      1 => 'field_mecanismo_pago_tarifa',
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
      0 => 'group_e1',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
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
    'label' => ' I. Observaciones',
    'weight' => '8',
    'children' => array(
      0 => 'group_comentarios',
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
      0 => 'group_atencion',
      1 => 'group_recursos',
      2 => 'group_reglamento',
      3 => 'group_personal',
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
  $field_group->identifier = 'group_otras_divisiones|entityform|comunidad|form';
  $field_group->group_name = 'group_otras_divisiones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A2. Otras divisiones',
    'weight' => '3',
    'children' => array(
      0 => 'field_cuenca_hidrografica',
      1 => 'field_area_planificacion',
      2 => 'field_otras_divisiones',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A2. Otras divisiones',
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
  $field_group->identifier = 'group_pat_a1|entityform|prestador_de_asistencia_t_cnica|form';
  $field_group->group_name = 'group_pat_a1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'prestador_de_asistencia_t_cnica';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_info_general';
  $field_group->data = array(
    'label' => 'A1',
    'weight' => '16',
    'children' => array(
      0 => 'field_entity_name',
      1 => 'field_imagenpat',
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
    'weight' => '17',
    'children' => array(
      0 => 'field_tipo_de_pat2',
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
    'weight' => '18',
    'children' => array(
      0 => 'field_entidad_local',
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
      0 => 'field_dispone_fondos_viaticos',
      1 => 'field_cantidad_equipos_transport',
      2 => 'field_dispone_fondos_combistible',
      3 => 'field_cantidad_medicion_agua',
      4 => 'field_dispone_material_didactico',
      5 => 'field_estado_medicion_agua',
      6 => 'field_estado_equipos_informatico',
      7 => 'field_cantidad_equipos_inform',
      8 => 'field_dispone_servicios_internet',
      9 => 'field_estado_equipos_transporte',
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
      0 => 'group_recursos_financ_hum_log_c4',
      1 => 'group_recursos_financ_hum_log_c3',
      2 => 'group_recursos_financ_hum_log_c1',
      3 => 'group_recursos_financ_hum_log_c2',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'C. Recursos financieros, humanos y logísticos',
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
    'label' => 'F2. Red de distribución',
    'weight' => '1',
    'children' => array(
      0 => 'field_f1_3',
      1 => 'field_f1_2',
      2 => 'field_f1_4',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-red-distribucion field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'A3. Rehabilitaciones y/o ampliaciones del sistema',
    'weight' => '27',
    'children' => array(
      0 => 'field_rehabilitaciones_y_o_ampli',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A3. Rehabilitaciones y/o ampliaciones del sistema',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-rehabilitaciones-sistema field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
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
    'label' => 'B3. Técnicos y representantes de Junta Directiva',
    'weight' => '29',
    'children' => array(
      0 => 'field_tecnicos',
      1 => 'field_representantes',
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
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'D. Tipo de apoyo',
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
    'label' => 'C2. Tipo y cuantía de la tarifa',
    'weight' => '4',
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
    'label' => 'A4. Tipo de sistema de abastecimiento de agua',
    'weight' => '28',
    'children' => array(
      0 => 'field_tipo_de_sistema_de_absto',
      1 => 'field_a4_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-tpo-sist-abastecimeinto field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tpo_sist_abastecimeinto|entityform|sistema|form'] = $field_group;

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
  t('	 F2. Fondos disponibles');
  t('	 G. Operación y mantenimiento');
  t('	 H4. Acciones correctivas');
  t('	 H5. Acciones preventivas');
  t('	B4.');
  t(' I. Observaciones');
  t('A. Información General');
  t('A. Información General y esquema del sistema');
  t('A. Información general');
  t('A. Información general y esquema del sistema');
  t('A1');
  t('A1.');
  t('A2');
  t('A2. Clase prestador');
  t('A2. Fuentes de financiamiento de la construcción inicial ');
  t('A2. Otras divisiones');
  t('A3');
  t('A3.');
  t('A3. Rehabilitaciones y/o ampliaciones del sistema');
  t('A4.');
  t('A4. Tipo de sistema de abastecimiento de agua');
  t('A5. Distribución de viviendas con sistema');
  t('A5. ¿Hay suficiente agua en las fuentes en función de la demanda?');
  t('A6. Croquis del sistema de abastecimiento de agua');
  t('A6. Viviendas sin sistema');
  t('A7. Energía y Servicios de comunicación');
  t('B. Fuente y captación de agua');
  t('B. Información sobre asociaciones u organizaciones comunitarias');
  t('B. Intervención');
  t('B. Saneamiento e higiene');
  t('B1');
  t('B1. Fuente y/o captación');
  t('B1. Proceso empleado para rellenar el formulario');
  t('B2');
  t('B2. Estado de zona cercana a la fuente o toma de agua del sistema');
  t('B2. Saneamiento. Existencia de infraestructura para las viviendas');
  t('B3.');
  t('B3. Saneamiento. Uso de la infraestructura MEJORADA de tipo 1 y tipo 2');
  t('B3. Técnicos y representantes de Junta Directiva');
  t('B4. Estado físico de la infraestructura de captación de agua');
  t('B4. Saneamiento mejorado. Uso COMPARTIDO de la infraestructura');
  t('B4. Saneamiento. Uso de la infraestructura NO MEJORADA');
  t('B5. Higiene en viviendas');
  t('B6. Recolección y tratamiento de basuras');
  t('C. Ficha de centro educativo');
  t('C. Información Económica. Ingresos Regulares');
  t('C. Lineas de conduccion');
  t('C. Recursos financieros, humanos y logísticos');
  t('C1');
  t('C1.');
  t('C1. Centros educativos');
  t('C1. Línea de conducción');
  t('C2');
  t('C2. Características generales');
  t('C2. Estado físico de la infraestructura de conducción de agua');
  t('C2. Tipo y cuantía de la tarifa');
  t('C3');
  t('C3. Sistema de agua');
  t('C3. ¿La comunidad conoce el mecanismo de pago de la tarifa y se aplica de forma regular?');
  t('C4. Recusos logísticos');
  t('C4. Saneamiento e higiene');
  t('C4. ¿Se tiene información sobre la medición del agua?');
  t('D. Ficha de centro de salud');
  t('D. Información económica. Ingresos extraordinarios');
  t('D. Infraestructura de tramiento');
  t('D. Tipo de apoyo');
  t('D1. Cantidad de comunidades a las que se prestan los siguientes servicios');
  t('D1. Centros de salud');
  t('D1. Infraestructura de tratamiento');
  t('D2. Aportaciones extraordinarias no directamente vinculadas al servicio de agua');
  t('D2. Características generales');
  t('D2. Estado físico de la infraestructura de tratamiento de agua');
  t('D3.');
  t('D3. Sistema de agua');
  t('D4. Saneamiento e higiene');
  t('E. Infraestructura de almacenamiento');
  t('E. Intervenciones');
  t('E. Observaciones');
  t('E1');
  t('E1.');
  t('E1. Infraestructura de almacenamiento');
  t('E1. Intervenciones previstas o en proceso');
  t('E2. Estado físico de la infraestructura de almacenamiento de agua');
  t('F. DISTRIBUCIÓN DE AGUA');
  t('F. Observaciones');
  t('F1');
  t('F1. Distribución de agua');
  t('F1. Ingresos y egresos al día');
  t('F1. Observaciones y comentarios');
  t('F2. Red de distribución');
  t('F3. Balance contable');
  t('F3. Distancia promedio de las casas a puntos de toma de agua públicos');
  t('F4. Estado físico de la infraestructura de distribución de agua');
  t('G. Cantidad y calidad de agua potable');
  t('G1.');
  t('G1. Caudal actual del sistema');
  t('G2.');
  t('G2. Desinfección con cloro');
  t('G3.');
  t('G3. Filtración domiciliaria');
  t('G4.');
  t('G4. Calidad del agua');
  t('H. Observaciones');
  t('H. Operación y mantenimiento');
  t('H1.');
  t('H2.');
  t('H3.');
  t('I1.');

  return $field_groups;
}
