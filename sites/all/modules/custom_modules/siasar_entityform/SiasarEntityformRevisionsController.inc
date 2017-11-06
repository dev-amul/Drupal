<?php

/**
 * Controller class for EntityformRevisions. Extends
 * EntityformRevisionController Class SiasarEntityformRevisionsController
 */
class SiasarEntityformRevisionsController extends EntityformRevisionsController {



  /**
   * Overrides method. Add fields for computable and entityform_revision to the
   * entity.
   *
   * @param $ids
   * @param array $conditions
   * @param bool $revision_id
   *
   * @return \SelectQuery
   */
  protected function buildQuery($ids, $conditions = [], $revision_id = FALSE) {

    $query = parent::buildQuery($ids, $conditions, $revision_id);
    $query->join('entityform_computable_states', 'states', 'states.entityform_id = base.entityform_id');

    $query->addField('states', 'computable', 'computable');
    $query->addField('states', 'entityform_revision', 'computable_revision');

    return $query;
  }

  /**
   * Save the current EntityformRevision and set an initial state to the entity.
   *
   * @param $entity
   * @param \DatabaseTransaction|NULL $transaction
   *
   * @return bool|int|void
   */
  public function save($entity, DatabaseTransaction $transaction = NULL) {
    parent::save($entity, $transaction);
    if ($this->entityFormIsNew($entity->{$this->idKey})) {
      db_merge('entityform_computable_states')
        ->key(array(
          'entityform_id' => $entity->{$this->idKey},
        ))
        ->insertFields(array(
          'entityform_id'       => $entity->{$this->idKey},
          'computable'          => 0,
          'entityform_revision' => NULL,
        ))
        ->execute();

    }
    _update_processing_queue_element($entity->{$this->idKey});

    if ($entity->field_status['und'][0]['value'] == SIASAR_ENTITYFORM_STATE_VALIDATED) {
      _computable_revision($entity->{$this->idKey});
    }
  }

  /**
   * Helper function for checking if the entityform is new or not. In our case,
   * the form is new if it is not present in the computable_entityform_states.
   *
   * @param $id Integer the Entityform ID
   *
   * @return bool TRUE/FALSE
   */
  private function entityFormIsNew($id) {
    return _query_computable_revision($id);
  }

  /**
   * Loads the entityforms by IDs
   *
   * @param array $ids
   * @param array $conditions
   *
   * @return array
   */
  public function load($ids = array(), $conditions = array()) {

    // Workflow creates a LOCAL_TASK menu link for each entityform which can be
    // displayed as an administration URL. It doesn't provide an ID to be loaded
    // therefore it breaks the SQL and returns an error.
    // We're handling this error at this point as the Workflow module doesn't
    // seem to have this issue reported yet.
    // The error can be reproduced by going to the /admin/structure URL.

    if (count($ids) === 1 && reset($ids) === '') {
      return array();
    }

    return parent::load($ids, $conditions);
  }
}