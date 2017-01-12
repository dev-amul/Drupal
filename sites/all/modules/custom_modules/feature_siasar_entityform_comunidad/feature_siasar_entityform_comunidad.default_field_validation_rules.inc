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

  return $export;
}
