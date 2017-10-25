<?php

/**
 *  Helper function to save one entityform using JSON as source
 */
 function _siasar_drush_migrate_save_entityform_from_json($entityform, $controller) {
    if (isset($entityform['field_pais'])) {
      $entityform['field_pais'] = country_load($entityform['field_pais']);
    }
  
    if (isset($entityform['id_siasar2'])) {
      $entityform_id = $entityform['id_siasar2'];
      unset($entityform['id_siasar2']);
      $args = array('entityform', $entityform_id, $entityform);
      $operation = 'update';
  
    } else {
      $args = array('entityform', $entityform);
      $operation = 'create';
    }
  
    $result = call_user_func_array(array($controller, $operation), $args);
  
    return $result['entityform_id'];
  }
  
  /**
   * Helper function to save one field collection item using JSON as source
   */
  function _siasar_drush_migrate_save_field_collection_item_from_json($field_collection_item, $controller) {
  
    if (isset($field_collection_item['id_siasar2'])) {
      $field_collection_item_id = $field_collection_item['id_siasar2'];
      unset($field_collection_item['id_siasar2']);
      $args = array('field_collection_item', $field_collection_item_id, $field_collection_item);
      $operation = 'update';
  
    } else {
      $args = array('field_collection_item', $field_collection_item, $field_collection_item);
      $operation = 'create';
    }
  
    $result = call_user_func_array(array($controller, $operation), $args);
  
    return $result['item_id'];
  }
  
  function _print_log($text) {
    printf('%s: %s'.PHP_EOL, (new DateTime('now'))->format("Y-m-d H:i:s"), $text);
  }
