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
    $query->addField('revision', 'changed','revision_changed');
    $fields['uid']['table'] = 'base';
    $query->addField('revision', 'uid', 'revision_uid');
    return $query;
  }

  /**
   * Updates the revision UID with the real user and keeps the entityform author
   * in the context to be set in the entity after saving the revision.
   * It also takes care of setting the changed timestamp when creating default
   * revisions.
   *
   * @param $entity
   *
   * @return array
   */
  protected function preSaveRevision($entity) {
    global $user;
    $context = array();
    $context['previous_uid'] = $entity->uid;
    $entity->uid = $user->uid;
    if (empty($entity->changed) || !$entity->changed) {
      $entity->changed = REQUEST_TIME;
    }
    $context['changed'] = $entity->changed;
    return $context;
  }

  /**
   * Updates the entity after saving its revision
   *
   * @param $entity
   * @param $context
   */
  protected function postSaveRevision($entity, $context) {
    $entity->uid = $context['previous_uid'];
    $entity->changed = $context['changed'];
  }

  /**
   * Saves the revision making sure the {entityform_revision}.uid is the current user
   *
   * @param \Entity $entity
   *
   * @return \Entity|int
   */
  protected function saveRevision($entity) {
    $context = $this->preSaveRevision($entity);
    parent::saveRevision($entity);
    $this->postSaveRevision($entity, $context);
    return $entity;
  }
}
