<?php
/**
 * @file
 * feature_siasar_services.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_siasar_services_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'cors_domains';
  $strongarm->value = array(
    'rest/*' => '<mirror>',
  );
  $export['cors_domains'] = $strongarm;

  return $export;
}
