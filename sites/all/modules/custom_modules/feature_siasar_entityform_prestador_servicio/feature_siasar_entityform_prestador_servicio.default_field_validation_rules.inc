<?php
/**
 * @file
 * feature_siasar_entityform_prestador_servicio.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function feature_siasar_entityform_prestador_servicio_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Facturación es igual o mayor a ingresos por facturación';
  $rule->name = 'billing_is_greater_equal_income';
  $rule->field_name = 'field_facturacion_promedio';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_servicio';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'target_field_machine_name' => 'field_ingresos_reales',
    'operator' => 'greater_equal',
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
  $rule->error_message = 'La facturación debe ser igual o mayor que los ingresos reales por facturación.';
  $export['billing_is_greater_equal_income'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Is numeric';
  $rule->name = 'is_numeric';
  $rule->field_name = 'field_facturacion_promedio';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_servicio';
  $rule->validator = 'field_validation_numeric2_validator';
  $rule->settings = array(
    'min' => '0',
    'max' => '',
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
  $rule->error_message = 'La facturación debe ser un número.';
  $export['is_numeric'] = $rule;

  return $export;
}
