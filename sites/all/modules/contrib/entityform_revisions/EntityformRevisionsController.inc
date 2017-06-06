<?php

/**
 * Entityform Controller supporting revisions
 */
class EntityformRevisionsController extends EntityformController {

  /**
   * Adds revision information to Entityform
   *
   * @param $ids
   * @param array $conditions
   * @param bool $revision_id
   *
   * @return \SelectQuery
   */
  protected function buildQuery($ids, $conditions = array(), $revision_id = FALSE) {
    // Ensure that uid is taken from the {entityform} table,
    // alias changed to revision_changed and add revision_uid.
    $query = parent::buildQuery($ids, $conditions, $revision_id);
    $fields =& $query->getFields();
    unset($fields['changed']);
    $query->addField('revision', 'changed', 'revision_changed');
    $fields['uid']['table'] = 'base';
    $query->addField('revision', 'uid', 'revision_uid');
    return $query;
  }

  /**
   * Saves the revision making sure the {entityform_revision}.uid is the current user
   *
   * @param \Entity $entity
   *
   * @return \Entity|int
   */
  protected function saveRevision($entity) {
    global $user;
    $previous_uid = $entity->uid;
    $entity->uid = $user->uid;
    $entity = parent::saveRevision($entity);
    $entity->uid = $previous_uid;
    return $entity;
  }
}
