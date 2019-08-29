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
  $rule->rulename = 'Fecha de la última elección de la junta debe ser igual o superior a la fecha de creación ';
  $rule->name = 'election_date_higher_equal_creat';
  $rule->field_name = 'field_fecha_eleccion';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_servicio';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'greater_equal',
    'target_field_machine_name' => 'field_fecha_creacion',
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
  $rule->error_message = 'La fecha de la última elección de la junta debe ser igual o superior a la fecha de creación ';
  $export['election_date_higher_equal_creat'] = $rule;

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

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Fecha de aplicación Now';
  $rule->name = 'ps_fecha_aplicacion_now';
  $rule->field_name = 'field_fecha_aplicacion';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_servicio';
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
  $export['ps_fecha_aplicacion_now'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Fecha de creación Now';
  $rule->name = 'ps_fecha_creacion_now';
  $rule->field_name = 'field_fecha_creacion';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_servicio';
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
  $rule->error_message = 'B1. La Fecha de Creación tiene que ser menor que la fecha actual.';
  $export['ps_fecha_creacion_now'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Fecha de elección de la última junta Now';
  $rule->name = 'ps_fecha_eleccion_now';
  $rule->field_name = 'field_fecha_eleccion';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_servicio';
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
  $rule->error_message = 'B2. La Fecha de la última elección de los miembros de la Junta tiene que ser menor que la fecha actual.';
  $export['ps_fecha_eleccion_now'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Theoretical total should match theoreticals';
  $rule->name = 'theory_total_match_theory_values';
  $rule->field_name = 'field_sumatoria_gastos_teoricos';
  $rule->col = 'value';
  $rule->entity_type = 'entityform';
  $rule->bundle = 'prestador_de_servicio';
  $rule->validator = 'field_validation_match_against_form_value';
  $rule->settings = array(
    'operator' => 'same',
    'target_field_machine_name' => 'field_gasto_teorico_admin + field_gasto_teorico_operacion + field_gasto_teorico_mantenimient + field_gasto_teorico_ambientales',
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
  $rule->error_message = 'El total de gastos teóricos debe ser la suma de los subcampos de tipologías de gastos teóricos.';
  $export['theory_total_match_theory_values'] = $rule;

  return $export;
}
