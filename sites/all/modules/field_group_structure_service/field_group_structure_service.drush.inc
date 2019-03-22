<?php

/**
 * Implements hook_drush_cache_clear().
 */
function field_group_structure_service_drush_cache_clear(&$types) {
  $types['field_group_structure_service'] = '_field_group_structure_service_cache_clear';
}

/**
 * Clears the field_group_structure_service cache.
 */
function _field_group_structure_service_cache_clear() {
  cache_clear_all('*', 'cache_field_group_structure_service', TRUE);
}
