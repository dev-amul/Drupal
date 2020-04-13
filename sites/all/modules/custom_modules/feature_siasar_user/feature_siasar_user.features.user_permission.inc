<?php
/**
 * @file
 * feature_siasar_user.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_siasar_user_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'assign Actualizador role'.
  $permissions['assign Actualizador role'] = array(
    'name' => 'assign Actualizador role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Admin usuarios role'.
  $permissions['assign Admin usuarios role'] = array(
    'name' => 'assign Admin usuarios role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Administrador Local role'.
  $permissions['assign Administrador Local role'] = array(
    'name' => 'assign Administrador Local role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Regional' => 'Administrador Regional',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Administrador Regional role'.
  $permissions['assign Administrador Regional role'] = array(
    'name' => 'assign Administrador Regional role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Digitador calidad de agua role'.
  $permissions['assign Digitador calidad de agua role'] = array(
    'name' => 'assign Digitador calidad de agua role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Digitador role'.
  $permissions['assign Digitador role'] = array(
    'name' => 'assign Digitador role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Encuestador role'.
  $permissions['assign Encuestador role'] = array(
    'name' => 'assign Encuestador role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Invitado role'.
  $permissions['assign Invitado role'] = array(
    'name' => 'assign Invitado role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Validador calidad de agua role'.
  $permissions['assign Validador calidad de agua role'] = array(
    'name' => 'assign Validador calidad de agua role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Validator role'.
  $permissions['assign Validator role'] = array(
    'name' => 'assign Validator role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign administrator role'.
  $permissions['assign administrator role'] = array(
    'name' => 'assign administrator role',
    'roles' => array(
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'role_delegation',
  );

  return $permissions;
}
