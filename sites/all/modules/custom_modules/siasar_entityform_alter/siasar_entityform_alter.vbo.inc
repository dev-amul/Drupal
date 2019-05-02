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
    'siasar_finish_questionnaire_action'   => array(
      'type'     => 'entityform',
      'label'    => t('Survey to Finished'),
      'triggers' => array('any'),
    ),
    'siasar_validate_questionnaire_action' => array(
      'type'     => 'entityform',
      'label'    => t('Survey to Validated'),
      'triggers' => array('any'),
    ),
    'siasar_draft_questionnaire_action'    => array(
      'type'     => 'entityform',
      'label'    => t('Survey to Draft'),
      'triggers' => array('any'),
    ),
    'siasar_remove_questionnaire_action'   => array(
      'type'     => 'entityform',
      'label'    => t('Delete Survey'),
      'behavior' => array('deletes_property'),
      'triggers' => array('any'),
    ),
    'siasar_check_computability'           => array(
      'type'     => 'entityform',
      'label'    => t('Check Survey is Computable'),
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
  $field_name  = 'field_status';
  $entity_type = $entity->entityType();

  $wrapper = entity_metadata_wrapper($entity_type, $entity);

  if (isset($wrapper->$field_name)) {
    $old_sid = workflow_node_current_state($entity, $entity_type, $field_name);
    $states  = workflow_state_load_multiple();

    $new_state = FALSE;
    foreach ($states as $sid => $state) {
      if ($state->getName() == $new_state_name) {
        $new_state = $state;
        break;
      }
    }

    if ($new_state) {
      $entity->{$field_name}[LANGUAGE_NONE][0]['value'] = $new_state->value();
      entity_save('entityform', $entity);

      $transition = new WorkflowTransition();
      $transition->setValues($entity_type, $entity, $field_name, $old_sid, $new_state->value(), $entity->uid);
      $transition->execute();
    }
  }
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
 * Sets the questionnaire state to draft
 *
 * @param \Entityform $entity
 * @param array $context
 */
function siasar_draft_questionnaire_action($entity, array $context) {
  _siasar_set_workflow_state($entity, 'draft');
}

/**
 * Remove a survey if it has not a valid revision. In other case, set the survey as removed
 *
 * @param $entity
 * @param array $context
 */
function siasar_remove_questionnaire_action($entity, array $context) {
  if ($context['entity_type'] == 'entityform' && empty(siasar_entityform_validated_revisions($entity))) {
    if (entity_access('delete', 'entityform', $entity)) {
      entity_delete('entityform', $entity->entityform_id);
    }
  }
  else {
    _siasar_set_workflow_state($entity, 'removed');
  }
}

/**
 * Recalculates computability of an entityform.
 *
 * @param $entity
 * @param array $context
 */
function siasar_check_computability($entity, array $context) {
  $id = $entity->entityform_id;
  $is_computable = _computable_revision($id);

  if (empty($is_computable)) {
    drupal_set_message(t("@field_entity_name is not computable", array('@field_entity_name' => $entity->field_entity_name['und'][0]['value'])), 'error');

  }
  else {
    drupal_set_message(t("@field_entity_name is computable", array('@field_entity_name' => $entity->field_entity_name['und'][0]['value'])), 'status');
  }
}
