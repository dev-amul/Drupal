<?php



/**
 * Helper function to retrieve an entityform's history of revisions, sorted out from newest to oldest.
 *
 * @param int $entity_id
 *
 * @return array
 */
function _siasar_workflow_get_entityform_revisions_history($entity_id) {
  $info = entity_get_info('entityform');

  $revisions = db_select($info['revision table'], 'r')
    ->fields('r', array($info['entity keys']['revision']))
    ->fields('fs', array('field_status_value'))
    ->condition($info['entity keys']['id'], $entity_id);

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
 * @param [type] $state
 * @return void
 */
function _siasar_workflow_find_state_sid($states_list, $state) {
  foreach($states_list as $item) {
    if($item->name == $state)
      return $item->sid;
  }
  return false;
}
