<?php
/**
 * @file
 * features_pat.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_pat_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_prestador-de-asistencia-tcnica:eform/submit/prestador-de-asistencia-t-cnica.
  $menu_links['main-menu_prestador-de-asistencia-tcnica:eform/submit/prestador-de-asistencia-t-cnica'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'eform/submit/prestador-de-asistencia-t-cnica',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Prestador de Asistencia Técnica',
    'options' => array(
      'identifier' => 'main-menu_prestador-de-asistencia-tcnica:eform/submit/prestador-de-asistencia-t-cnica',
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
  t('Prestador de Asistencia Técnica');

  return $menu_links;
}
