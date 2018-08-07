<?php

class Rematcher {
  var $country;
  var $entityforms;
  var $locations;


  function __construct($country) {
    $this->country = country_load(strtoupper($country));
    $this->entityforms = $this->getAllEntityformIdsForCountry();
    $this->locations = $this->getAllLocations();
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
      ->fieldCondition('field_pais', 'iso2', $this->$country->iso2);

    $result = $query->execute();
    $ret = array_keys($result['entityform']);

    return $ret;
  }

  /**
   * Get all locations for all entityforms
   *
   * @return void
   */
  function getAllLocations() {
    $entifyform_locations = array();
    foreach ($this->entityforms as $el) {
      $entifyform_locations[$el]['tid'] = $this->getEntityformLocationTID($el);
      $entifyform_locations[$el]['name'] = $this->getTaxonomyNameFromTID($entifyform_locations[$el]['tid']);
    }
    return $entityform_locations;
  }

  /**
   * Returns location field (field_entidad_local) value for a  entitform
   *
   * @param int $entityform_id 
   * @return int field_entidad_local_value
   */
  function getEntityformLocationTID($entityform_id) {
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
    return $term->name;
  }
}
