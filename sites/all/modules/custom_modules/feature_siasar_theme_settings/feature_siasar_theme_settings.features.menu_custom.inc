<?php
/**
 * @file
 * feature_siasar_theme_settings.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_siasar_theme_settings_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-front-page-menu.
  $menus['menu-front-page-menu'] = array(
    'menu_name' => 'menu-front-page-menu',
    'title' => 'Front Page Menu',
    'description' => 'Menu showing options on front page content block.',
    'language' => 'und',
    'i18n_mode' => 5,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Front Page Menu');
  t('Menu showing options on front page content block.');

  return $menus;
}
