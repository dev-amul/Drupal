<?php

/**
 * @file
 * Exposes entityforms field structure to the Services API.
 */

/**
 * Callback for retrieving the fields resources.
 */
function _entityform_structure_web_service_retrieve($bundle) {
  $entity_type = 'entityform';
  return entityform_structure_web_service_get_fields($entity_type, $bundle);
}

/**
 * Callback for the entityforms index.
 */
function _entityform_structure_web_service_index($page, $parameters) {
  $form_fields = new stdClass();
  $info = entity_get_info('entityform');

  foreach ($info['bundles'] as $name => $bundle) {
    // Display just the entityform bundle name.
    
    $form_fields->$name = $bundle['label'];
  }

  return $form_fields;
}
