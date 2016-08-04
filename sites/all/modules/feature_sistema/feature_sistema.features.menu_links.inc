<?php
/**
 * @file
 * feature_sistema.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_sistema_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_sistema:eform/submit/sistema.
  $menu_links['main-menu_sistema:eform/submit/sistema'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/sistema',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Sistema',
    'options' => array(
      'identifier' => 'main-menu_sistema:eform/submit/sistema',
    ),
    'module' => 'entityform',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sistema');

  return $menu_links;
}
