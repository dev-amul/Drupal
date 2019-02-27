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
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => '0',
    'enabled' => '1',
    'plurals' => '2',
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'es',
    'weight' => '-8',
    'javascript' => 'ja98a0y6GPfHs9byJ5RR6emUxhX-O7MXDSAHjUVZKUQ',
    'fallback' => '',
    'parent' => '',
  );
  $export['language_default'] = $strongarm;

  return $export;
}
