<?php
/**
 * @file
 * feature_siasar_entityform_drafts.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_siasar_entityform_drafts_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'draft_entityforms';
  $view->description = 'A list of all entityforms submissions to be as an admin report';
  $view->tag = 'entityforms';
  $view->base_table = 'entityform';
  $view->human_name = 'Draft Entityforms';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Lista de dados a serem enviados';
  $handler->display->display_options['css_class'] = 'view-reports-entityforms';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view own entityform';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Filter';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['sort_asc_label'] = 'Ascending order';
  $handler->display->display_options['exposed_form']['options']['sort_desc_label'] = 'Descending order';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'entityform_id' => 'entityform_id',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'entityform_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty ';
  $handler->display->display_options['empty']['area']['content'] = 'No form submissions available.';
  /* Relationship: Entityform Submission: Uid */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'entityform';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_entity_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entity_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_entity_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Field: Localidad */
  $handler->display->display_options['fields']['field_entidad_local']['id'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['field'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['label'] = 'Administrative division';
  $handler->display->display_options['fields']['field_entidad_local']['element_label_colon'] = FALSE;
  /* Field: Entityform Type: Label */
  $handler->display->display_options['fields']['label_1']['id'] = 'label_1';
  $handler->display->display_options['fields']['label_1']['table'] = 'entityform_type';
  $handler->display->display_options['fields']['label_1']['field'] = 'label';
  $handler->display->display_options['fields']['label_1']['label'] = 'Survey type';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'medium';
  /* Field: Entityform Submission: Date changed */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'entityform';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['hide_alter_empty'] = FALSE;
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = 'View';
  $handler->display->display_options['fields']['link_entityform']['exclude'] = TRUE;
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = '';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_entityform']['text'] = 'edit';
  /* Field: Entityform Submission: Delete Link */
  $handler->display->display_options['fields']['delete_entityform']['id'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['delete_entityform']['field'] = 'delete_entityform';
  $handler->display->display_options['fields']['delete_entityform']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_entityform']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['delete_entityform']['text'] = 'delete';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[link_entityform] | [edit_entityform] | [delete_entityform]';
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Questionnaire type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  /* Filter criterion: User: Current */
  $handler->display->display_options['filters']['uid_current']['id'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['table'] = 'users';
  $handler->display->display_options['filters']['uid_current']['field'] = 'uid_current';
  $handler->display->display_options['filters']['uid_current']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid_current']['value'] = '1';
  /* Filter criterion: Entityform Submission: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['value']['value'] = '2';

  /* Display: Enviados */
  $handler = $view->new_display('page', 'Enviados', 'entityforms_admin_page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'My drafts';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty ';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'En este momento no tienes borradores. Todos tus formularios han sido publicados para los validadores.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['path'] = 'drafts';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Datos';
  $handler->display->display_options['menu']['description'] = 'Listado de datos sin enviar';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['title'] = 'Submissions';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  /* Display: Página */
  $handler = $view->new_display('page', 'Página', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Listado de Datos sin enviar';
  $handler->display->display_options['path'] = 'drafts/sent';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Enviados';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['draft_entityforms'] = $view;

  return $export;
}
