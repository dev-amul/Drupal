<?php

function _siasar_entityform_change_service_services_index($page, $parameters)
{
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

    $query = db_query("SELECT e.entityform_id,
           e.type,
           workflow.stamp AS date
        FROM entityform e
               LEFT JOIN field_data_field_status status
                      ON status.entity_id = e.entityform_id
               LEFT JOIN (select *, RANK() over (partition by nid order by stamp desc) latest
            from workflow_node_history) workflow
          ON workflow.revision_id = status.revision_id
        WHERE e.type LIKE (:type)
               AND e.changed >= (:date_from)
               AND e.changed <= (:date_to)
               AND ( status.field_status_value = 5 OR workflow.old_sid = 3 )
               AND status.field_status_value <> 4
               AND workflow.latest = 1", array(':type' => $parameters['type'], ':date_from' => $parameters['date_from'], ':date_to' => $parameters['date_to']));

    return $query->fetchAllAssoc('entityform_id');
}
