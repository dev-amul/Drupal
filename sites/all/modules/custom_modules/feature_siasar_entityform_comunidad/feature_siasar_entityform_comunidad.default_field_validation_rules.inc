<?php
/**
 * @file
 * feature_siasar_entityform_comunidad.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function feature_siasar_entityform_comunidad_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Fecha de aplicación Now';
  $rule->name = 'com_fecha_aplicacion_now';
  $rule->field_name = 'field_fecha_encuesta';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_date_range2_validator';
  $rule->settings = array(
    'cycle' => 'global',
    'min' => '',
    'max' => 'now',
    'reverse' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      10 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'A. La Fecha de Aplicación tiene que ser menor que la fecha actual.';
  $export['com_fecha_aplicacion_now'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'comunidad_basic_wash_vs_wash_all_user';
  $rule->name = 'comunidad_basic_wash_vs_wash_all';
  $rule->field_name = 'field_com_hig_num_vivtodos';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'lower_equal',
    'target_field_machine_name' => 'field_com_hig_num_vivbasica',
    'ignore_rule_if_blank_value' => 0,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      11 => 0,
      12 => 0,
      13 => 0,
      14 => 0,
      10 => 0,
      15 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'El número de viviendas en que todos sus miembros utilizan la instalación de lavado no puede ser mayor que el número de viviendas con una instalación básica (B5).';
  $export['comunidad_basic_wash_vs_wash_all'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'comunidad_sample_lower_equal_total_houses';
  $rule->name = 'comunidad_sample_lower_equal_tot';
  $rule->field_name = 'field_com_num_viv_muestra';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'lower_equal',
    'target_field_machine_name' => 'field_com_viv_totales',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      10 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'El número de viviendas de la muestra debe ser inferior o igual a la cantidad total de viviendas de la comunidad.';
  $export['comunidad_sample_lower_equal_tot'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Houses processing household waste is lower than total houses';
  $rule->name = 'household_waste_total_houses';
  $rule->field_name = 'field_com_recontrata_numvivc';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'lower_equal',
    'target_field_machine_name' => 'field_com_viv_totales',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      10 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'La cantidad de viviendas que recogen o tratan las basuras domésticas debe ser menor que la cantidad total de viviendas.';
  $export['household_waste_total_houses'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Total houses vs safe drinking water storage';
  $rule->name = 'total_houses_vs_drink_storage';
  $rule->field_name = 'field_com_viv_totales';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'greater_equal',
    'target_field_machine_name' => 'field_com_hig_num_vivagua',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      10 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'La cantidad total de viviendas no puede ser menor que la cantidad de viviendas que almacenan el agua de bebida de forma segura (B5).';
  $export['total_houses_vs_drink_storage'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Total houses vs existing infrastructure';
  $rule->name = 'total_houses_vs_existing_sanitat';
  $rule->field_name = 'field_com_viv_totales';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'greater_equal',
    'target_field_machine_name' => 'field_com_num_viv_infta + field_com_num_viv_inftb + field_field_com_num_viv_infnt',
    'ignore_rule_if_blank_value' => 1,
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      10 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'El total de viviendas debe ser igual o mayor que la suma del bloque B2.';
  $export['total_houses_vs_existing_sanitat'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Total houses vs hygiene in houses';
  $rule->name = 'total_houses_vs_hygiene_houses';
  $rule->field_name = 'field_com_viv_totales';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'greater_equal',
    'target_field_machine_name' => 'field_com_hig_num_vivbasica',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      10 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'La cantidad total de viviendas no puede ser menor que la cantidad de viviendas que cuentan con una instalación básica (con agua y jabón) para el lavado de manos cerca de la instalación de saneamiento (B5).';
  $export['total_houses_vs_hygiene_houses'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Total houses vs usage of sanitation structure';
  $rule->name = 'total_houses_vs_sanitation';
  $rule->field_name = 'field_com_viv_totales';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'greater_equal',
    'target_field_machine_name' => 'field_com_num_viv_usoinfa + field_com_num_viv_usoinfb + field_com_num_viv_usohab + field_com_num_viv_usoinfa2 + field_com_num_viv_usotodos + field_com_num_viv_usoinfb2 + field_com_num_viv_usohab2 + field_com_num_viv_usotodos2 + field_com_no_uso_vivnumuso + field_com_no_uso_vivnumtodos',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      10 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'El número total de viviendas debe ser igual o mayor que la suma de los bloques B3 y B4.';
  $export['total_houses_vs_sanitation'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Total houses vs washing Installation all users';
  $rule->name = 'total_houses_vs_wash_all_users';
  $rule->field_name = 'field_com_viv_totales';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'comunidad';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'greater_equal',
    'target_field_machine_name' => 'field_com_hig_num_vivtodos',
    'bypass' => 0,
    'roles' => array(
      1 => 0,
      2 => 0,
      7 => 0,
      8 => 0,
      5 => 0,
      9 => 0,
      6 => 0,
      10 => 0,
    ),
    'errors' => 0,
    'condition' => 0,
    'condition_wrapper' => array(
      'condition_field' => '',
      'condition_operator' => 'equals',
      'condition_value' => '',
    ),
  );
  $rule->error_message = 'El número total de viviendas no puede ser menor que la cantidad de viviendas en que todos sus miembros utilizan la instalación de lavado (B5).';
  $export['total_houses_vs_wash_all_users'] = $rule;

  return $export;
}
