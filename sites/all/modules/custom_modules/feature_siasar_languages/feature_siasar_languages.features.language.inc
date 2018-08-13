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
    'weight' => -10,
    'fallback' => '',
    'parent' => '',
  );
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
    'weight' => -8,
    'fallback' => '',
    'parent' => '',
  );
  // Exported language: es-BO.
  $languages['es-BO'] = array(
    'language' => 'es-BO',
    'name' => 'Spanish, Bolivian',
    'native' => 'Español, Bolivia',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es-bo',
    'weight' => -5,
    'fallback' => 'es',
    'parent' => 'es',
  );
  // Exported language: es-CO.
  $languages['es-CO'] = array(
    'language' => 'es-CO',
    'name' => 'Spanish, Colombia',
    'native' => 'Español, Colombia',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'co',
    'weight' => -4,
    'fallback' => 'es',
    'parent' => 'es',
  );
  // Exported language: es-DO.
  $languages['es-DO'] = array(
    'language' => 'es-DO',
    'name' => 'Spanish, Dominican Republic',
    'native' => 'Español, República Dominicana',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es-do',
    'weight' => 0,
    'fallback' => '',
    'parent' => 'es',
  );
  // Exported language: es-HN.
  $languages['es-HN'] = array(
    'language' => 'es-HN',
    'name' => 'Spanish, Honduras',
    'native' => 'Español, Honduras',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'hn',
    'weight' => -3,
    'fallback' => 'es',
    'parent' => 'es',
  );
  // Exported language: es-MX.
  $languages['es-MX'] = array(
    'language' => 'es-MX',
    'name' => ' Spanish, Mexican',
    'native' => 'Español, México',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es-mx',
    'weight' => -1,
    'fallback' => '',
    'parent' => 'es',
  );
  // Exported language: es-NI.
  $languages['es-NI'] = array(
    'language' => 'es-NI',
    'name' => 'Spanish, Nicaragua',
    'native' => 'Español, Nicaragua',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'ni',
    'weight' => -2,
    'fallback' => 'es',
    'parent' => 'es',
  );
  // Exported language: es-PY.
  $languages['es-PY'] = array(
    'language' => 'es-PY',
    'name' => ' Spanish, Paraguayan',
    'native' => 'Español, Paraguay ',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'es-py',
    'weight' => -7,
    'fallback' => 'es',
    'parent' => 'es',
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
    'weight' => -6,
    'fallback' => 'es',
    'parent' => 'es-PY',
  );
  // Exported language: pt-br.
  $languages['pt-br'] = array(
    'language' => 'pt-br',
    'name' => 'Portuguese, Brazil',
    'native' => 'Português, Brasil',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'pt-br',
    'weight' => 1,
    'fallback' => '',
    'parent' => '',
  );
  // Exported language: ru.
  $languages['ru'] = array(
    'language' => 'ru',
    'name' => 'Russian',
    'native' => 'Русский',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 3,
    'formula' => '(((($n%10)==1)&&(($n%100)!=11))?(0):((((($n%10)>=2)&&(($n%10)<=4))&&((($n%100)<10)||(($n%100)>=20)))?(1):2))',
    'domain' => '',
    'prefix' => 'ru',
    'weight' => -9,
    'fallback' => '',
    'parent' => 'en',
  );
  return $languages;
}
