<?php
/**
 * @file
 * feature_siasar_views_endpoints.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_siasar_views_endpoints_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'countries';
  $view->description = 'Countries list for REST endpoint';
  $view->tag = 'services';
  $view->base_table = 'countries_country';
  $view->human_name = 'REST Countries';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Countries: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'countries_country';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Campo: Countries: Official name */
  $handler->display->display_options['fields']['official_name']['id'] = 'official_name';
  $handler->display->display_options['fields']['official_name']['table'] = 'countries_country';
  $handler->display->display_options['fields']['official_name']['field'] = 'official_name';
  /* Campo: Countries: ISO2 */
  $handler->display->display_options['fields']['iso2']['id'] = 'iso2';
  $handler->display->display_options['fields']['iso2']['table'] = 'countries_country';
  $handler->display->display_options['fields']['iso2']['field'] = 'iso2';
  /* Criterio de ordenación: Countries: ISO2 */
  $handler->display->display_options['sorts']['iso2']['id'] = 'iso2';
  $handler->display->display_options['sorts']['iso2']['table'] = 'countries_country';
  $handler->display->display_options['sorts']['iso2']['field'] = 'iso2';
  /* Criterio de filtrado: Countries: Activado */
  $handler->display->display_options['filters']['enabled']['id'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['table'] = 'countries_country';
  $handler->display->display_options['filters']['enabled']['field'] = 'enabled';
  $handler->display->display_options['filters']['enabled']['value'] = '1';

  /* Display: Servicios */
  $handler = $view->new_display('services', 'Servicios', 'services_1');
  $handler->display->display_options['path'] = 'countries';
  $export['countries'] = $view;

  return $export;
}
