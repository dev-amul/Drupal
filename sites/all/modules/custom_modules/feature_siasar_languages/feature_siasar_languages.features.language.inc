<?php
/**
 * @file
 * feature_siasar_languages.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function feature_siasar_languages_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -8,
    'fallback' => '',
  );
  // Exported language: es-NI.
  $languages['es-NI'] = array(
    'language' => 'es-NI',
    'name' => 'Spanish, Nicaragua',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ni',
    'weight' => 0,
    'fallback' => 'es',
  );
  // Exported language: es-PY.
  $languages['es-PY'] = array(
    'language' => 'es-PY',
    'name' => ' Spanish, Paraguayan',
    'native' => 'Español Paraguay ',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es-py',
    'weight' => 0,
    'fallback' => 'es',
  );
  // Exported language: gn-PY.
  $languages['gn-PY'] = array(
    'language' => 'gn-PY',
    'name' => 'Guarani, Paraguayan',
    'native' => 'Guarani Paraguay',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'gn-py ',
    'weight' => 0,
    'fallback' => 'es',
  );
  // Exported language: pt-br.
  $languages['pt-br'] = array(
    'language' => 'pt-br',
    'name' => 'Portuguese, Brazil',
    'native' => 'Português',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'pt-br',
    'weight' => -9,
    'fallback' => '',
  );
  return $languages;
}
