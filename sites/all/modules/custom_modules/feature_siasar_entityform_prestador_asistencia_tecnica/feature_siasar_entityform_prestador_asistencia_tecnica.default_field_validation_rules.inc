<?php
/**
 * @file
 * feature_siasar_entityform_prestador_asistencia_tecnica.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function feature_siasar_entityform_prestador_asistencia_tecnica_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Fecha de aplicación Now';
  $rule->name = 'pat_fecha_aplicacion_now';
  $rule->field_name = 'field_fecha_de_aplicacion';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_asistencia_t_cnica';
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
  $rule->error_message = 'A. La Fecha de aplicación tiene que ser menor que la fecha actual.';
  $export['pat_fecha_aplicacion_now'] = $rule;

  return $export;
}
