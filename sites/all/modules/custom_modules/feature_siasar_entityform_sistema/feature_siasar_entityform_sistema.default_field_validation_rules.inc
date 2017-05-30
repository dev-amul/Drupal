<?php
/**
 * @file
 * feature_siasar_entityform_sistema.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function feature_siasar_entityform_sistema_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Medidores con consumo VS medidores instalados';
  $rule->name = 'med_cons_inst';
  $rule->field_name = 'field_f1_4';
  $rule->col = 'value';
  $rule->entity_type = 'field_collection_item';
  $rule->bundle = 'field_f_red_de_distribucion';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->value > $this->entity->field_f1_3[\'und\'][0][\'value\']){
  $this->set_error();
}',
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
  $rule->error_message = 'Error: La cantidad de [value] [field-name], supera el número de Medidores Instalados.';
  $export['med_cons_inst'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Fecha de análisis - cloro residual Now';
  $rule->name = 'sis_fecha_analisis_cloro_now';
  $rule->field_name = 'field_fecha_analisiscalidad_agua';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'sistema';
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
  $rule->error_message = 'G4. La Fecha de análisis (cloro residual) tiene que ser menor que la fecha actual.';
  $export['sis_fecha_analisis_cloro_now'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Fecha de análisis Test de Coliformes Now';
  $rule->name = 'sis_fecha_analisis_coliform_now';
  $rule->field_name = 'field_fecha_analisis_coliformes';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'sistema';
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
  $rule->error_message = 'G4. La Fecha de análisis - Test de Coliformes tiene que ser menor que la fecha actual.';
  $export['sis_fecha_analisis_coliform_now'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Fecha de aplicación Now';
  $rule->name = 'sis_fecha_aplicacion_now';
  $rule->field_name = 'field_fecha_de_aplicaci_n';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'sistema';
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
  $export['sis_fecha_aplicacion_now'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'valid_conex_red_dist';
  $rule->name = 'valid_conex_red_dist';
  $rule->field_name = 'field_f1_3';
  $rule->col = 'value';
  $rule->entity_type = 'field_collection_item';
  $rule->bundle = 'field_f_red_de_distribucion';
  $rule->validator = 'field_validation_php_validator';
  $rule->settings = array(
    'data' => 'if($this->value > $this->entity->field_f1_2[\'und\'][0][\'value\']){
  $this->set_error();
}',
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
  $rule->error_message = 'Error: [field-name] ([value]), supera el número de Conexiones de Red.';
  $export['valid_conex_red_dist'] = $rule;

  return $export;
}
