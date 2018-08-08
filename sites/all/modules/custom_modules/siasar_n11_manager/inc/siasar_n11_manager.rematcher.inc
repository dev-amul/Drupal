<?php

class Rematcher {
  var $country;
  var $locations;

  function __construct($country) {
    $this->country = country_load(strtoupper($country));
  }

  function getAllEntityformsAndLocations() {
    $entityforms = $this->getAllEntityformIdsForCountry();
    $this->locations = $this->getAllLocations($entityforms);
  }

  /**
   * Get all entityforms for a country
   *
   * @param string $country (iso2)
   * @return array entity_ids
   */
  function getAllEntityformIdsForCountry() {
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'entityform')
      ->fieldCondition('field_pais', 'iso2', $this->country->iso2);

    $result = $query->execute();
    $ret = array_keys($result['entityform']);

    return $ret;
  }

  /**
   * Get all locations for all entityforms
   *
   * @return void
   */
  function getAllLocations($entityforms) {
    $entityform_locations = array();
    foreach ($entityforms as $el) {
      $entityform_locations[$el] = new stdClass();
      $entityform_locations[$el]->tid = $this->getEntityformLocationFromTID($el);
      $entityform_locations[$el]->name = $this->getTaxonomyNameFromTID($entityform_locations[$el]->tid);
      $entityform_locations[$el]->parent = ($entityform_locations[$el]->name !== null)
        ? $this->getParentFromTID($entityform_locations[$el]->tid)
        : null;
    }
    return $entityform_locations;
  }

  /**
   * Returns location field (field_entidad_local) value for a entityform
   *
   * @param int $entityform_id
   * @return int field_entidad_local_value
   */
  function getEntityformLocationFromTID($entityform_id) {
    $query_string = "SELECT * FROM {entityform} as e
      LEFT JOIN {field_data_field_entidad_local} AS l
        ON l.entity_id = e.entityform_id
        AND l.entity_type = 'entityform'
      WHERE e.entityform_id = :id

      ORDER BY l.revision_id DESC
      LIMIT 1;";

    $placeholders = array(
      ':id' => $entityform_id
    );

    $query = db_query($query_string, $placeholders);
    $result = $query->fetchAllAssoc('entityform_id');

    return (int) $result[$entityform_id]->field_entidad_local_tid;
  }

  /**
   * Get taxonomy term name from ID
   *
   * @param int $tid
   * @return string
   */
  function getTaxonomyNameFromTID($tid) {
    $term = taxonomy_term_load($tid);
    return $term
      ? $term->name
      : null;
  }

  /**
   * Get parent from TID
   */
  function getParentFromTID($tid) {
    $parents = taxonomy_get_parents($tid);
    return !empty($parents)
      ? (int) reset($parents)->tid
      : null;
  }

  /**
   * Rematch and save all elements
   */
  function rematchAndSaveAll() {
    module_load_include('inc', 'siasar_n11_manager', 'inc/siasar_n11_manager.helpers');

    $missed_matches = array();
    $broken_references = array();

    drupal_set_message('Attempting to rematch ' . count($this->locations) . ' entityforms.');

    foreach ($this->locations as $entityform_id => $location) {
      if ($location->name === null) {
        $broken_references[] = $entityform_id;
        continue;
      }

      $new_match = _siasar_n11_manager_get_taxonomy_by_name_and_country('division_administrativa', $location->name, $location->parent, $this->country->iso2);

      if(empty($new_match)) {
        $missed_matches[] = $entityform_id;
        continue;
      }
      reset($new_match);
      $new_match = key($new_match);

      $this->setRematch($entityform_id, $new_match);
    }

      if(count($broken_references) > 0) {
        drupal_set_message('There were ' . count($broken_references) . ' broken references. Those were: ' . implode(', ', $broken_references), 'error');
      }

    if(count($missed_matches) > 0) {
      drupal_set_message('Missed matching for '. count($missed_matches) . ' terms. Those are: ' . implode(', ', $missed_matches), 'error');
    } else {
      drupal_set_message('All terms were rematched');
    }
  }


  function setRematch($entityform_id, $new_match) {
    $entity = entity_load_single('entityform', $entityform_id);
    $wrapper = entity_metadata_wrapper('entityform', $entity);

    $term = taxonomy_term_load($new_match);
    $wrapper->field_entidad_local->set($term);
    $wrapper->save();
  }
}
