<?php
/**
 * @file
 * configuracion_lenguaje.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function configuracion_lenguaje_locale_default_languages() {
  $languages = array();

  // Exported language: es.
  $languages['es'] = array(
    'language' => 'es',
    'name' => 'Spanish',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'es',
    'weight' => -10,
    'fallback' => '',
  );
  // Exported language: es-BO.
  $languages['es-BO'] = array(
    'language' => 'es-BO',
    'name' => 'Spanish, Bolivian',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es-bo',
    'weight' => 0,
    'fallback' => 'es',
  );
  // Exported language: es-CO.
  $languages['es-CO'] = array(
    'language' => 'es-CO',
    'name' => 'Spanish, Colombia',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'co',
    'weight' => 0,
    'fallback' => 'es',
  );
  // Exported language: es-HN.
  $languages['es-HN'] = array(
    'language' => 'es-HN',
    'name' => 'Spanish, Honduras',
    'native' => 'Español',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'hn',
    'weight' => 0,
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
  return $languages;
}
