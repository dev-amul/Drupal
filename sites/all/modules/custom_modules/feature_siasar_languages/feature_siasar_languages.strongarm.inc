<?php
/**
 * @file
 * feature_siasar_languages.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_siasar_languages_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => '0',
    'enabled' => 1,
    'plurals' => '0',
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => '-8',
    'javascript' => '',
    'fallback' => '',
  );
  $export['language_default'] = $strongarm;

  return $export;
}
