<?php
/**
 * @file
 * feature_siasar_theme_settings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_siasar_theme_settings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-front-page-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-front-page-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 1,
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '<front>',
    'roles' => array(
      'usuario autenticado' => 2,
    ),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'siasar_material' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'siasar_material',
        'weight' => -10,
      ),
    ),
    'title' => '¿Qué desea hacer?',
    'visibility' => 1,
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'main-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
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
        'region' => 'user_nav',
        'status' => 1,
        'theme' => 'siasar_material',
        'weight' => -12,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'user-menu',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'system',
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
        'region' => 'user_nav',
        'status' => 1,
        'theme' => 'siasar_material',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'login',
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'seven',
        'weight' => -10,
      ),
      'siasar_material' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'siasar_material',
        'weight' => -11,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
