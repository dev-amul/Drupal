<?php
/**
 * @file
 * feature_siasar_views_reports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_siasar_views_reports_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'results_entityforms';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Resultados de los formularios';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Resultados de las encuestas';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'view any entityform';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'entityform_results_view',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Aplicar';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Reiniciar';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Ordenar por';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elementos por página';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Todo -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Desplazamiento';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« primero';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ anterior';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'siguiente ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'última »';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'entityform_id' => 'entityform_id',
    'field_entity_name' => 'field_entity_name',
    'field_entidad_local' => 'field_entidad_local',
    'created' => 'created',
    'field_nombre_completo' => 'field_nombre_completo',
    'field_nombre_completo_1' => 'field_nombre_completo_1',
    'label' => 'label',
    'draft' => 'draft',
    'field_cuestionario_validado' => 'field_cuestionario_validado',
    'edit_entityform' => 'edit_entityform',
    'link_entityform' => 'link_entityform',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'entityform_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_entity_name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_entidad_local' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nombre_completo' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_nombre_completo_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'label' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'draft' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_cuestionario_validado' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'link_entityform' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nothing' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['sticky'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  /* Relationship: Entityform Submission: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Field: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['relationships']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['relationships']['field_pais_iso2']['relationship'] = 'user';
  $handler->display->display_options['relationships']['field_pais_iso2']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_reference_target_id']['id'] = 'field_user_reference_target_id';
  $handler->display->display_options['relationships']['field_user_reference_target_id']['table'] = 'field_data_field_user_reference';
  $handler->display->display_options['relationships']['field_user_reference_target_id']['field'] = 'field_user_reference_target_id';
  $handler->display->display_options['relationships']['field_user_reference_target_id']['label'] = 'Encuestador field_user_reference';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Nombre Completo */
  $handler->display->display_options['fields']['field_nombre_completo']['id'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_nombre_completo']['label'] = 'Usuario';
  $handler->display->display_options['fields']['field_nombre_completo']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_rating']['id'] = 'field_rating';
  $handler->display->display_options['fields']['field_rating']['table'] = 'field_data_field_rating';
  $handler->display->display_options['fields']['field_rating']['field'] = 'field_rating';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Editar';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = 'Ver';
  $handler->display->display_options['fields']['link_entityform']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Acciones';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[link_entityform] [edit_entityform]';
  /* Sort criterion: Entityform Submission: Date changed */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'entityform';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
  /* Filter criterion: Field: País (field_pais) */
  $handler->display->display_options['filters']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['group'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator_id'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['label'] = 'País (ISO2)';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['identifier'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  /* Filter criterion: Entityform Type: Machine-readable name */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo de cuestionario';
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
  /* Filter criterion: Entityform Submission: Validado (field_cuestionario_validado) */
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['id'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['table'] = 'field_data_field_cuestionario_validado';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['field'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['operator_id'] = 'field_cuestionario_validado_value_op';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['label'] = 'Validado';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['operator'] = 'field_cuestionario_validado_value_op';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['identifier'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Usuario/a';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  /* Filter criterion: Entityform Submission: Location. SIASAR Hierarchical Select */
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['id'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['field'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['operator_id'] = 'field_entidad_local_siasar_hierarchical_select_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['label'] = 'Location. SIASAR Hierarchical Select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['operator'] = 'field_entidad_local_siasar_hierarchical_select_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['identifier'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['vocabulary'] = 'division_administrativa';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['display_comment'] = 'Esta vista está modificada mediante código en el módulo "feature_siasar_entityform_results"';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No hay resultados con las opciones que ha elegido.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['label'] = 'ID';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_entity_name']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Entityform Submission: Localidad */
  $handler->display->display_options['fields']['field_entidad_local']['id'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['field'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entidad_local']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_entidad_local']['settings'] = array(
    'linked' => 0,
  );
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Fecha';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Nombre Completo */
  $handler->display->display_options['fields']['field_nombre_completo']['id'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_nombre_completo']['label'] = 'Digitador';
  $handler->display->display_options['fields']['field_nombre_completo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nombre_completo']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_nombre_completo']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: User: Nombre Completo */
  $handler->display->display_options['fields']['field_nombre_completo_1']['id'] = 'field_nombre_completo_1';
  $handler->display->display_options['fields']['field_nombre_completo_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['fields']['field_nombre_completo_1']['label'] = 'Encuestador';
  $handler->display->display_options['fields']['field_nombre_completo_1']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_nombre_completo_1']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Entityform Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'entityform_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Tipo de cuestionario';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Draft */
  $handler->display->display_options['fields']['draft']['id'] = 'draft';
  $handler->display->display_options['fields']['draft']['table'] = 'entityform';
  $handler->display->display_options['fields']['draft']['field'] = 'draft';
  $handler->display->display_options['fields']['draft']['label'] = 'Borrador';
  $handler->display->display_options['fields']['draft']['separator'] = '';
  /* Field: Entityform Submission: Validado */
  $handler->display->display_options['fields']['field_cuestionario_validado']['id'] = 'field_cuestionario_validado';
  $handler->display->display_options['fields']['field_cuestionario_validado']['table'] = 'field_data_field_cuestionario_validado';
  $handler->display->display_options['fields']['field_cuestionario_validado']['field'] = 'field_cuestionario_validado';
  $handler->display->display_options['fields']['field_cuestionario_validado']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_cuestionario_validado']['empty'] = '-';
  $handler->display->display_options['fields']['field_cuestionario_validado']['type'] = 'i18n_list_default';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Editar';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = 'Ver';
  $handler->display->display_options['fields']['link_entityform']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Acciones';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[link_entityform] | [edit_entityform]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: País (field_pais) */
  $handler->display->display_options['filters']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['group'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator_id'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['label'] = 'País (ISO2)';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['identifier'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  /* Filter criterion: Entityform Submission: Location. SIASAR Hierarchical Select */
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['id'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['field'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['value'] = '';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['group'] = 1;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['operator_id'] = 'field_entidad_local_siasar_hierarchical_select_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['label'] = 'División administrativa';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['operator'] = 'field_entidad_local_siasar_hierarchical_select_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['identifier'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['group_info']['label'] = 'Location. SIASAR Hierarchical Select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['group_info']['identifier'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['vocabulary'] = 'division_administrativa';
  /* Filter criterion: Entityform Type: Machine-readable name */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo de cuestionario';
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
  /* Filter criterion: Entityform Submission: Draft */
  $handler->display->display_options['filters']['draft']['id'] = 'draft';
  $handler->display->display_options['filters']['draft']['table'] = 'entityform';
  $handler->display->display_options['filters']['draft']['field'] = 'draft';
  $handler->display->display_options['filters']['draft']['group'] = 1;
  $handler->display->display_options['filters']['draft']['exposed'] = TRUE;
  $handler->display->display_options['filters']['draft']['expose']['operator_id'] = 'draft_op';
  $handler->display->display_options['filters']['draft']['expose']['label'] = 'Draft';
  $handler->display->display_options['filters']['draft']['expose']['operator'] = 'draft_op';
  $handler->display->display_options['filters']['draft']['expose']['identifier'] = 'draft';
  $handler->display->display_options['filters']['draft']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['draft']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['draft']['group_info']['label'] = 'Borrador';
  $handler->display->display_options['filters']['draft']['group_info']['identifier'] = 'draft';
  $handler->display->display_options['filters']['draft']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'No',
      'operator' => '=',
      'value' => array(
        'value' => '0',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Sí',
      'operator' => '=',
      'value' => array(
        'value' => '1',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => '',
      'operator' => '=',
      'value' => array(
        'value' => '',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Entityform Submission: Validado (field_cuestionario_validado) */
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['id'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['table'] = 'field_data_field_cuestionario_validado';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['field'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['operator_id'] = 'field_cuestionario_validado_value_op';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['label'] = 'Validado';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['operator'] = 'field_cuestionario_validado_value_op';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['identifier'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Usuario/a';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['path'] = 'resultados';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Ver';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 1;
  $handler->display->display_options['menu']['context_only_inline'] = 1;

  /* Display: Exportación de datos */
  $handler = $view->new_display('views_data_export', 'Exportación de datos', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'siasar_resultados_encuestas-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['separator'] = ';';
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  /* Field: Entityform Type: Label */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'entityform_type';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = 'Tipo de cuestionario';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Field: País */
  $handler->display->display_options['fields']['field_pais']['id'] = 'field_pais';
  $handler->display->display_options['fields']['field_pais']['table'] = 'field_data_field_pais';
  $handler->display->display_options['fields']['field_pais']['field'] = 'field_pais';
  $handler->display->display_options['fields']['field_pais']['type'] = 'country_alpha_2';
  /* Field: Entityform Submission: Localidad */
  $handler->display->display_options['fields']['field_entidad_local']['id'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['field'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['type'] = 'taxonomy_term_reference_link';
  /* Field: User: Nombre Completo */
  $handler->display->display_options['fields']['field_nombre_completo']['id'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_nombre_completo']['label'] = 'Digitador';
  $handler->display->display_options['fields']['field_nombre_completo']['element_label_colon'] = FALSE;
  /* Field: User: Nombre Completo */
  $handler->display->display_options['fields']['field_nombre_completo_1']['id'] = 'field_nombre_completo_1';
  $handler->display->display_options['fields']['field_nombre_completo_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['fields']['field_nombre_completo_1']['label'] = 'Encuestador';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: País (field_pais) */
  $handler->display->display_options['filters']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['group'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator_id'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['label'] = 'País (ISO2)';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['identifier'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  /* Filter criterion: Entityform Submission: Location. SIASAR Hierarchical Select */
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['id'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['field'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['value'] = '';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['group'] = 1;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['operator_id'] = 'field_entidad_local_siasar_hierarchical_select_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['label'] = 'Location. SIASAR Hierarchical Select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['operator'] = 'field_entidad_local_siasar_hierarchical_select_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['identifier'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select']['vocabulary'] = 'division_administrativa';
  /* Filter criterion: Entityform Type: Machine-readable name */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Tipo de cuestionario';
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
  /* Filter criterion: Entityform Submission: Validado (field_cuestionario_validado) */
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['id'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['table'] = 'field_data_field_cuestionario_validado';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['field'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['group'] = 1;
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['operator_id'] = 'field_cuestionario_validado_value_op';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['label'] = 'Validado';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['operator'] = 'field_cuestionario_validado_value_op';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['identifier'] = 'field_cuestionario_validado_value';
  $handler->display->display_options['filters']['field_cuestionario_validado_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'user';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Usuario/a';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['path'] = 'resultados/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $export['results_entityforms'] = $view;

  return $export;
}
