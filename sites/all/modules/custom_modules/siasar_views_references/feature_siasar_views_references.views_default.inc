<?php
/**
 * @file
 * siasar_views_references.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function siasar_views_references_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'users_select_view';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'users';
  $view->human_name = 'Users Select View';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todo -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Campo: Usuario: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Criterio de ordenación: Usuario: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filtro contextual: Campo: País (field_pais) */
  $handler->display->display_options['arguments']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['arguments']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pais_iso2']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_options']['code'] = 'global $user;
$user_full = user_load($user->uid);
return $user_full->field_pais[\'und\'][0][\'iso2\'];';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pais_iso2']['limit'] = '0';
  /* Criterio de filtrado: Usuario: Aprobado */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Criterio de filtrado: Usuario: Roles */
  $handler->display->display_options['filters']['rid']['id'] = 'rid';
  $handler->display->display_options['filters']['rid']['table'] = 'users_roles';
  $handler->display->display_options['filters']['rid']['field'] = 'rid';
  $handler->display->display_options['filters']['rid']['value'] = array(
    7 => '7',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_user');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Campo: País (field_pais) */
  $handler->display->display_options['arguments']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['arguments']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pais_iso2']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_options']['code'] = 'global $user;
$user_full = user_load($user->uid);
return $user_full->field_pais[\'und\'][0][\'iso2\'];';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pais_iso2']['limit'] = '0';
  $export['users_select_view'] = $view;

  return $export;
}
