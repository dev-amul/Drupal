<?php
/**
 * @file
 * feature_siasar_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function feature_siasar_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_cuestionarios:questionnaires.
  $menu_links['main-menu_cuestionarios:questionnaires'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questionnaires',
    'router_path' => 'questionnaires',
    'link_title' => 'Cuestionarios',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_cuestionarios:questionnaires',
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
  );
  // Exported menu link: main-menu_datos:drafts.
  $menu_links['main-menu_datos:drafts'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'drafts',
    'router_path' => 'drafts',
    'link_title' => 'Datos',
    'options' => array(
      'attributes' => array(
        'title' => 'Listado de datos sin enviar',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_datos:drafts',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_incio:<front>.
  $menu_links['main-menu_incio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Início',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_incio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'pt-br',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_inicio:<front>.
  $menu_links['main-menu_inicio:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Inicio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_inicio:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_questionnaires:questionnaires.
  $menu_links['main-menu_questionnaires:questionnaires'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questionnaires',
    'router_path' => 'questionnaires',
    'link_title' => 'Questionnaires',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_questionnaires:questionnaires',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_questionnaires:submission.
  $menu_links['main-menu_questionnaires:submission'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'submission',
    'router_path' => 'submission',
    'link_title' => 'Questionnaires',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_questionnaires:submission',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_questionrios:questionnaires.
  $menu_links['main-menu_questionrios:questionnaires'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'questionnaires',
    'router_path' => 'questionnaires',
    'link_title' => 'Questionários',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_questionrios:questionnaires',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'language' => 'pt-br',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_validacin:resultados.
  $menu_links['main-menu_validacin:resultados'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resultados',
    'router_path' => 'resultados',
    'link_title' => 'Validación',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_validacin:resultados',
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
  );
  // Exported menu link: main-menu_validacin:submissions.
  $menu_links['main-menu_validacin:submissions'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'submissions',
    'router_path' => 'submissions',
    'link_title' => 'Validación',
    'options' => array(
      'attributes' => array(
        'title' => 'Mostrar datos para todos los cuestionarios para validar',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_validacin:submissions',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_validao:resultados.
  $menu_links['main-menu_validao:resultados'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resultados',
    'router_path' => 'resultados',
    'link_title' => 'Validação',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_validao:resultados',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'language' => 'pt-br',
    'menu_links_customized' => 1,
  );
  // Exported menu link: main-menu_validation:resultados.
  $menu_links['main-menu_validation:resultados'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'resultados',
    'router_path' => 'resultados',
    'link_title' => 'Validation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'identifier' => 'main-menu_validation:resultados',
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
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );
  // Exported menu link: user-menu_mis-borradores:drafts.
  $menu_links['user-menu_mis-borradores:drafts'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'drafts',
    'router_path' => 'drafts',
    'link_title' => 'Mis borradores',
    'options' => array(
      'attributes' => array(
        'title' => 'Sus formularios que no han sido aún enviados a validar.',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_mis-borradores:drafts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'es',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_my-drafts:drafts.
  $menu_links['user-menu_my-drafts:drafts'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'drafts',
    'router_path' => 'drafts',
    'link_title' => 'My drafts',
    'options' => array(
      'attributes' => array(
        'title' => 'All your forms that have not been sent for validation yet.',
      ),
      'alter' => TRUE,
      'identifier' => 'user-menu_my-drafts:drafts',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'language' => 'en',
    'menu_links_customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -10,
    'customized' => 0,
    'language' => 'und',
    'menu_links_customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cuestionarios');
  t('Datos');
  t('Home');
  t('Inicio');
  t('Início');
  t('Log out');
  t('Mis borradores');
  t('My drafts');
  t('Questionnaires');
  t('Questionários');
  t('User account');
  t('Validación');
  t('Validation');
  t('Validação');

  return $menu_links;
}
