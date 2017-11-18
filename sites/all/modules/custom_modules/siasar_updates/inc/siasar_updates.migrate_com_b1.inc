<?php

class SiasarUpdatesMigrateComB1 {

  public $vid = null;
  public $saved_terms = array();

  /**
   *  Creates new taxonomy for new field field_data_collection_method
   */
  function createNewB1Taxonomy() {
    $new_voc = new stdClass();
    $new_voc->name = 'Data collection method';
    $new_voc->machine_name = 'data_collection_method';
    $new_voc->language = LANGUAGE_NONE;
    $new_voc->i18n_mode = '1';

    taxonomy_vocabulary_save($new_voc);

    $this->vid = $new_voc->vid;
  }

  /**
   *  Creates terms for this new Taxonomy
   */
  function createNewB1TaxonomyTerms() {
    $terms = array(
      'Levantamiento general aproximado (entrevistas, control parcial de las viviendas)',
      'Levantamiento utilizando el formulario auxiliar',
      'Levantamiento muestral'
    );

    foreach ($terms as $term) {
      $term_to_save = (object) array(
        'name' => $term,
        'vid' => $this->vid,
      );
      taxonomy_term_save($term_to_save);
      $this->saved_terms[] = $term_to_save;
    }
  }

  /**
   *  Migrates the data from old fields to the new field.
   */
  function migrateB1data() {
    $communities_list = $this->requestListCommunitiesEntityforms();

    foreach($communities_list as $entityform_id => $entityform) {
      $this->migrateB1dataOneEntityform($entityform_id);
    }
    return count($communities_list);
  }

  /**
   *  Provided one entityform ID, migrates B1 data.
   */
  function migrateB1dataOneEntityform($entityform_id) {
    $entity = entity_load('entityform', array($entityform_id), array(), true)[$entityform_id];
    $wrapper = entity_metadata_wrapper('entityform', $entity);

    $old_values = array(
      0 => $wrapper->field_com_lev_general->value(),
      1 => $wrapper->field_com_lev_utilform->value(),
      2 => $wrapper->field_com_lev_muestral->value(),
    );
    $new_values = array();
    foreach($old_values as $i => $v) {
      if(!$old_values[$i]) continue;

      $new_values[] = $this->saved_terms[$i];
    }
    $wrapper->field_data_collection_method->set($new_values);
    $wrapper->save();
  }

  /**
   *  Gets a list of saved Communities
   */
  function requestListCommunitiesEntityforms() {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'entityform')
    ->entityCondition('bundle', 'comunidad');

    $result = $query->execute();

    return $result['entityform'];
  }
}
