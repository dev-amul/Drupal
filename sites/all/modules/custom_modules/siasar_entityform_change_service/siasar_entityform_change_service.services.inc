<?php

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

  $query = db_query("SELECT e.entityform_id, e.type, workflow.stamp as date
      FROM entityform e
         LEFT JOIN field_data_field_status status ON status.entity_id = e.entityform_id
         LEFT JOIN workflow_node_history workflow ON workflow.revision_id = status.revision_id
      WHERE
        e.type LIKE ('" . $parameters['type'] . "')
        AND e.changed >= " . $parameters['date_from'] . "
        AND e.changed <= " . $parameters['date_to'] . "
        AND ( status.field_status_value = 5 OR workflow.old_sid = 3 )");

  return $query->fetchAllAssoc('entityform_id');
}
