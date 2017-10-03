<?php
/**
 * @file
 * feature_siasar_entityform_comunidad.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_siasar_entityform_comunidad_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_co_poblacion|entityform|comunidad|default';
  $field_group->group_name = 'group_co_poblacion';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A3.',
    'weight' => '78',
    'children' => array(
      0 => 'field_field_com_obs_poblacion',
      1 => 'field_etnia_en_mayoria',
      2 => 'field_com_poblacion_total',
      3 => 'field_idioma_predominante',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A3.',
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
  $field_groups['group_co_poblacion|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_cantidad_viv|entityform|comunidad|default';
  $field_group->group_name = 'group_com_cantidad_viv';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A4.',
    'weight' => '79',
    'children' => array(
      0 => 'field_com_viv_totales',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A4.',
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
  $field_groups['group_com_cantidad_viv|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_ce|entityform|comunidad|default';
  $field_group->group_name = 'group_com_ce';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_fic_ce';
  $field_group->data = array(
    'label' => 'C1. Schools',
    'weight' => '7',
    'children' => array(
      0 => 'field_com_ce_existe',
      1 => 'field_com_ce_nombre',
      2 => 'field_ce_location',
      3 => 'field_con_fic_ce_ficha',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C1. Schools',
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
  $field_groups['group_com_ce|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_cs|entityform|comunidad|default';
  $field_group->group_name = 'group_com_cs';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_con_fic_cs';
  $field_group->data = array(
    'label' => 'D1. Health centers',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_fic_cs_ficha',
      1 => 'field_com_cs_existe',
      2 => 'field_com_cs_nombre',
      3 => 'field_cs_location',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D1. Health centers',
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
  $field_groups['group_com_cs|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_dist_viviendas|entityform|comunidad|default';
  $field_group->group_name = 'group_com_dist_viviendas';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A5. Distribution of households with access to a water supply system',
    'weight' => '80',
    'children' => array(
      0 => 'field_com_viv_con_sistema',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A5. Household distribution by system ',
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
  $field_groups['group_com_dist_viviendas|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_exist_infestr|entityform|comunidad|default';
  $field_group->group_name = 'group_com_exist_infestr';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B2. Household sanitation facility',
    'weight' => '16',
    'children' => array(
      0 => 'field_com_num_viv_inftb',
      1 => 'field_com_num_viv_infta',
      2 => 'field_field_com_num_viv_infnt',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B2. Sanitation. Existing household infrastructure',
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
  $field_groups['group_com_exist_infestr|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_fic_ce|entityform|comunidad|default';
  $field_group->group_name = 'group_com_fic_ce';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'C. Schools',
    'weight' => '2',
    'children' => array(
      0 => 'group_com_ce',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'C. Schools',
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
  $field_groups['group_com_fic_ce|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_higiene|entityform|comunidad|default';
  $field_group->group_name = 'group_com_higiene';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B5. Household hygiene',
    'weight' => '19',
    'children' => array(
      0 => 'field_com_hig_num_vivtodos',
      1 => 'field_com_hig_num_vivagua',
      2 => 'field_com_hig_num_vivbasica',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B5. Household hygiene',
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
  $field_groups['group_com_higiene|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_interv_prev|entityform|comunidad|default';
  $field_group->group_name = 'group_com_interv_prev';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_interv';
  $field_group->data = array(
    'label' => 'E1. Interventions scheduled or in progress ',
    'weight' => '8',
    'children' => array(
      0 => 'field_com_fc_systypunimprove',
      1 => 'field_com_fc_impsystem',
      2 => 'field_com_fc_systypimprove',
      3 => 'field_com_fc_newwatsystem',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'E1. Interventions scheduled or in progress ',
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
  $field_groups['group_com_interv_prev|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_interv|entityform|comunidad|default';
  $field_group->group_name = 'group_com_interv';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'E. Interventions',
    'weight' => '4',
    'children' => array(
      0 => 'group_com_interv_prev',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'E. Interventions',
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
  $field_groups['group_com_interv|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_no_uso|entityform|comunidad|default';
  $field_group->group_name = 'group_com_no_uso';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B4. Use of unimproved sanitation',
    'weight' => '18',
    'children' => array(
      0 => 'field_com_no_uso_vivnumuso',
      1 => 'field_com_no_uso_vivnumtodos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B4. Un-improved sanitation. Use of infrastructure ',
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
  $field_groups['group_com_no_uso|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_obs_obscom|entityform|comunidad|default';
  $field_group->group_name = 'group_com_obs_obscom';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_obs';
  $field_group->data = array(
    'label' => 'F1. Comments and observations',
    'weight' => '8',
    'children' => array(
      0 => 'field_com_obs_obscomre',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'F1. Comments and observations',
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
  $field_groups['group_com_obs_obscom|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_obs|entityform|comunidad|default';
  $field_group->group_name = 'group_com_obs';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'F. Comments',
    'weight' => '5',
    'children' => array(
      0 => 'group_com_obs_obscom',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'F. Comments',
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
  $field_groups['group_com_obs|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_proc_empleado|entityform|comunidad|default';
  $field_group->group_name = 'group_com_proc_empleado';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B1. Data collection method',
    'weight' => '15',
    'children' => array(
      0 => 'field_com_lev_utilform',
      1 => 'field_com_lev_general',
      2 => 'field_com_lev_muestral',
      3 => 'field_com_num_viv_muestra',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B1. Process used to complete this form',
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
  $field_groups['group_com_proc_empleado|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_recotrata|entityform|comunidad|default';
  $field_group->group_name = 'group_com_recotrata';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B6. Solid waste collection and disposal',
    'weight' => '20',
    'children' => array(
      0 => 'field_com_recotrata_prac',
      1 => 'field_com_recontrata_numvivc',
      2 => 'field_com_recotrata_disp',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B6. Solid waste collection and disposal',
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
  $field_groups['group_com_recotrata|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_saneamiento|entityform|comunidad|default';
  $field_group->group_name = 'group_com_saneamiento';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'B. Sanitation and hygiene',
    'weight' => '1',
    'children' => array(
      0 => 'group_com_exist_infestr',
      1 => 'group_com_no_uso',
      2 => 'group_com_proc_empleado',
      3 => 'group_com_recotrata',
      4 => 'group_com_higiene',
      5 => 'group_com_uso_inf',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B. Sanitation and hygiene',
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
  $field_groups['group_com_saneamiento|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_srv|entityform|comunidad|default';
  $field_group->group_name = 'group_com_srv';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A7. Public services',
    'weight' => '82',
    'children' => array(
      0 => 'field_com_srv_existe',
      1 => 'field_com_srv_inte_existe',
      2 => 'field_com_srv_caracteristicas',
      3 => 'field_com_srv_telf_existe',
      4 => 'field_com_srv_telm_existe',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A7. Electricity and communications',
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
  $field_groups['group_com_srv|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_uso_inf|entityform|comunidad|default';
  $field_group->group_name = 'group_com_uso_inf';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_com_saneamiento';
  $field_group->data = array(
    'label' => 'B3. Use of improved sanitation (Type 1 or Type 2)',
    'weight' => '17',
    'children' => array(
      0 => 'field_com_num_viv_usoinfb2',
      1 => 'field_com_num_viv_usotodos2',
      2 => 'field_com_num_viv_usoinfb',
      3 => 'field_com_num_viv_usohab2',
      4 => 'field_com_num_viv_usohab',
      5 => 'field_com_num_viv_usoinfa',
      6 => 'field_com_num_viv_usoinfa2',
      7 => 'field_com_num_viv_usotodos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'B3. Sanitation. Use of IMPROVED infrastructure type 1 or type 2',
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
  $field_groups['group_com_uso_inf|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_com_viviendas_sin_sistema|entityform|comunidad|default';
  $field_group->group_name = 'group_com_viviendas_sin_sistema';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A6. No. of households without access to a water system',
    'weight' => '81',
    'children' => array(
      0 => 'field_com_viv_sin_sistema',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A6. Households without system',
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
  $field_groups['group_com_viviendas_sin_sistema|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_con_fic_cs|entityform|comunidad|default';
  $field_group->group_name = 'group_con_fic_cs';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'D. Health center',
    'weight' => '3',
    'children' => array(
      0 => 'group_com_cs',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'D. Health center',
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
  $field_groups['group_con_fic_cs|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_1_1|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_1_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_1';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '23',
    'children' => array(
      0 => 'field_com_fic_cssh_pi',
      1 => 'field_com_fic_cssh_pe',
      2 => 'field_com_fic_cssh_pa',
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
        'classes' => 'group-d4-grid-1-1 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_1_1|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_1_2|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_1_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_1';
  $field_group->data = array(
    'label' => 'Patients',
    'weight' => '24',
    'children' => array(
      0 => 'field_com_fic_cssh_pm',
      1 => 'field_com_fic_cssh_pu',
      2 => 'field_com_fic_cssh_pq',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Patients',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-d4-grid-1-2 field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_d4_grid_1_2|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_1_3|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_1_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_1';
  $field_group->data = array(
    'label' => 'Shared',
    'weight' => '25',
    'children' => array(
      0 => 'field_com_fic_cssh_pca',
      1 => 'field_com_fic_cssh_paa',
      2 => 'field_com_fic_cssh_pba',
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
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_1_3|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_1|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_saneamiento';
  $field_group->data = array(
    'label' => 'Type I',
    'weight' => '49',
    'children' => array(
      0 => 'group_d4_grid_1_2',
      1 => 'group_d4_grid_1_3',
      2 => 'group_d4_grid_1_1',
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
        'classes' => 'group-d4-grid-1 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_1|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_2_1|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_2_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_2';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '34',
    'children' => array(
      0 => 'field_com_fic_cssh_pb',
      1 => 'field_com_fic_cssh_pf',
      2 => 'field_com_fic_cssh_pj',
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
        'classes' => 'group-d4-grid-2-1 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_2_1|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_2_2|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_2_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_2';
  $field_group->data = array(
    'label' => 'Patients',
    'weight' => '35',
    'children' => array(
      0 => 'field_com_fic_cssh_pr',
      1 => 'field_com_fic_cssh_pn',
      2 => 'field_com_fic_cssh_pv',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Patients',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => 'group-d4-grid-2-2 field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_d4_grid_2_2|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_2_3|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_2_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_2';
  $field_group->data = array(
    'label' => 'Shared',
    'weight' => '36',
    'children' => array(
      0 => 'field_com_fic_cssh_pcb',
      1 => 'field_com_fic_cssh_pbb',
      2 => 'field_com_fic_cssh_pab',
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
        'classes' => 'group-d4-grid-2-3 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_2_3|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_2|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_saneamiento';
  $field_group->data = array(
    'label' => 'Type II',
    'weight' => '50',
    'children' => array(
      0 => 'group_d4_grid_2_2',
      1 => 'group_d4_grid_2_1',
      2 => 'group_d4_grid_2_3',
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
        'classes' => 'group-d4-grid-2 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_2|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_3_1|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_3_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_3';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '36',
    'children' => array(
      0 => 'field_com_fic_cssh_pc',
      1 => 'field_com_fic_cssh_pk',
      2 => 'field_com_fic_cssh_pg',
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
        'classes' => 'group-d4-grid-3-1 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_3_1|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_3_2|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_3_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_3';
  $field_group->data = array(
    'label' => 'Patients',
    'weight' => '37',
    'children' => array(
      0 => 'field_com_fic_cssh_pac',
      1 => 'field_com_fic_cssh_po',
      2 => 'field_com_fic_cssh_ps',
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
        'classes' => 'group-d4-grid-3-2 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_3_2|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_3_3|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_3_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_3';
  $field_group->data = array(
    'label' => 'Shared',
    'weight' => '38',
    'children' => array(
      0 => 'field_com_fic_cssh_pw',
      1 => 'field_com_fic_cssh_pbc',
      2 => 'field_com_fic_cssh_pcc',
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
        'classes' => 'group-d4-grid-3-3 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_3_3|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_3|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_saneamiento';
  $field_group->data = array(
    'label' => 'Unimproved',
    'weight' => '51',
    'children' => array(
      0 => 'group_d4_grid_3_3',
      1 => 'group_d4_grid_3_1',
      2 => 'group_d4_grid_3_2',
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
        'classes' => 'group-d4-grid-3 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_3|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_4_1|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_4_1';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_4';
  $field_group->data = array(
    'label' => 'Staff',
    'weight' => '5',
    'children' => array(
      0 => 'field_com_fic_cssh_ph',
      1 => 'field_com_fic_cssh_pl',
      2 => 'field_com_fic_cssh_pd',
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
        'classes' => 'group-d4-grid-4-1 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_4_1|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_4_2|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_4_2';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_4';
  $field_group->data = array(
    'label' => 'Patients',
    'weight' => '6',
    'children' => array(
      0 => 'field_com_fic_cssh_px',
      1 => 'field_com_fic_cssh_pt',
      2 => 'field_com_fic_cssh_pp',
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
        'classes' => 'group-d4-grid-4-2 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_4_2|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_4_3|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_4_3';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_d4_grid_4';
  $field_group->data = array(
    'label' => 'Shared',
    'weight' => '7',
    'children' => array(
      0 => 'field_com_fic_cssh_pbd',
      1 => 'field_com_fic_cssh_pcd',
      2 => 'field_com_fic_cssh_pad',
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
        'classes' => 'group-d4-grid-4-3 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_4_3|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_d4_grid_4|field_collection_item|field_com_fic_cs_ficha|form';
  $field_group->group_name = 'group_d4_grid_4';
  $field_group->entity_type = 'field_collection_item';
  $field_group->bundle = 'field_com_fic_cs_ficha';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_h';
  $field_group->data = array(
    'label' => 'Less than 10m',
    'weight' => '4',
    'children' => array(
      0 => 'group_d4_grid_4_1',
      1 => 'group_d4_grid_4_2',
      2 => 'group_d4_grid_4_3',
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
        'classes' => 'group-d4-grid-4 field-group-div',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_d4_grid_4|field_collection_item|field_com_fic_cs_ficha|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general_comunidad|entityform|comunidad|default';
  $field_group->group_name = 'group_info_general_comunidad';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'A. General information',
    'weight' => '0',
    'children' => array(
      0 => 'group_com_cantidad_viv',
      1 => 'group_com_dist_viviendas',
      2 => 'group_com_srv',
      3 => 'group_co_poblacion',
      4 => 'group_com_viviendas_sin_sistema',
      5 => 'group_info_general',
      6 => 'group_init',
      7 => 'group_otras_divisiones',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A. General information',
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
  $field_groups['group_info_general_comunidad|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_info_general|entityform|comunidad|default';
  $field_group->group_name = 'group_info_general';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A1.',
    'weight' => '76',
    'children' => array(
      0 => 'field_com_altitud',
      1 => 'field_com_codigo_comunidad',
      2 => 'field_entidad_local',
      3 => 'field_entity_name',
      4 => 'field_com_georef',
      5 => 'field_imagenc',
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
  $field_groups['group_info_general|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_init|entityform|comunidad|default';
  $field_group->group_name = 'group_init';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => '',
    'weight' => '72',
    'children' => array(
      0 => 'field_pais',
      1 => 'field_status',
      2 => 'field_user_reference',
      3 => 'field_fecha_encuesta',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => '',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-init field-group',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_init|entityform|comunidad|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_otras_divisiones|entityform|comunidad|default';
  $field_group->group_name = 'group_otras_divisiones';
  $field_group->entity_type = 'entityform';
  $field_group->bundle = 'comunidad';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_info_general_comunidad';
  $field_group->data = array(
    'label' => 'A2. Other Administrative and/or Geographical Divisions',
    'weight' => '77',
    'children' => array(
      0 => 'field_area_planificacion',
      1 => 'field_cuenca_hidrografica',
      2 => 'field_otras_divisiones',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'A2. Other divisions',
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
  $field_groups['group_otras_divisiones|entityform|comunidad|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('A. General information');
  t('A1.');
  t('A2. Other Administrative and/or Geographical Divisions');
  t('A3.');
  t('A4.');
  t('A5. Distribution of households with access to a water supply system');
  t('A6. No. of households without access to a water system');
  t('A7. Public services');
  t('B. Sanitation and hygiene');
  t('B1. Data collection method');
  t('B2. Household sanitation facility');
  t('B3. Use of improved sanitation (Type 1 or Type 2)');
  t('B4. Use of unimproved sanitation');
  t('B5. Household hygiene');
  t('B6. Solid waste collection and disposal');
  t('C. Schools');
  t('C1. Schools');
  t('D. Health center');
  t('D1. Health centers');
  t('E. Interventions');
  t('E1. Interventions scheduled or in progress ');
  t('F. Comments');
  t('F1. Comments and observations');
  t('Less than 10m');
  t('Patients');
  t('Shared');
  t('Staff');
  t('Type I');
  t('Type II');
  t('Unimproved');

  return $field_groups;
}
