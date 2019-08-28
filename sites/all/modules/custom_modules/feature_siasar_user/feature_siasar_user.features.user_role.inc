<?php
/**
 * @file
 * feature_siasar_user.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function feature_siasar_user_user_default_roles() {
  $roles = array();

  // Exported role: Actualizador.
  $roles['Actualizador'] = array(
    'name' => 'Actualizador',
    'weight' => 12,
  );

  // Exported role: Admin usuarios.
  $roles['Admin usuarios'] = array(
    'name' => 'Admin usuarios',
    'weight' => 13,
  );

  // Exported role: Administrador Local.
  $roles['Administrador Local'] = array(
    'name' => 'Administrador Local',
    'weight' => 5,
  );

  // Exported role: Administrador Regional.
  $roles['Administrador Regional'] = array(
    'name' => 'Administrador Regional',
    'weight' => 6,
  );

  // Exported role: Digitador.
  $roles['Digitador'] = array(
    'name' => 'Digitador',
    'weight' => 3,
  );

  // Exported role: Digitador calidad de agua.
  $roles['Digitador calidad de agua'] = array(
    'name' => 'Digitador calidad de agua',
    'weight' => 8,
  );

  // Exported role: Encuestador.
  $roles['Encuestador'] = array(
    'name' => 'Encuestador',
    'weight' => 2,
  );

  // Exported role: Validador calidad de agua.
  $roles['Validador calidad de agua'] = array(
    'name' => 'Validador calidad de agua',
    'weight' => 9,
  );

  // Exported role: Validator.
  $roles['Validator'] = array(
    'name' => 'Validator',
    'weight' => 4,
  );

  // Exported role: translator.
  $roles['translator'] = array(
    'name' => 'translator',
    'weight' => 10,
  );

  return $roles;
}
