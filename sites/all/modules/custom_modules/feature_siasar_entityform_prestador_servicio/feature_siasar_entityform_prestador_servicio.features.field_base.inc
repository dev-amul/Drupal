<?php
/**
 * @file
 * feature_siasar_entityform_prestador_servicio.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_siasar_entityform_prestador_servicio_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_tasa_anual_exp_prom'.
  $field_bases['field_tasa_anual_exp_prom'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tasa_anual_exp_prom',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  return $field_bases;
}
