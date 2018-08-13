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
   * Get number of parents from TID
   *
   * @param int $tid
   * @return int
   */
  function getParentFromTID($tid) {
    $parent = taxonomy_get_parents($tid);
    return reset($parent)->name;
  }

  /**
   * Rematch and save all elements
   */
  function rematchAndSaveAll() {
    $missed_matches = array();
    $broken_references = array();

    drupal_set_message('Attempting to rematch ' . count($this->locations) . ' entityforms.');

    foreach ($this->locations as $entityform_id => $location) {
      if ($location->name === null) {
        $broken_references[] = $entityform_id;
        continue;
      }

      $new_match = $this->findRematch($location);

      if(empty($new_match)) {
        $missed_matches[] = $entityform_id;
        continue;
      }
      reset($new_match);
      $new_match = key($new_match);

      $this->setRematch($entityform_id, $new_match);
    }

      if(count($broken_references) > 0) {
        drupal_set_message('There were ' . count($broken_references) . ' broken references. Those were: ' . implode(', ', $broken_references));
      }

    if(count($missed_matches) > 0) {
      drupal_set_message('Missed matching for '. count($missed_matches) . ' terms. Those are: ' . implode(', ', $missed_matches));
    } else {
      drupal_set_message('All terms were rematched');
    }
  }

  function findRematch($location) {
    $query = db_query(
      'SELECT td.* FROM {taxonomy_term_data} as td
        INNER JOIN {taxonomy_vocabulary} tv ON td.vid = tv.vid
        INNER JOIN {field_data_field_pais} fp
          ON fp.entity_type = :entity_type
            AND fp.bundle = :vocabulary_name
            AND fp.field_pais_iso2 = :country_code
            AND fp.entity_id = td.tid

        WHERE tv.machine_name = :vocabulary_name
          AND td.name = :term_name'
      ,
      array(
        ':vocabulary_name' => 'division_administrativa',
        ':term_name' => $location->name,
        ':country_code' => $this->country->iso2,
        ':entity_type' => 'taxonomy_term'
      )
    );
    $filter = function($key) use ($location) {
      $match_parent = reset(taxonomy_get_parents($key))->name;
      return ($location->parent === $match_parent);
    };

    $results = $query->fetchAllAssoc('tid');
    $filtered_results = array_filter($results, $filter, ARRAY_FILTER_USE_KEY);

    return $filtered_results;
  }

  /**
   * Save new match value for term
   *
   * @param [type] $entityform_id
   * @param [type] $new_match
   * @return void
   */
  function setRematch($entityform_id, $new_match) {
    $entity = entity_load_single('entityform', $entityform_id);
    $wrapper = entity_metadata_wrapper('entityform', $entity);
    $wrapper->field_entidad_local->set($new_match);
    $wrapper->save();
  }
}
