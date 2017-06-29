<?php

/**
 * Implements hook_drush_command().
 */
function siasar_drush_workflow_drush_command() {
  $items['siasar-migrate-workflow'] = array(
    'description' => 'It migrates survey status (draft/finished/validated) to a new system, powered by Workflow module.',
    'aliases' => array('siasar-mw'),
    'callback' => 'drush_siasar_update_to_workflow',
    'arguments' => array(
      'form_type' => 'Form type',
      'offset' => 'Starting at result (zero indexed)',
      'length' => 'How many results should the script get'
    ),
    'required-arguments' => false,
    'examples' => array(
      'drush siasar-mw sistema 100 50' => 'Gets legacy draft and validated values for all "sistema" forms, and converts all them to new, Workflow powered state. It gets 50 surveys, starting at the 100th one.',
      'drush siasar-mw all 0 100' => 'Process first 100 forms, no matter their type.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

function drush_siasar_update_to_workflow($form_type = 'all', $offset = 0, $length = null) {
  $timer = microtime(true);
  $statuses = siasar_drush_flow_get_statuses();
  $transition = siasar_drush_workflow_prepare_transition_object();

  $bundles = ($form_type !== 'all')
    ? array($form_type)
    : array_keys(entity_get_info('entityform')['bundles']);

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'entityform')
    ->entityCondition('bundle', $bundles, 'IN')
    ->propertyOrderBy('entityform_id', 'ASC');
  if($length) {
    $query->range($offset, $length);
  }
  $result = $query->execute();

  if (empty($result['entityform'])) {
    drupal_set_message('No valid results to process, stopping.');
    return 0;
  }

  foreach ($result['entityform'] as $entity_id => $item) {
    $entity = entity_load_single('entityform', $entity_id);

    if (!empty($entity->field_status) && $entity->field_status[LANGUAGE_NONE][0]['value'] > 1) continue;

    $draft = (bool) $entity->draft;
    $validated = (bool) $entity->field_cuestionario_validado[LANGUAGE_NONE][0]['value'];
    $transition->old_sid = 1;

    if ($validated) {
      $transition->new_sid = $statuses['STATUS_VALIDATED'];
    } elseif (!$validated && !$draft) {
      $transition->new_sid = $statuses['STATUS_FINISHED'];
    } elseif (!$validated && $draft) {
      $transition->new_sid = $statuses['STATUS_DRAFT'];
    }
    $transition->entity_id = $entity_id;
    $transition->execute(true);
  }
  $total = count($result['entityform']);
  $timer = microtime(true) - $timer;
  drupal_set_message('Processed ' . $total . ' entityforms. It took ' . $timer . ' seconds.');
  return $total;
}

function siasar_drush_flow_get_statuses() {
  return array(
    'STATUS_DRAFT' => 2,
    'STATUS_FINISHED' => 3,
    'STATUS_VALIDATED' => 4,
  );
}

function siasar_drush_workflow_prepare_transition_object() {
  $workflow = workflow_load_by_name('entityforms');
  $values = array(
    'wid' => $workflow->wid,
    'entity_type' => 'entityform',
    'field_name' => 'field_status',
    'force' => true,
  );
  $transition = new WorkflowTransition($values);

  return $transition;
}
