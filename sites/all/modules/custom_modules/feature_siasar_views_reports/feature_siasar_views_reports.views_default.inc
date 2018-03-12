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
  $handler->display->display_options['title'] = 'Survey Results';
  $handler->display->display_options['css_class'] = 'view-reports-entityforms';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'entityform_results_view',
  );
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Restart';
  $handler->display->display_options['exposed_form']['options']['expose_sort_order'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Elements per page';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'views_bulk_operations' => 'views_bulk_operations',
    'entityform_id' => 'entityform_id',
    'field_entity_name' => 'field_entity_name',
    'field_entidad_local' => 'field_entidad_local',
    'created' => 'created',
    'field_nombre_completo' => 'field_nombre_completo',
    'field_nombre_completo_1' => 'field_nombre_completo_1',
    'label' => 'label',
    'field_status' => 'field_status',
    'entityform_revision' => 'entityform_revision',
    'edit_entityform' => 'edit_entityform',
    'link_entityform' => 'link_entityform',
    'nothing' => 'nothing',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
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
    'field_status' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'entityform_revision' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
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
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo']['id'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_nombre_completo']['label'] = 'User';
  $handler->display->display_options['fields']['field_nombre_completo']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = 'View';
  $handler->display->display_options['fields']['link_entityform']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[link_entityform] [edit_entityform]';
  /* Sort criterion: Entityform Submission: Date submitted */
  $handler->display->display_options['sorts']['created_1']['id'] = 'created_1';
  $handler->display->display_options['sorts']['created_1']['table'] = 'entityform';
  $handler->display->display_options['sorts']['created_1']['field'] = 'created';
  $handler->display->display_options['sorts']['created_1']['order'] = 'DESC';
  /* Filter criterion: Field: País (field_pais) */
  $handler->display->display_options['filters']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['group'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator_id'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['label'] = 'Country (ISO2)';
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
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['id'] = 'field_entidad_local_siasar_hierarchical_select_1';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['field'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['value'] = '';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['group'] = 1;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['operator_id'] = 'field_entidad_local_siasar_hierarchical_select_1_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['label'] = 'Location. SIASAR Hierarchical Select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['operator'] = 'field_entidad_local_siasar_hierarchical_select_1_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['identifier'] = 'field_entidad_local_siasar_hierarchical_select_1';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['vocabulary'] = 'division_administrativa';
  /* Filter criterion: Entityform Type: Machine-readable name */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Survey type';
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
  /* Filter criterion: Entityform Submission: Nombre (field_entity_name) */
  $handler->display->display_options['filters']['field_entity_name_value']['id'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['field'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_entity_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator_id'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['label'] = 'Nombre de la encuesta';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['identifier'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_field'] = 'field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value']['id'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['relationship'] = 'user';
  $handler->display->display_options['filters']['field_nombre_completo_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator_id'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['label'] = 'Digitador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['identifier'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_field'] = 'field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['id'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator_id'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['label'] = 'Encuestador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['identifier'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_field'] = 'field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: Entityform Submission: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['group_info']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['group_info']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Draft',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Finished',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Validated',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Removed',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Entityform Computable states: Processable */
  $handler->display->display_options['filters']['entityform_revision']['id'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['table'] = 'entityform_computable_states';
  $handler->display->display_options['filters']['entityform_revision']['field'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['exposed'] = TRUE;
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['entityform_revision']['expose']['label'] = 'Processable';
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator'] = 'entityform_revision_op';
  $handler->display->display_options['filters']['entityform_revision']['expose']['identifier'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['display_comment'] = 'Esta vista está modificada mediante código en el módulo "feature_siasar_entityform_results"';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['field_language'] = 'und';
  $handler->display->display_options['field_language_add_to_query'] = 0;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Result summary */
  $handler->display->display_options['footer']['result']['id'] = 'result';
  $handler->display->display_options['footer']['result']['table'] = 'views';
  $handler->display->display_options['footer']['result']['field'] = 'result';
  $handler->display->display_options['footer']['result']['label'] = 'Total:';
  $handler->display->display_options['footer']['result']['content'] = '<div class="total"><label>Total:</label> @total</div>
';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No hay resultados con las opciones que ha elegido.';
  $handler->display->display_options['empty']['area']['format'] = 'plain_text';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Entityform Submission */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'views_entity_entityform';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['row_clickable'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::siasar_check_computability' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::siasar_remove_questionnaire_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::siasar_draft_questionnaire_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::siasar_finish_questionnaire_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::siasar_validate_questionnaire_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'skip_permission_check' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  $handler->display->display_options['fields']['entityform_id']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id']['separator'] = '';
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['label'] = 'Name';
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
  $handler->display->display_options['fields']['field_entidad_local']['label'] = 'División administrativa';
  $handler->display->display_options['fields']['field_entidad_local']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_entidad_local']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_entidad_local']['settings'] = array(
    'linked' => 0,
  );
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'd F Y';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo']['id'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_nombre_completo']['label'] = 'User';
  $handler->display->display_options['fields']['field_nombre_completo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_nombre_completo']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_nombre_completo']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo_1']['id'] = 'field_nombre_completo_1';
  $handler->display->display_options['fields']['field_nombre_completo_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['fields']['field_nombre_completo_1']['label'] = 'Encuestador/a';
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
  $handler->display->display_options['fields']['label']['label'] = 'Tipo de encuesta';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Entityform Computable states: Processable */
  $handler->display->display_options['fields']['entityform_revision']['id'] = 'entityform_revision';
  $handler->display->display_options['fields']['entityform_revision']['table'] = 'entityform_computable_states';
  $handler->display->display_options['fields']['entityform_revision']['field'] = 'entityform_revision';
  $handler->display->display_options['fields']['entityform_revision']['label'] = 'BI';
  /* Field: Entityform Submission: Edit Link */
  $handler->display->display_options['fields']['edit_entityform']['id'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['edit_entityform']['field'] = 'edit_entityform';
  $handler->display->display_options['fields']['edit_entityform']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_entityform']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_entityform']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Link */
  $handler->display->display_options['fields']['link_entityform']['id'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['table'] = 'entityform';
  $handler->display->display_options['fields']['link_entityform']['field'] = 'link_entityform';
  $handler->display->display_options['fields']['link_entityform']['label'] = 'View';
  $handler->display->display_options['fields']['link_entityform']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[link_entityform] [edit_entityform]';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: País (field_pais) */
  $handler->display->display_options['filters']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['group'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator_id'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['label'] = 'Country (ISO2)';
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
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_dependent'] = 0;
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
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Survey type';
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
  $handler->display->display_options['filters']['type']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['type']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['type']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Entityform Submission: Nombre (field_entity_name) */
  $handler->display->display_options['filters']['field_entity_name_value']['id'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['field'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_entity_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator_id'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['label'] = 'Nombre de la encuesta';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['identifier'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_field'] = 'field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value']['id'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['relationship'] = 'user';
  $handler->display->display_options['filters']['field_nombre_completo_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator_id'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['label'] = 'Digitador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['identifier'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_field'] = 'field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['id'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator_id'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['label'] = 'Encuestador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['identifier'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_field'] = 'field_nombre_completo_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: Entityform Submission: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['group_info']['label'] = 'Estado';
  $handler->display->display_options['filters']['field_status_value']['group_info']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Draft',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Finished',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Validated',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Removed',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Entityform Computable states: Processable */
  $handler->display->display_options['filters']['entityform_revision']['id'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['table'] = 'entityform_computable_states';
  $handler->display->display_options['filters']['entityform_revision']['field'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['exposed'] = TRUE;
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator'] = 'entityform_revision_op';
  $handler->display->display_options['filters']['entityform_revision']['expose']['identifier'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['expose']['remember_roles'] = array(
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
  /* Field: Field: Localidad */
  $handler->display->display_options['fields']['field_entidad_local']['id'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['field'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['type'] = 'taxonomy_term_reference_link';
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo']['id'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_nombre_completo']['label'] = 'User';
  $handler->display->display_options['fields']['field_nombre_completo']['element_label_colon'] = FALSE;
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo_1']['id'] = 'field_nombre_completo_1';
  $handler->display->display_options['fields']['field_nombre_completo_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['fields']['field_nombre_completo_1']['label'] = 'Encuestador';
  /* Field: Entityform Submission: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Entityform Computable states: Computable entityform */
  $handler->display->display_options['fields']['computable']['id'] = 'computable';
  $handler->display->display_options['fields']['computable']['table'] = 'entityform_computable_states';
  $handler->display->display_options['fields']['computable']['field'] = 'computable';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: País (field_pais) */
  $handler->display->display_options['filters']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['group'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator_id'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['label'] = 'Country (ISO2)';
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
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_field'] = 'field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_dependent'] = 0;
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
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Survey type';
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
  $handler->display->display_options['filters']['type']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['type']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['type']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Entityform Submission: Nombre (field_entity_name) */
  $handler->display->display_options['filters']['field_entity_name_value']['id'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['field'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_entity_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator_id'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['label'] = 'Nombre de la encuesta';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['identifier'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_field'] = 'field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value']['id'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['relationship'] = 'user';
  $handler->display->display_options['filters']['field_nombre_completo_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator_id'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['label'] = 'Digitador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['identifier'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_field'] = 'field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['id'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator_id'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['label'] = 'Encuestador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['identifier'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_field'] = 'field_nombre_completo_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: Entityform Submission: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['group_info']['label'] = 'Encuestador/a';
  $handler->display->display_options['filters']['field_status_value']['group_info']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Draft',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Finished',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Validated',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Removed',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Entityform Computable states: Processable */
  $handler->display->display_options['filters']['entityform_revision']['id'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['table'] = 'entityform_computable_states';
  $handler->display->display_options['filters']['entityform_revision']['field'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['exposed'] = TRUE;
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['entityform_revision']['expose']['label'] = 'Processable';
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator'] = 'entityform_revision_op';
  $handler->display->display_options['filters']['entityform_revision']['expose']['identifier'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['expose']['remember_roles'] = array(
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
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Exportación de datos */
  $handler = $view->new_display('views_data_export', 'Exportación de datos', 'views_data_export_2');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'siasar_resultados_encuestas-%timestamp-full.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
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
  /* Field: Field: Localidad */
  $handler->display->display_options['fields']['field_entidad_local']['id'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['field'] = 'field_entidad_local';
  $handler->display->display_options['fields']['field_entidad_local']['type'] = 'taxonomy_term_reference_link';
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo']['id'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_nombre_completo']['label'] = 'User';
  $handler->display->display_options['fields']['field_nombre_completo']['element_label_colon'] = FALSE;
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo_1']['id'] = 'field_nombre_completo_1';
  $handler->display->display_options['fields']['field_nombre_completo_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['fields']['field_nombre_completo_1']['label'] = 'Encuestador';
  /* Field: Entityform Submission: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Entityform Computable states: Computable entityform */
  $handler->display->display_options['fields']['computable']['id'] = 'computable';
  $handler->display->display_options['fields']['computable']['table'] = 'entityform_computable_states';
  $handler->display->display_options['fields']['computable']['field'] = 'computable';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: País (field_pais) */
  $handler->display->display_options['filters']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['group'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator_id'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['label'] = 'Country (ISO2)';
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
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_field'] = 'field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['autocomplete_dependent'] = 0;
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
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Survey type';
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
  $handler->display->display_options['filters']['type']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['type']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['type']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['type']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: Entityform Submission: Nombre (field_entity_name) */
  $handler->display->display_options['filters']['field_entity_name_value']['id'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['field'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_entity_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator_id'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['label'] = 'Nombre de la encuesta';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['identifier'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_field'] = 'field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value']['id'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['relationship'] = 'user';
  $handler->display->display_options['filters']['field_nombre_completo_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator_id'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['label'] = 'Digitador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['identifier'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_field'] = 'field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['id'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator_id'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['label'] = 'Encuestador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['identifier'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_field'] = 'field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: Entityform Submission: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['group_info']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['group_info']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Draft',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Finished',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Validated',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Removed',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Entityform Computable states: Processable */
  $handler->display->display_options['filters']['entityform_revision']['id'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['table'] = 'entityform_computable_states';
  $handler->display->display_options['filters']['entityform_revision']['field'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['exposed'] = TRUE;
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['entityform_revision']['expose']['label'] = 'Processable';
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator'] = 'entityform_revision_op';
  $handler->display->display_options['filters']['entityform_revision']['expose']['identifier'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['path'] = 'resultados/xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';

  /* Display: Exportación de datos */
  $handler = $view->new_display('views_data_export', 'Exportación de datos', 'views_data_export_3');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv_siasar';
  $handler->display->display_options['style_options']['attach_text'] = 'Encuestas vinculadas';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'com-ps-sys.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 1;
  $handler->display->display_options['style_options']['quote'] = '1';
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['style_options']['utf8_bom'] = 1;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entityform Submission: User uid */
  $handler->display->display_options['relationships']['user']['id'] = 'user';
  $handler->display->display_options['relationships']['user']['table'] = 'entityform';
  $handler->display->display_options['relationships']['user']['field'] = 'user';
  /* Relationship: Field: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['relationships']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['relationships']['field_pais_iso2']['relationship'] = 'user';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_user_reference_target_id']['id'] = 'field_user_reference_target_id';
  $handler->display->display_options['relationships']['field_user_reference_target_id']['table'] = 'field_data_field_user_reference';
  $handler->display->display_options['relationships']['field_user_reference_target_id']['field'] = 'field_user_reference_target_id';
  $handler->display->display_options['relationships']['field_user_reference_target_id']['label'] = 'Encuestador field_user_reference';
  /* Relationship: Entityform Submission: Viviendas con sistema (field_com_viv_con_sistema) */
  $handler->display->display_options['relationships']['field_com_viv_con_sistema_value']['id'] = 'field_com_viv_con_sistema_value';
  $handler->display->display_options['relationships']['field_com_viv_con_sistema_value']['table'] = 'field_data_field_com_viv_con_sistema';
  $handler->display->display_options['relationships']['field_com_viv_con_sistema_value']['field'] = 'field_com_viv_con_sistema_value';
  $handler->display->display_options['relationships']['field_com_viv_con_sistema_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_system_ref_target_id']['id'] = 'field_system_ref_target_id';
  $handler->display->display_options['relationships']['field_system_ref_target_id']['table'] = 'field_data_field_system_ref';
  $handler->display->display_options['relationships']['field_system_ref_target_id']['field'] = 'field_system_ref_target_id';
  $handler->display->display_options['relationships']['field_system_ref_target_id']['relationship'] = 'field_com_viv_con_sistema_value';
  $handler->display->display_options['relationships']['field_system_ref_target_id']['label'] = 'system_ref';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_prestador_servicio_target_id']['id'] = 'field_prestador_servicio_target_id';
  $handler->display->display_options['relationships']['field_prestador_servicio_target_id']['table'] = 'field_data_field_prestador_servicio';
  $handler->display->display_options['relationships']['field_prestador_servicio_target_id']['field'] = 'field_prestador_servicio_target_id';
  $handler->display->display_options['relationships']['field_prestador_servicio_target_id']['relationship'] = 'field_com_viv_con_sistema_value';
  $handler->display->display_options['relationships']['field_prestador_servicio_target_id']['label'] = 'sp_ref';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id']['id'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id']['exclude'] = TRUE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id_3']['id'] = 'entityform_id_3';
  $handler->display->display_options['fields']['entityform_id_3']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id_3']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id_3']['label'] = 'ID Comunidad';
  $handler->display->display_options['fields']['entityform_id_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id_3']['separator'] = '';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['exclude'] = TRUE;
  $handler->display->display_options['fields']['created']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Entityform Submission: Date submitted */
  $handler->display->display_options['fields']['created_1']['id'] = 'created_1';
  $handler->display->display_options['fields']['created_1']['table'] = 'entityform';
  $handler->display->display_options['fields']['created_1']['field'] = 'created';
  $handler->display->display_options['fields']['created_1']['label'] = 'Fecha de envío';
  $handler->display->display_options['fields']['created_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['created_1']['date_format'] = 'short';
  $handler->display->display_options['fields']['created_1']['second_date_format'] = 'long';
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['label'] = 'Name';
  $handler->display->display_options['fields']['field_entity_name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_entity_name']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name_3']['id'] = 'field_entity_name_3';
  $handler->display->display_options['fields']['field_entity_name_3']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name_3']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name_3']['label'] = 'Comunidad';
  $handler->display->display_options['fields']['field_entity_name_3']['element_label_colon'] = FALSE;
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id_1']['id'] = 'entityform_id_1';
  $handler->display->display_options['fields']['entityform_id_1']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id_1']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id_1']['relationship'] = 'field_system_ref_target_id';
  $handler->display->display_options['fields']['entityform_id_1']['label'] = 'ID Sistema';
  $handler->display->display_options['fields']['entityform_id_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['entityform_id_1']['separator'] = '';
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name_1']['id'] = 'field_entity_name_1';
  $handler->display->display_options['fields']['field_entity_name_1']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name_1']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name_1']['relationship'] = 'field_system_ref_target_id';
  $handler->display->display_options['fields']['field_entity_name_1']['label'] = 'Sistema';
  /* Field: Entityform Submission: Entityform submission ID */
  $handler->display->display_options['fields']['entityform_id_2']['id'] = 'entityform_id_2';
  $handler->display->display_options['fields']['entityform_id_2']['table'] = 'entityform';
  $handler->display->display_options['fields']['entityform_id_2']['field'] = 'entityform_id';
  $handler->display->display_options['fields']['entityform_id_2']['relationship'] = 'field_prestador_servicio_target_id';
  $handler->display->display_options['fields']['entityform_id_2']['label'] = 'ID Prestador';
  $handler->display->display_options['fields']['entityform_id_2']['separator'] = '';
  /* Field: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name_2']['id'] = 'field_entity_name_2';
  $handler->display->display_options['fields']['field_entity_name_2']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name_2']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name_2']['relationship'] = 'field_prestador_servicio_target_id';
  $handler->display->display_options['fields']['field_entity_name_2']['label'] = 'Prestador de servicio';
  /* Field: Field collection item: Viviendas atendidas */
  $handler->display->display_options['fields']['field_com_viv_con_sistnva']['id'] = 'field_com_viv_con_sistnva';
  $handler->display->display_options['fields']['field_com_viv_con_sistnva']['table'] = 'field_data_field_com_viv_con_sistnva';
  $handler->display->display_options['fields']['field_com_viv_con_sistnva']['field'] = 'field_com_viv_con_sistnva';
  $handler->display->display_options['fields']['field_com_viv_con_sistnva']['relationship'] = 'field_com_viv_con_sistema_value';
  $handler->display->display_options['fields']['field_com_viv_con_sistnva']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_com_viv_con_sistnva']['empty'] = '0';
  $handler->display->display_options['fields']['field_com_viv_con_sistnva']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo_1']['id'] = 'field_nombre_completo_1';
  $handler->display->display_options['fields']['field_nombre_completo_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['fields']['field_nombre_completo_1']['exclude'] = TRUE;
  /* Field: User: Nombre completo */
  $handler->display->display_options['fields']['field_nombre_completo']['id'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['field'] = 'field_nombre_completo';
  $handler->display->display_options['fields']['field_nombre_completo']['relationship'] = 'user';
  $handler->display->display_options['fields']['field_nombre_completo']['label'] = 'User';
  $handler->display->display_options['fields']['field_nombre_completo']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_nombre_completo']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Field: País (field_pais) */
  $handler->display->display_options['filters']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['filters']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['filters']['field_pais_iso2']['group'] = 1;
  $handler->display->display_options['filters']['field_pais_iso2']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['operator_id'] = 'field_pais_iso2_op';
  $handler->display->display_options['filters']['field_pais_iso2']['expose']['label'] = 'Country (ISO2)';
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
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['id'] = 'field_entidad_local_siasar_hierarchical_select_1';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['field'] = 'field_entidad_local_siasar_hierarchical_select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['value'] = '';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['group'] = 1;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['operator_id'] = 'field_entidad_local_siasar_hierarchical_select_1_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['label'] = 'Location. SIASAR Hierarchical Select';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['operator'] = 'field_entidad_local_siasar_hierarchical_select_1_op';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['identifier'] = 'field_entidad_local_siasar_hierarchical_select_1';
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entidad_local_siasar_hierarchical_select_1']['vocabulary'] = 'division_administrativa';
  /* Filter criterion: Entityform Type: Machine-readable name */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform_type';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = 'comunidad';
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Survey type';
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
  /* Filter criterion: Entityform Submission: Nombre (field_entity_name) */
  $handler->display->display_options['filters']['field_entity_name_value']['id'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['field'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_entity_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator_id'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['label'] = 'Nombre de la encuesta';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['operator'] = 'field_entity_name_value_op';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['identifier'] = 'field_entity_name_value';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_min_chars'] = '3';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_field'] = 'field_entity_name';
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_entity_name_value']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value']['id'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['relationship'] = 'user';
  $handler->display->display_options['filters']['field_nombre_completo_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator_id'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['label'] = 'Digitador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['operator'] = 'field_nombre_completo_value_op';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['identifier'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_field'] = 'field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value']['expose']['autocomplete_dependent'] = 0;
  /* Filter criterion: User: Nombre completo (field_nombre_completo) */
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['id'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['table'] = 'field_data_field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['field'] = 'field_nombre_completo_value';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['relationship'] = 'field_user_reference_target_id';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['group'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator_id'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['label'] = 'Encuestador/a';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['operator'] = 'field_nombre_completo_value_1_op';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['identifier'] = 'field_nombre_completo_value_1';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_filter'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_items'] = '10';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_min_chars'] = '0';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_field'] = 'field_nombre_completo';
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_suggestion'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_raw_dropdown'] = 1;
  $handler->display->display_options['filters']['field_nombre_completo_value_1']['expose']['autocomplete_dependent'] = 1;
  /* Filter criterion: Entityform Submission: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['is_grouped'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['group_info']['label'] = 'Status (field_status)';
  $handler->display->display_options['filters']['field_status_value']['group_info']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group_info']['group_items'] = array(
    1 => array(
      'title' => 'Draft',
      'operator' => '=',
      'value' => array(
        'value' => '2',
        'min' => '',
        'max' => '',
      ),
    ),
    2 => array(
      'title' => 'Finished',
      'operator' => '=',
      'value' => array(
        'value' => '3',
        'min' => '',
        'max' => '',
      ),
    ),
    3 => array(
      'title' => 'Validated',
      'operator' => '=',
      'value' => array(
        'value' => '4',
        'min' => '',
        'max' => '',
      ),
    ),
    4 => array(
      'title' => 'Removed',
      'operator' => '=',
      'value' => array(
        'value' => '5',
        'min' => '',
        'max' => '',
      ),
    ),
  );
  /* Filter criterion: Entityform Computable states: Processable */
  $handler->display->display_options['filters']['entityform_revision']['id'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['table'] = 'entityform_computable_states';
  $handler->display->display_options['filters']['entityform_revision']['field'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['exposed'] = TRUE;
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator_id'] = '';
  $handler->display->display_options['filters']['entityform_revision']['expose']['label'] = 'Processable';
  $handler->display->display_options['filters']['entityform_revision']['expose']['operator'] = 'entityform_revision_op';
  $handler->display->display_options['filters']['entityform_revision']['expose']['identifier'] = 'entityform_revision';
  $handler->display->display_options['filters']['entityform_revision']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    7 => 0,
    8 => 0,
    5 => 0,
    9 => 0,
    6 => 0,
    10 => 0,
  );
  $handler->display->display_options['path'] = 'resultados/com-ps-sys';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['results_entityforms'] = $view;

  return $export;
}
