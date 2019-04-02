<?php

function _siasar_entityform_change_service_services_index($page, $parameters) {

  if (!isset($parameters['date_start'])) {
    $parameters['date_start'] = 0;
  }

  if (!isset($parameters['date_end'])) {
    $date = new DateTime();
    $parameters['date_end'] = $date->getTimestamp();
  }

  $query = db_query("SELECT e.entityform_id, e.type, workflow.stamp as date
      FROM entityform e
         LEFT JOIN field_data_field_status status ON status.entity_id = e.entityform_id
         LEFT JOIN workflow_node_history workflow ON workflow.revision_id = status.revision_id
      WHERE
        e.changed >= " . $parameters['date_start'] . "
        AND e.changed <= " . $parameters['date_end'] . "
        AND ( status.field_status_value = 5 OR workflow.old_sid = 3 )");

  return $query->fetchAllAssoc('entityform_id');
}
