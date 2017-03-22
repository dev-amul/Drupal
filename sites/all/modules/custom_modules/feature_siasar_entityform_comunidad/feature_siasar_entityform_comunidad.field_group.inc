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
      1 => 'field_com_poblacion_total',
      2 => 'field_etnia_en_mayoria',
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
      0 => 'field_con_fic_ce_ficha',
      1 => 'field_ce_location',
      2 => 'field_com_ce_nombre',
      3 => 'field_com_ce_existe',
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
      0 => 'field_com_cs_existe',
      1 => 'field_com_fic_cs_ficha',
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
    'label' => 'A5. Household distribution by system ',
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
    'label' => 'B2. Sanitation. Existing household infrastructure',
    'weight' => '16',
    'children' => array(
      0 => 'field_field_com_num_viv_infnt',
      1 => 'field_com_num_viv_infta',
      2 => 'field_com_num_viv_inftb',
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
      1 => 'field_com_hig_num_vivbasica',
      2 => 'field_com_hig_num_vivagua',
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
      0 => 'field_com_fc_systypimprove',
      1 => 'field_com_fc_systypunimprove',
      2 => 'field_com_fc_impsystem',
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
    'label' => 'B4. Un-improved sanitation. Use of infrastructure ',
    'weight' => '18',
    'children' => array(
      0 => 'field_com_no_uso_vivnumtodos',
      1 => 'field_com_no_uso_vivnumuso',
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
    'label' => 'B1. Process used to complete this form',
    'weight' => '15',
    'children' => array(
      0 => 'field_com_num_viv_muestra',
      1 => 'field_com_lev_muestral',
      2 => 'field_com_lev_utilform',
      3 => 'field_com_lev_general',
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
      1 => 'group_com_higiene',
      2 => 'group_com_no_uso',
      3 => 'group_com_proc_empleado',
      4 => 'group_com_recotrata',
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
    'label' => 'A7. Electricity and communications',
    'weight' => '82',
    'children' => array(
      0 => 'field_com_srv_telm_existe',
      1 => 'field_com_srv_telf_existe',
      2 => 'field_com_srv_existe',
      3 => 'field_com_srv_caracteristicas',
      4 => 'field_com_srv_inte_existe',
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
    'label' => 'B3. Sanitation. Use of IMPROVED infrastructure type 1 or type 2',
    'weight' => '17',
    'children' => array(
      0 => 'field_com_num_viv_usohab',
      1 => 'field_com_num_viv_usohab2',
      2 => 'field_com_num_viv_usoinfa2',
      3 => 'field_com_num_viv_usoinfb2',
      4 => 'field_com_num_viv_usoinfa',
      5 => 'field_com_num_viv_usotodos2',
      6 => 'field_com_num_viv_usotodos',
      7 => 'field_com_num_viv_usoinfb',
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
    'label' => 'A6. Households without system',
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
      0 => 'group_co_poblacion',
      1 => 'group_com_cantidad_viv',
      2 => 'group_com_dist_viviendas',
      3 => 'group_com_srv',
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
      0 => 'field_entity_name',
      1 => 'field_entidad_local',
      2 => 'field_com_georef',
      3 => 'field_com_codigo_comunidad',
      4 => 'field_imagenc',
      5 => 'field_com_altitud',
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
      1 => 'field_user_reference',
      2 => 'field_fecha_encuesta',
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
    'label' => 'A2. Other divisions',
    'weight' => '77',
    'children' => array(
      0 => 'field_otras_divisiones',
      1 => 'field_area_planificacion',
      2 => 'field_cuenca_hidrografica',
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
  t('A2. Other divisions');
  t('A3.');
  t('A4.');
  t('A5. Household distribution by system ');
  t('A6. Households without system');
  t('A7. Electricity and communications');
  t('B. Sanitation and hygiene');
  t('B1. Process used to complete this form');
  t('B2. Sanitation. Existing household infrastructure');
  t('B3. Sanitation. Use of IMPROVED infrastructure type 1 or type 2');
  t('B4. Un-improved sanitation. Use of infrastructure ');
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

  return $field_groups;
}
