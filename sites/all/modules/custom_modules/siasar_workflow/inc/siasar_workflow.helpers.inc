<?php


/**
 * Helper function returns true if the transition about to be executed
 * goes as specified in parameters (false otherwise).
 *
 * @param object $entityform
 * @param string $from: Machine name for origin state
 * @param string $to: Machine name for target state
 * @return bool
 */
function _siasar_workflow_check_transition($entityform, $from, $to) {
  if (!isset($entityform->field_status[LANGUAGE_NONE][0]['workflow']['workflow_sid'])
    && !isset($entityform->field_status[LANGUAGE_NONE][0]['value']))
    return false;

  $transition = array(
    'old' => (int) $entityform->original->field_status['und'][0]['value'],
    'new' => isset($entityform->field_status[LANGUAGE_NONE][0]['workflow']['workflow_sid'])
      ? (int) $entityform->field_status[LANGUAGE_NONE][0]['workflow']['workflow_sid']
      : (int) $entityform->field_status[LANGUAGE_NONE][0]['value'],
  );

  $from_sid = _siasar_workflow_find_state_sid($from);
  $to_sid = _siasar_workflow_find_state_sid($to);

  return ($transition['old'] === $from_sid && $transition['new'] == $to_sid)
    ? true
    : false;
}

/**
 * Helper function to retrieve an entityform's history of revisions, sorted out from newest to oldest.
 *
 * @param int $entity_id
 *
 * @return array
 */
function _siasar_workflow_get_entityform_revisions_history($entityform_id) {
  $info = entity_get_info('entityform');

  $revisions = db_select($info['revision table'], 'r')
    ->fields('r', array($info['entity keys']['revision']))
    ->fields('fs', array('field_status_value'))
    ->condition($info['entity keys']['id'], $entityform_id);

  $revisions->leftJoin('field_data_field_status', 'fs', "fs.entity_id = r.entityform_id AND fs.revision_id = r.vid AND entity_type = 'entityform'");

  $result = $revisions->execute()
    ->fetchAllAssoc($info['entity keys']['revision']);

  return $result;
}

/**
 * Helper function returns a list of "closed" revisions, sorted from newest to oldest.
 * There are two possible conditions to consider a revision "closed" and ready for BI processing:
 *
 * 1 - It's validated and followed by a new Draft.
 * 2 - It's the last available validated revision.
 *
 * @param array $history
 * @param object $workflow
 * @return array
 */
function _siasar_workflow_find_closed_revisions($history, $workflow) {
  $validated_sid = _siasar_workflow_find_state_sid($workflow->states, 'validated');
  $draft_sid = _siasar_workflow_find_state_sid($workflow->states, 'draft');

  $closed_revisions = array();

  $possible = false;

  foreach ($history as $vid => $revision) {
    if ($revision->field_status_value == $validated_sid) {
      $possible = $vid;
      continue;
    }

    if ($revision->field_status_value == $draft_sid && $possible !== false) {
      $closed_revisions[] = $possible;
    }
    $possible = false;
  }
  return $closed_revisions;
}

/**
 * Helper function finds the SID number for a workflow state machine name.
 *
 * @param [type] $states_list
 *
 * @return bool|int
 */
function _siasar_workflow_find_state_sid($state) {
  static $states_list = null;

  $states_list = is_null($states_list)
    ? workflow_load_multiple_by_name(array('entityforms'))['entityforms']->states
    : $states_list;

  foreach($states_list as $item) {
    if ($item->name == $state)
      return (int) $item->sid;
  }
  return false;
}

/**
 * Helper function to get all revisions' VIDs and timestamps
 *
 * @param int $entityform_id
 * @return array
 */
function _siasar_workflow_get_revision_data($entityform_id) {
  $query = db_select('entityform_revision', 'r')
    ->fields('r')
    ->condition('entityform_id', $entityform_id, '=');

  $result = $query
    ->execute()
    ->fetchAllAssoc('vid');

  return $result;
}
