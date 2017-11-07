<?php
/**
 * @file
 * feature_siasar_field_bases.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_siasar_field_bases_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create field_entity_clasification'.
  $permissions['create field_entity_clasification'] = array(
    'name' => 'create field_entity_clasification',
    'roles' => array(
      'Validator' => 'Validator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_entity_clasification'.
  $permissions['edit field_entity_clasification'] = array(
    'name' => 'edit field_entity_clasification',
    'roles' => array(
      'Validator' => 'Validator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_entity_clasification'.
  $permissions['edit own field_entity_clasification'] = array(
    'name' => 'edit own field_entity_clasification',
    'roles' => array(
      'Validator' => 'Validator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_entity_clasification'.
  $permissions['view field_entity_clasification'] = array(
    'name' => 'view field_entity_clasification',
    'roles' => array(
      'Validator' => 'Validator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_entity_clasification'.
  $permissions['view own field_entity_clasification'] = array(
    'name' => 'view own field_entity_clasification',
    'roles' => array(
      'Validator' => 'Validator',
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  return $permissions;
}
