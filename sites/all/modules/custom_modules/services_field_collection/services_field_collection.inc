<?php

function _services_fc_retrieve($fcid) {
  $collections=entity_load('field_collection_item', array($fcid));
  if (!empty($collections)) {
    $collection = array_pop($collections);
    $uri = entity_uri('field_collection_item', $collection);
    $collection->path = url($uri['path'], array('absolute' => TRUE));
  }
  else {
    $collection = FALSE;
  }

  return $collection;
}

// Adds backwards compatibility with regression fixed in #1083242
function _services_fc_create($field_collection) {
  module_load_include('inc', 'services_field_collection', 'services_field_collection_helpers');
  $entity_type = 'field_collection_item';
  $field_collection['field_name'] = isset($field_collection['field_name']) ? $field_collection['field_name'] : $field_collection['name'];
  $entity = entity_create($entity_type, array('field_name' => $field_collection['field_name']));
  $host_entity = entity_load_single($field_collection['host_entity']['resource'], $field_collection['host_entity']['id']);
  $entity->setHostEntity($field_collection['host_entity']['resource'], $host_entity);

  $wrapper = entity_metadata_wrapper($entity_type, $entity);
  _services_fc_set_entity_wrapper_field_values($wrapper, $field_collection);

  $wrapper->save();

  return $field_collection;
}

// Adds backwards compatibility with regression fixed in #1083242
function _services_fc_update($fcid, $field_collection) {
  $collections=entity_load('field_collection_item', array($fcid));
  if (empty($collections[$fcid])) {

    return services_error(t('Collection @fcid not found', array('@fcid' => $fcid)), 404);
  }
  $old_collection = (array)$collections[$fcid];
  $collection = array_merge($old_collection, $field_collection);
  entity_save('field_collection_item', (object)$collection);

  return $collection;
}

function _services_fc_delete($fcid) {
  entity_delete('field_collection_item', $fcid);

  return TRUE;
}

function _services_fc_index($page, $fields, $parameters, $page_size) {
  module_load_include('inc', 'services', 'services.module');
  $fc_select = db_select('field_collection_item', 't');
  services_resource_build_index_query($fc_select, $page, $fields, $parameters, $page_size, 'field_collection_item');
  $results = services_resource_execute_index_query($fc_select);

  return services_resource_build_index_list($results, 'field_collection_item', 'item_id');
}
