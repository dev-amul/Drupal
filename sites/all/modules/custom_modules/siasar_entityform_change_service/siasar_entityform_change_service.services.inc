<?php

/**
 * Index callback for entityform_change_state service.
 *
 * @param $page
 * @param $parameters
 *
 * @return mixed
 * @throws \Exception
 */
function _siasar_entityform_change_service_services_index($page, $parameters) {
  if (!isset($parameters['type'])) {
    $parameters['type'] = '%';
  }

  if (!isset($parameters['date_from'])) {
    $parameters['date_from'] = 0;
  }

  if (!isset($parameters['date_to'])) {
    $date = new DateTime();
    $parameters['date_to'] = $date->getTimestamp();
  }

  if (!isset($parameters['country'])) {
    $parameters['country'] = '%';
  }

  $query = db_query(
    "WITH entityform_validated
     AS (SELECT er.entityform_id
         FROM entityform_revision er
         LEFT JOIN workflow_node_history wh ON er.vid = wh.revision_id
         LEFT JOIN field_data_field_status status ON status.entity_id = er.entityform_id
         LEFT JOIN entityform_computable_states computable ON er.entityform_id = computable.entityform_id
         WHERE wh.sid = 4
         AND (status.field_status_value <> 4
              OR (status.field_status_value = 4 AND computable.computable = 0))
         GROUP  BY er.entityform_id)
     SELECT e.entityform_id, e.type, country.field_pais_iso2
     FROM entityform e
     LEFT JOIN field_data_field_pais country ON (country.entity_id = e.entityform_id AND country.entity_type = 'entityform' )
     LEFT JOIN field_data_field_status status ON status.entity_id = e.entityform_id
     WHERE e.type LIKE (:type)
     AND e.entityform_id IN (SELECT entityform_id FROM entityform_validated)
     AND country.field_pais_iso2 LIKE (:country)
     AND e.entityform_id = (SELECT entityform_id
                            FROM   entityform_revision
                            WHERE  entityform_id = e.entityform_id
                            GROUP  BY entityform_id
                            HAVING Max(changed) >= (:date_from) AND Max(changed) <= (:date_to))",
    [
      ':type' => $parameters['type'],
      ':date_from' => $parameters['date_from'],
      ':date_to' => $parameters['date_to'],
      ':country' => $parameters['country'],
    ]
  );

  $results = $query->fetchAll();

  // Cast id string to int.
  foreach ($results as $key => $result) {
    $results[$key]->entityform_id = (int)$result->entityform_id;
  }

  return $results;
}
