<?php
/**
 * @file
 * configuracion_lenguaje.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function configuracion_lenguaje_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language',
    'i18n_block_language' => array(
      0 => 'es',
      1 => 'pt-br',
    ),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(
      'usuario anónimo' => 1,
    ),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'siasar_material' => array(
        'region' => 'header',
        'status' => 1,
        'theme' => 'siasar_material',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['locale-language_content'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'language_content',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'siasar_material' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'siasar_material',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
