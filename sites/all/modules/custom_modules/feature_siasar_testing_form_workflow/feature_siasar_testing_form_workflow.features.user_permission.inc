<?php
/**
 * @file
 * feature_siasar_testing_form_workflow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_siasar_testing_form_workflow_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'participate in workflow'.
  $permissions['participate in workflow'] = array(
    'name' => 'participate in workflow',
    'roles' => array(
      'Administrador Local' => 'Administrador Local',
      'Administrador Regional' => 'Administrador Regional',
      'Digitador' => 'Digitador',
      'Encuestador' => 'Encuestador',
      'Validator' => 'Validator',
      'administrator' => 'administrator',
    ),
    'module' => 'workflow',
  );

  return $permissions;
}
