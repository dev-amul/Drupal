<?php

/**
 * @file
 * VBO action to modify entity values (properties and fields).
 */

/**
 * Implements hook_action_info().
 *
 * Registers custom VBO actions as Drupal actions.
 */
function _siasar_entityform_alter_action_info() {
  return array(
    'siasar_finish_questionnaire_action' => array(
      'type' => 'entityform',
      'label' => t('Questionnarie to Finished'),
      'triggers' => array('any'),
    ),
    'siasar_validate_questionnaire_action' => array(
      'type' => 'entityform',
      'label' => t('Questionnaire to Validated'),
      'triggers' => array('any'),
    ),
    'siasar_delete_questionnaire_action' => array(
      'type' => 'entityform',
      'label' => t('Questionnaire - Deleted'),
      'triggers' => array('any'),
    ),
    'siasar_draft_questionnaire_action' => array(
      'type' => 'entityform',
      'label' => t('Questionnaire to Draft'),
      'triggers' => array('any'),
    ),
  );
}

/**
 * Change the workflow state
 *
 * @param $entity
 * @param $new_state_name
 *
 * @return bool|int
 */
function _siasar_set_workflow_state($entity, $new_state_name) {
  $return = FALSE;
  $field_name = 'field_status';
  $entity_type = $entity->entityType();

  $wrapper = entity_metadata_wrapper($entity_type, $entity);

  if (isset($wrapper->$field_name)) {
    $old_sid = workflow_node_current_state($entity, $entity_type, $field_name);
    $states = workflow_state_load_multiple();

    $new_state = FALSE;
    foreach ($states as $sid => $state) {
      if ($state->getName() == $new_state_name) {
        $new_state = $state;
        break;
      }
    }

    if ($new_state) {
      $transition = new WorkflowTransition();
      $transition->setValues($entity_type, $entity, $field_name, $old_sid, $new_state->value());

      $langcode = $transition->language;

      // We manually set the new state, as we want the Entity to know that
      // it will be transitioned to a new state

      // Do a separate update to update the field (Workflow Field API)
      // This will call hook_field_update() and WorkflowFieldDefaultWidget::submit().
      $entity->{$field_name}[$langcode][0]['transition'] = $transition;
      $entity->{$field_name}[$langcode][0]['value'] = $transition->new_sid;
    }
  }

  return $return;
}

/**
 * Sets the questionnaire state to finished
 *
 * @param \Entityform $entity
 * @param array $context
 */
function siasar_finish_questionnaire_action($entity, array $context) {
  _siasar_set_workflow_state($entity, 'finished');
}

/**
 * Sets the questionnaire state to validated
 *
 * @param \Entityform $entity
 * @param array $context
 */
function siasar_validate_questionnaire_action($entity, array $context) {
  _siasar_set_workflow_state($entity, 'validated');
}

/**
 * Deletes the questionnaire
 *
 * @param \Entityform $entity
 * @param array $context
 */
function siasar_delete_questionnaire_action($entity, array $context) {
  if (entity_access('delete', $entity->entityType(), $entity)) {
    entity_delete($entity->entityType(), $entity->identifier());
  }
}

/**
 * Sets the questionnaire state to draft
 *
 * @param \Entityform $entity
 * @param array $context
 */
function siasar_draft_questionnaire_action($entity, array $context) {
  _siasar_set_workflow_state($entity, 'draft');
}