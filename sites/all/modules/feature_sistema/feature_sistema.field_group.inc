<?php
/**
 * @file
 * feature_sistema.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_sistema_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a5|entityform|sistema|form';
  $field_group->group_name = 'group_a5';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A5. ¿Hay suficiente agua en las fuentes en función de la demanda?',
    'weight' => '4',
    'children' => array(
      0 => 'field_agua_en_verano',
      1 => 'field_agua_en_invierno',
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
      0 => 'field_encuestador',
      1 => 'field_fecha_de_aplicaci_n',
      2 => 'group_info_general',
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
      1 => 'field_proteccion_de_la_fuente',
      2 => 'field_existencia_deareas_verdes',
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
      1 => 'field_macro_medicion',
      2 => 'field_funciona_el_macro',
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
      1 => 'field_estado_fisico_infraestruct',
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
      0 => 'field_c1_2',
      1 => 'field_c1_4',
      2 => 'field_c1_3',
      3 => 'field_c1_1',
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
    'label' => 'C2. Estado físico de la línea de conducción de agua',
    'weight' => '6',
    'children' => array(
      0 => 'field_c2_2',
      1 => 'field_c2_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-c2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_c2|field_collection_item|field_lineas_de_conduccion|form'] = $field_group;

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
    'label' => 'C.Lineas de conduccion',
    'weight' => '8',
    'children' => array(
      0 => 'field_lineas_de_conduccion',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'C.Lineas de conduccion',
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
      0 => 'field_d1_2',
      1 => 'field_d1_1',
      2 => 'field_d1_3',
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
      0 => 'field_d2_1',
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
    'label' => 'D.Infraestructura de tramiento',
    'weight' => '9',
    'children' => array(
      0 => 'field_d_infraestructura',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'D.Infraestructura de tramiento',
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
      0 => 'field_e2_1',
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
    'weight' => '10',
    'children' => array(
      0 => 'field_e_infraestructura_almac',
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
  $field_group->identifier = 'group_f1|field_collection_item|field_f_red_de_distribucion|form';
  $field_group->group_name = 'group_f1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_f_red_de_distribucion';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F1. Red de distribución',
    'weight' => '0',
    'children' => array(
      0 => 'field_f1_1',
      1 => 'field_f1_2',
      2 => 'field_f1_3',
      3 => 'field_f1_4',
      4 => 'field_f1_5',
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
    'label' => 'F2. Distancia promedio de las casas a puntos de toma de agua públicos',
    'weight' => '1',
    'children' => array(
      0 => 'field_f2_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-f2 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
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
    'label' => 'F3. Estado físico de la red de distribución de agua',
    'weight' => '2',
    'children' => array(
      0 => 'field_f3_1',
      1 => 'field_f3_2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-f3 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_f3|field_collection_item|field_f_red_de_distribucion|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_financiamiento_inicial|entityform|sistema|form';
  $field_group->group_name = 'group_financiamiento_inicial';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A2. Fuentes de financiamiento de la construcción inicial ',
    'weight' => '1',
    'children' => array(
      0 => 'field_monto_total_financiamiento',
      1 => 'field_a_fuentes_de_financiamient',
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
  $field_group->identifier = 'group_fuente_captacion|entityform|sistema|form';
  $field_group->group_name = 'group_fuente_captacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Fuente y captación de agua',
    'weight' => '6',
    'children' => array(
      0 => 'field_fuente_y_o_captacion',
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
      0 => 'field_codigo_de_la_fuente',
      1 => 'field_es_la_fuente_principal',
      2 => 'field_tipo_de_fuente',
      3 => 'field_caudal_de_la_fuente',
      4 => 'field_caudal_fuente_epoca_seca',
      5 => 'field_nombre_de_la_fuente',
      6 => 'field_fecha_toma_cdal_epoca_seca',
      7 => 'field_fecha_toma_caudal_ep_seca',
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
    'label' => 'F. Red de distribución',
    'weight' => '11',
    'children' => array(
      0 => 'field_f_red_de_distribucion',
    ),
    'format_type' => 'html-element',
    'format_settings' => array(
      'label' => 'F. Red de distribución',
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
    'weight' => '37',
    'children' => array(
      0 => 'field_g1_1',
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
    'weight' => '38',
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
    'weight' => '39',
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
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'G4. Calidad del agua',
    'weight' => '13',
    'children' => array(
      0 => 'field_g4_3',
      1 => 'field_g4_2',
      2 => 'field_g4_4',
      3 => 'field_g4_1',
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
  $field_group->identifier = 'group_g|entityform|sistema|form';
  $field_group->group_name = 'group_g';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'G. Cantidad y calidad de agua potable',
    'weight' => '12',
    'children' => array(
      0 => 'group_g1',
      1 => 'group_g3',
      2 => 'group_g2',
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
    'weight' => '46',
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
  $field_group->identifier = 'group_h|entityform|sistema|form';
  $field_group->group_name = 'group_h';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'H. Observaciones',
    'weight' => '14',
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
  $field_group->identifier = 'group_info_general|entityform|sistema|form';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A1. Información General',
    'weight' => '24',
    'children' => array(
      0 => 'field_anno_construccion',
      1 => 'field_nombre_del_sistema',
      2 => 'field_latitud',
      3 => 'field_prest_serv',
      4 => 'field_entidad_local_mayor',
      5 => 'field_entidad_local_menor',
      6 => 'field_entidad_regional_',
      7 => 'field_c_digo_sistema',
      8 => 'field_otras_divisiones_',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'A1. Información General',
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
  $field_group->identifier = 'group_rehabilitaciones_sistema|entityform|sistema|form';
  $field_group->group_name = 'group_rehabilitaciones_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A3. Rehabilitaciones y/o ampliaciones del sistema',
    'weight' => '2',
    'children' => array(
      0 => 'field_rehabilitaciones_y_o_ampli',
      1 => 'field_total_financiamiento',
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
  $field_group->identifier = 'group_tpo_sist_abastecimeinto|entityform|sistema|form';
  $field_group->group_name = 'group_tpo_sist_abastecimeinto';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A4. Tipo de sistema de abastecimiento de agua',
    'weight' => '3',
    'children' => array(
      0 => 'field_a4_2',
      1 => 'field_tipo_de_sistema_de_abastec',
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
  t('A. Información General y esquema del sistema');
  t('A1. Información General');
  t('A2. Fuentes de financiamiento de la construcción inicial ');
  t('A3. Rehabilitaciones y/o ampliaciones del sistema');
  t('A4. Tipo de sistema de abastecimiento de agua');
  t('A5. ¿Hay suficiente agua en las fuentes en función de la demanda?');
  t('B. Fuente y captación de agua');
  t('B1. Fuente y/o captación');
  t('B2. Estado de zona cercana a la fuente o toma de agua del sistema');
  t('B3.');
  t('B4. Estado físico de la infraestructura de captación de agua');
  t('C.Lineas de conduccion');
  t('C1. Línea de conducción');
  t('C2. Estado físico de la línea de conducción de agua');
  t('D.Infraestructura de tramiento');
  t('D1. Infraestructura de tratamiento');
  t('D2. Estado físico de la infraestructura de tratamiento de agua');
  t('E. Infraestructura de almacenamiento');
  t('E2. Estado físico de la infraestructura de almacenamiento de agua');
  t('F. Red de distribución');
  t('F1. Red de distribución');
  t('F2. Distancia promedio de las casas a puntos de toma de agua públicos');
  t('F3. Estado físico de la red de distribución de agua');
  t('G. Cantidad y calidad de agua potable');
  t('G1. Caudal actual del sistema');
  t('G2. Desinfección con cloro');
  t('G3. Filtración domiciliaria');
  t('G4. Calidad del agua');
  t('H. Observaciones');
  t('H1.');

  return $field_groups;
}
