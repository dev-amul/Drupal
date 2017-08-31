<?php
/**
 * @file
 * feature_siasar_theme_settings.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_siasar_theme_settings_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-front-page-menu_calidad-de-agua:eform/submit/waq.
  $menu_links['menu-front-page-menu_calidad-de-agua:eform/submit/waq'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/waq',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Calidad de agua',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_calidad-de-agua:eform/submit/waq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_rellenar-cuestionarios:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_check-results:<nolink>.
  $menu_links['menu-front-page-menu_check-results:<nolink>'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Check results',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_check-results:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-front-page-menu_community:eform/submit/comunidad.
  $menu_links['menu-front-page-menu_community:eform/submit/comunidad'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/comunidad',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Community',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_community:eform/submit/comunidad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_fill-survey:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_comunidad:eform/submit/comunidad.
  $menu_links['menu-front-page-menu_comunidad:eform/submit/comunidad'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/comunidad',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Comunidad',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_comunidad:eform/submit/comunidad',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_rellenar-cuestionarios:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_consultar-los-resultados:<nolink>.
  $menu_links['menu-front-page-menu_consultar-los-resultados:<nolink>'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Consultar los resultados',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_consultar-los-resultados:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-front-page-menu_fill-survey:<nolink>.
  $menu_links['menu-front-page-menu_fill-survey:<nolink>'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Fill survey',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_fill-survey:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-front-page-menu_formulario-de-pruebas:eform/submit/testingpurposes.
  $menu_links['menu-front-page-menu_formulario-de-pruebas:eform/submit/testingpurposes'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/testingpurposes',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Formulario de Pruebas',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_formulario-de-pruebas:eform/submit/testingpurposes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_rellenar-cuestionarios:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_mis-borradores:drafts.
  $menu_links['menu-front-page-menu_mis-borradores:drafts'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'drafts',
    'router_path' => 'drafts',
    'link_title' => 'Mis borradores',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_mis-borradores:drafts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_consultar-los-resultados:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_my-drafts:drafts.
  $menu_links['menu-front-page-menu_my-drafts:drafts'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'drafts',
    'router_path' => 'drafts',
    'link_title' => 'My drafts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_my-drafts:drafts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_check-results:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_prestador-de-asistencia-tcnica:eform/submit/prestador_de_asistencia_t_cnica.
  $menu_links['menu-front-page-menu_prestador-de-asistencia-tcnica:eform/submit/prestador_de_asistencia_t_cnica'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/prestador_de_asistencia_t_cnica',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Prestador de Asistencia Técnica',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_prestador-de-asistencia-tcnica:eform/submit/prestador_de_asistencia_t_cnica',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_rellenar-cuestionarios:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_prestador-de-servicio:eform/submit/prestador_de_servicio.
  $menu_links['menu-front-page-menu_prestador-de-servicio:eform/submit/prestador_de_servicio'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/prestador_de_servicio',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Prestador de Servicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_prestador-de-servicio:eform/submit/prestador_de_servicio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_rellenar-cuestionarios:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_rellenar-cuestionarios:<nolink>.
  $menu_links['menu-front-page-menu_rellenar-cuestionarios:<nolink>'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => 'Rellenar cuestionarios',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_rellenar-cuestionarios:<nolink>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: menu-front-page-menu_service-provider:eform/submit/prestador_de_servicio.
  $menu_links['menu-front-page-menu_service-provider:eform/submit/prestador_de_servicio'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/prestador_de_servicio',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Service provider',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_service-provider:eform/submit/prestador_de_servicio',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_fill-survey:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_sistema:eform/submit/sistema.
  $menu_links['menu-front-page-menu_sistema:eform/submit/sistema'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/sistema',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Sistema',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_sistema:eform/submit/sistema',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_rellenar-cuestionarios:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_system:eform/submit/sistema.
  $menu_links['menu-front-page-menu_system:eform/submit/sistema'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/sistema',
    'router_path' => 'eform/submit/%',
    'link_title' => 'System',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_system:eform/submit/sistema',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_fill-survey:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_technical-assistance-provider:eform/submit/prestador_de_asistencia_t_cnica.
  $menu_links['menu-front-page-menu_technical-assistance-provider:eform/submit/prestador_de_asistencia_t_cnica'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/prestador_de_asistencia_t_cnica',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Technical assistance provider',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_technical-assistance-provider:eform/submit/prestador_de_asistencia_t_cnica',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_fill-survey:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_testing-form:eform/submit/testingpurposes.
  $menu_links['menu-front-page-menu_testing-form:eform/submit/testingpurposes'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/testingpurposes',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Testing form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_testing-form:eform/submit/testingpurposes',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_fill-survey:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_validacin:resultados.
  $menu_links['menu-front-page-menu_validacin:resultados'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'resultados',
    'router_path' => 'resultados',
    'link_title' => 'Validación',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_validacin:resultados',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_consultar-los-resultados:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_validation:resultados.
  $menu_links['menu-front-page-menu_validation:resultados'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'resultados',
    'router_path' => 'resultados',
    'link_title' => 'Validation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_validation:resultados',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_check-results:<nolink>',
  );
  // Exported menu link: menu-front-page-menu_water-quality:eform/submit/waq.
  $menu_links['menu-front-page-menu_water-quality:eform/submit/waq'] = array(
    'menu_name' => 'menu-front-page-menu',
    'link_path' => 'eform/submit/waq',
    'router_path' => 'eform/submit/%',
    'link_title' => 'Water quality',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'menu-front-page-menu_water-quality:eform/submit/waq',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
    'parent_identifier' => 'menu-front-page-menu_fill-survey:<nolink>',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Calidad de agua');
  t('Check results');
  t('Community');
  t('Comunidad');
  t('Consultar los resultados');
  t('Fill survey');
  t('Formulario de Pruebas');
  t('Mis borradores');
  t('My drafts');
  t('Prestador de Asistencia Técnica');
  t('Prestador de Servicio');
  t('Rellenar cuestionarios');
  t('Service provider');
  t('Sistema');
  t('System');
  t('Technical assistance provider');
  t('Testing form');
  t('Validación');
  t('Validation');
  t('Water quality');

  return $menu_links;
}
