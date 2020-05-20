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

  // Exported permission: 'access administration menu'.
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'admin_menu',
  );

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer content translations'.
  $permissions['administer content translations'] = array(
    'name' => 'administer content translations',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'i18n_node',
  );

  // Exported permission: 'administer entity translation'.
  $permissions['administer entity translation'] = array(
    'name' => 'administer entity translation',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'assign Actualizador role'.
  $permissions['assign Actualizador role'] = array(
    'name' => 'assign Actualizador role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Admin usuarios role'.
  $permissions['assign Admin usuarios role'] = array(
    'name' => 'assign Admin usuarios role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Administrador Local role'.
  $permissions['assign Administrador Local role'] = array(
    'name' => 'assign Administrador Local role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Regional' => 'Administrador Regional',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Administrador Regional role'.
  $permissions['assign Administrador Regional role'] = array(
    'name' => 'assign Administrador Regional role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
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
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Guest role'.
  $permissions['assign Guest role'] = array(
    'name' => 'assign Guest role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign Invitado role'.
  $permissions['assign Invitado role'] = array(
    'name' => 'assign Invitado role',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
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
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign administrator role'.
  $permissions['assign administrator role'] = array(
    'name' => 'assign administrator role',
    'roles' => array(),
    'module' => 'role_delegation',
  );

  // Exported permission: 'assign all roles'.
  $permissions['assign all roles'] = array(
    'name' => 'assign all roles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'role_delegation',
  );

  // Exported permission: 'toggle field translatability'.
  $permissions['toggle field translatability'] = array(
    'name' => 'toggle field translatability',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate admin strings'.
  $permissions['translate admin strings'] = array(
    'name' => 'translate admin strings',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'translate any entity'.
  $permissions['translate any entity'] = array(
    'name' => 'translate any entity',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate blocks'.
  $permissions['translate blocks'] = array(
    'name' => 'translate blocks',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'i18n_block',
  );

  // Exported permission: 'translate content'.
  $permissions['translate content'] = array(
    'name' => 'translate content',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'translation',
  );

  // Exported permission: 'translate interface'.
  $permissions['translate interface'] = array(
    'name' => 'translate interface',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'locale',
  );

  // Exported permission: 'translate node entities'.
  $permissions['translate node entities'] = array(
    'name' => 'translate node entities',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'entity_translation',
  );

  // Exported permission: 'translate user-defined strings'.
  $permissions['translate user-defined strings'] = array(
    'name' => 'translate user-defined strings',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'i18n_string',
  );

  // Exported permission: 'use on-page translation'.
  $permissions['use on-page translation'] = array(
    'name' => 'use on-page translation',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'l10n_client',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'Admin usuarios' => 'Admin usuarios',
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
