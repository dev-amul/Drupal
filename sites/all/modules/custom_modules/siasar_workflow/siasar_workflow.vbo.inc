<?php

/**
 * Implements hook_action_info().
 * Registers custom VBO actions as Drupal actions.
 */
function _siasar_workflow_action_info() {
  $action = array(
    'siasar_close_and_update_action' => array(
      'type' => 'entityform',
      'label' => t('Prepare for updating'),
      'triggers' => array('any'),
      'configurable' => false,
    ),
  );

  return $action;
}

/**
 * Closes and Updates every entityform received.
 *
 * @param \Entityform $entityform
 * @param array $context
 * @return void
 */
function siasar_close_and_update_action($entityform, array $context) {
  module_load_include('inc', 'siasar_workflow', 'inc/siasar_workflow.helpers');

  $current_status = isset($entityform->field_status[LANGUAGE_NONE][0]['value'])
    ? (int) $entityform->field_status[LANGUAGE_NONE][0]['value']
    : null;
  $states_list = workflow_load_multiple_by_name(array('entityforms'))['entityforms']->states;

  if ($current_status != SIASAR_ENTITYFORM_STATE_VALIDATED) {
    drupal_set_message('Survey ' . $entityform->entityform_id . ' is not validated, it can\'t be closed');
    return;
  }

  _siasar_set_workflow_state($entityform, $states_list[SIASAR_ENTITYFORM_STATE_CLOSED]->name);

  // This fires presave hook and updates field_closed_revisions field.
  $entityform->revision = true;
  $entityform->is_new_revision = true;
  $entityform->save();
}
