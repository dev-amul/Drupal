<?php
/**
 * @file
 * feature_siasar_entityform_sistema.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_siasar_entityform_sistema_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a5|entityform|sistema|default';
  $field_group->group_name = 'group_a5';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A6. Is there sufficient water in the source(s) to meet demand?',
    'weight' => '9',
    'children' => array(
      0 => 'field_agua_en_verano',
      1 => 'field_agua_en_invierno',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_a5|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a6_croquis_del_sistema|entityform|sistema|default';
  $field_group->group_name = 'group_a6_croquis_del_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A7. Water supply system sketch',
    'weight' => '10',
    'children' => array(
      0 => 'field_a6_croquis',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_a6_croquis_del_sistema|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_a_info_general_sistema|entityform|sistema|default';
  $field_group->group_name = 'group_a_info_general_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. General Information and System Schema',
    'weight' => '0',
    'children' => array(
      0 => 'field_user_reference',
      1 => 'field_pais',
      2 => 'field_fecha_de_aplicaci_n',
      3 => 'group_a5',
      4 => 'group_a6_croquis_del_sistema',
      5 => 'group_financiamiento_inicial',
      6 => 'group_info_general',
      7 => 'group_otras_divisiones',
      8 => 'group_rehabilitaciones_sistema',
      9 => 'group_tpo_sist_abastecimeinto',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. General Information and System Schema',
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
  $field_groups['group_a_info_general_sistema|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_b1|entityform|sistema|default';
  $field_group->group_name = 'group_b1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_fuente_captacion';
  $field_group->data = array(
    'label' => 'B1',
    'weight' => '2',
    'children' => array(
      0 => 'field_fuente_y_o_captacion',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_b1|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c1|entityform|sistema|default';
  $field_group->group_name = 'group_c1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_c';
  $field_group->data = array(
    'label' => 'C1',
    'weight' => '8',
    'children' => array(
      0 => 'field_lineas_de_conduccion',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_c1|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_c|entityform|sistema|default';
  $field_group->group_name = 'group_c';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. Pipeline',
    'weight' => '2',
    'children' => array(
      0 => 'group_c1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. Pipeline',
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
  $field_groups['group_c|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d|entityform|sistema|default';
  $field_group->group_name = 'group_d';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. Water treatment infrastructure',
    'weight' => '3',
    'children' => array(
      0 => 'field_d_infraestructura',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D. Water treatment infrastructure',
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
  $field_groups['group_d|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e1|entityform|sistema|default';
  $field_group->group_name = 'group_e1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_e';
  $field_group->data = array(
    'label' => 'E1',
    'weight' => '5',
    'children' => array(
      0 => 'field_e_infraestructura_almac',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_e1|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_e|entityform|sistema|default';
  $field_group->group_name = 'group_e';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E. Water storage infrastructure',
    'weight' => '4',
    'children' => array(
      0 => 'group_e1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'E. Water storage infrastructure',
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
  $field_groups['group_e|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f1|entityform|sistema|default';
  $field_group->group_name = 'group_f1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_f';
  $field_group->data = array(
    'label' => 'F1',
    'weight' => '28',
    'children' => array(
      0 => 'field_f_red_de_distribucion',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_f1|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_financiamiento_inicial|entityform|sistema|default';
  $field_group->group_name = 'group_financiamiento_inicial';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A3. Initial construction financing sources ',
    'weight' => '6',
    'children' => array(
      0 => 'field_a_fuentes_de_financiamient',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_financiamiento_inicial|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fuente_captacion|entityform|sistema|default';
  $field_group->group_name = 'group_fuente_captacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Water source and catchment',
    'weight' => '1',
    'children' => array(
      0 => 'group_b1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. Water source and catchment',
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
  $field_groups['group_fuente_captacion|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_f|entityform|sistema|default';
  $field_group->group_name = 'group_f';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F. Water distribution',
    'weight' => '5',
    'children' => array(
      0 => 'group_f1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'F. Water distribution',
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
  $field_groups['group_f|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g1|entityform|sistema|default';
  $field_group->group_name = 'group_g1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_g';
  $field_group->data = array(
    'label' => 'G1. Present system flow',
    'weight' => '7',
    'children' => array(
      0 => 'field_caudal_actual_del_sistema',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g1|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g2|entityform|sistema|default';
  $field_group->group_name = 'group_g2';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_g';
  $field_group->data = array(
    'label' => 'G2. Disinfection using chlorine',
    'weight' => '8',
    'children' => array(
      0 => 'field_g2_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g2|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g3|entityform|sistema|default';
  $field_group->group_name = 'group_g3';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_g';
  $field_group->data = array(
    'label' => 'G3. Household filtration',
    'weight' => '9',
    'children' => array(
      0 => 'field_g3_1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g3|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g4|entityform|sistema|default';
  $field_group->group_name = 'group_g4';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_g';
  $field_group->data = array(
    'label' => 'G4. Water quality',
    'weight' => '10',
    'children' => array(
      0 => 'field_g4_4',
      1 => 'field_g4_3',
      2 => 'field_cantidad_de_cloro_residual',
      3 => 'field_fecha_analisiscalidad_agua',
      4 => 'field_fecha_analisis_fq',
      5 => 'field_fecha_analisis_coliformes',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_g4|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_g|entityform|sistema|default';
  $field_group->group_name = 'group_g';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'G. Drinking water quantity and quality',
    'weight' => '6',
    'children' => array(
      0 => 'group_g1',
      1 => 'group_g2',
      2 => 'group_g3',
      3 => 'group_g4',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'G. Drinking water quantity and quality',
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
  $field_groups['group_g|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_h1|entityform|sistema|default';
  $field_group->group_name = 'group_h1';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_h';
  $field_group->data = array(
    'label' => 'H1.',
    'weight' => '9',
    'children' => array(
      0 => 'field_h1_1',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-h1 field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_h1|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_h|entityform|sistema|default';
  $field_group->group_name = 'group_h';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'H. Comments',
    'weight' => '8',
    'children' => array(
      0 => 'group_h1',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'H. Comments',
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
  $field_groups['group_h|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general|entityform|sistema|default';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A1',
    'weight' => '4',
    'children' => array(
      0 => 'field_alto',
      1 => 'field_entity_name',
      2 => 'field_imagen',
      3 => 'field_entidad_local',
      4 => 'field_codigo_de_sistema',
      5 => 'field_anno_construccion',
      6 => 'field_latitud',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_info_general|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_otras_divisiones|entityform|sistema|default';
  $field_group->group_name = 'group_otras_divisiones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A2. Other divisions',
    'weight' => '5',
    'children' => array(
      0 => 'field_area_planificacion',
      1 => 'field_cuenca_hidrografica',
      2 => 'field_otras_divisiones',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_otras_divisiones|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rehabilitaciones_sistema|entityform|sistema|default';
  $field_group->group_name = 'group_rehabilitaciones_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A4. System refurbishments and/or expansions',
    'weight' => '7',
    'children' => array(
      0 => 'field_rehabilitaciones_y_o_ampli',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_rehabilitaciones_sistema|entityform|sistema|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_tpo_sist_abastecimeinto|entityform|sistema|default';
  $field_group->group_name = 'group_tpo_sist_abastecimeinto';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'sistema';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_a_info_general_sistema';
  $field_group->data = array(
    'label' => 'A5. Type of water supply system',
    'weight' => '8',
    'children' => array(
      0 => 'field_a4_2',
      1 => 'field_tipo_de_sistema_de_absto',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'classes' => 'field-group',
        'id' => '',
      ),
    ),
  );
  $field_groups['group_tpo_sist_abastecimeinto|entityform|sistema|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A. General Information and System Schema');
  t('A1');
  t('A2. Other divisions');
  t('A3. Initial construction financing sources ');
  t('A4. System refurbishments and/or expansions');
  t('A5. Type of water supply system');
  t('A6. Is there sufficient water in the source(s) to meet demand?');
  t('A7. Water supply system sketch');
  t('B. Water source and catchment');
  t('B1');
  t('C. Pipeline');
  t('C1');
  t('D. Water treatment infrastructure');
  t('E. Water storage infrastructure');
  t('E1');
  t('F. Water distribution');
  t('F1');
  t('G. Drinking water quantity and quality');
  t('G1. Present system flow');
  t('G2. Disinfection using chlorine');
  t('G3. Household filtration');
  t('G4. Water quality');
  t('H. Comments');
  t('H1.');

  return $field_groups;
}
