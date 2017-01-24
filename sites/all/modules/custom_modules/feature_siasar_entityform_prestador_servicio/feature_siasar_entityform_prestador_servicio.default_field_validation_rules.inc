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
  $rule->rulename = 'Users that should pay is higher equal users up to date';
  $rule->name = 'paying_users_higher_equal_paid';
  $rule->field_name = 'field_usuarios_deberian_pagan';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_servicio';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'greater_equal',
    'target_field_machine_name' => 'field_usuarios_al_dia',
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
  $rule->error_message = 'El número de usuarios que deberían pagar factura debe ser igual o mayor que el número de usuarios al día en sus pagos ordinarios. ';
  $export['paying_users_higher_equal_paid'] = $rule;

  return $export;
}
