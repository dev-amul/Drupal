<?php
/**
 * @file
 * feature_siasar_workflow.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_siasar_workflow_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'edit workflow comment'.
  $permissions['edit workflow comment'] = array(
    'name' => 'edit workflow comment',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'workflow',
  );

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
      'translator' => 'translator',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'schedule workflow transitions'.
  $permissions['schedule workflow transitions'] = array(
    'name' => 'schedule workflow transitions',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'workflow',
  );

  // Exported permission: 'show workflow state form'.
  $permissions['show workflow state form'] = array(
    'name' => 'show workflow state form',
    'roles' => array(
      'administrator' => 'administrator',
      'translator' => 'translator',
    ),
    'module' => 'workflow',
  );

  return $permissions;
}
