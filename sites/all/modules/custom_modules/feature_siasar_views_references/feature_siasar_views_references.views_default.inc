<?php
/**
 * @file
 * feature_siasar_views_references.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_siasar_views_references_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cargos_de_representantes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Cargos de representantes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
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
  /* Relación: Campo: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['relationships']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_iso2']['field'] = 'field_pais_iso2';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Name (translated) */
  $handler->display->display_options['fields']['name_i18n']['id'] = 'name_i18n';
  $handler->display->display_options['fields']['name_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_i18n']['field'] = 'name_i18n';
  $handler->display->display_options['fields']['name_i18n']['label'] = '';
  $handler->display->display_options['fields']['name_i18n']['element_label_colon'] = FALSE;
  /* Criterio de ordenación: Término de taxonomía: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filtro contextual: Campo: País (field_pais) */
  $handler->display->display_options['arguments']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['arguments']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pais_iso2']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_type'] = 'siasar_user_country';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pais_iso2']['limit'] = '0';
  /* Criterio de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'cargo_representante' => 'cargo_representante',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;

  /* Display: Referencia a entidades */
  $handler = $view->new_display('entityreference', 'Referencia a entidades', 'entityreference_fuentes_de_financiacion');
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
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $export['cargos_de_representantes'] = $view;

  $view = new view();
  $view->name = 'cargos_tecnicos';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Cargos técnicos';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
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
  /* Relación: Campo: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['relationships']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_iso2']['field'] = 'field_pais_iso2';
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Campo: Término de taxonomía: Name (translated) */
  $handler->display->display_options['fields']['name_i18n']['id'] = 'name_i18n';
  $handler->display->display_options['fields']['name_i18n']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name_i18n']['field'] = 'name_i18n';
  $handler->display->display_options['fields']['name_i18n']['label'] = '';
  $handler->display->display_options['fields']['name_i18n']['element_label_colon'] = FALSE;
  /* Criterio de ordenación: Término de taxonomía: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Filtro contextual: Campo: País (field_pais) */
  $handler->display->display_options['arguments']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['arguments']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pais_iso2']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_type'] = 'siasar_user_country';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pais_iso2']['limit'] = '0';
  /* Criterio de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'cargo_tecnico' => 'cargo_tecnico',
  );

  /* Display: Referencia a entidades */
  $handler = $view->new_display('entityreference', 'Referencia a entidades', 'entityreference_fuentes_de_financiacion');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $export['cargos_tecnicos'] = $view;

  $view = new view();
  $view->name = 'division_politica_administrativa';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'División política-administrativa';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'más';
  $handler->display->display_options['access']['type'] = 'perm';
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
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: Código división administrativa */
  $handler->display->display_options['fields']['field_codigo_division_admin']['id'] = 'field_codigo_division_admin';
  $handler->display->display_options['fields']['field_codigo_division_admin']['table'] = 'field_data_field_codigo_division_admin';
  $handler->display->display_options['fields']['field_codigo_division_admin']['field'] = 'field_codigo_division_admin';
  $handler->display->display_options['fields']['field_codigo_division_admin']['hide_empty'] = TRUE;
  /* Criterio de ordenación: Término de taxonomía: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Criterio de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'division_administrativa' => 'division_administrativa',
  );

  /* Display: Term Reference */
  $handler = $view->new_display('term_reference', 'Term Reference', 'term_reference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'division_administrativa' => 'division_administrativa',
  );
  /* Criterio de filtrado: Término de taxonomía: Nombre */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'starts';
  $handler->display->display_options['filters']['name']['value'] = 'M';

  /* Display: Term Reference by Country */
  $handler = $view->new_display('term_reference', 'Term Reference by Country', 'term_reference_location_by_country');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'term_reference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'name' => 'name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'term_reference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Término de taxonomía: Nombre */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Campo: Término de taxonomía: Código división administrativa */
  $handler->display->display_options['fields']['field_codigo_division_admin']['id'] = 'field_codigo_division_admin';
  $handler->display->display_options['fields']['field_codigo_division_admin']['table'] = 'field_data_field_codigo_division_admin';
  $handler->display->display_options['fields']['field_codigo_division_admin']['field'] = 'field_codigo_division_admin';
  $handler->display->display_options['fields']['field_codigo_division_admin']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Criterio de ordenación: Término de taxonomía: Nombre */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Término de taxonomía: Término padre */
  $handler->display->display_options['arguments']['parent']['id'] = 'parent';
  $handler->display->display_options['arguments']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['arguments']['parent']['field'] = 'parent';
  $handler->display->display_options['arguments']['parent']['default_action'] = 'default';
  $handler->display->display_options['arguments']['parent']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['parent']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['parent']['default_argument_options']['argument'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['parent']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['parent']['summary_options']['items_per_page'] = '25';
  /* Filtro contextual: Campo: País (field_pais) */
  $handler->display->display_options['arguments']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['arguments']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pais_iso2']['limit'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio de filtrado: Vocabulario de taxonomía: Nombre de sistema */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'division_administrativa' => 'division_administrativa',
  );
  $handler->display->display_options['filters']['machine_name']['group'] = 1;
  $export['division_politica_administrativa'] = $view;

  $view = new view();
  $view->name = 'entityform_reference';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'entityform';
  $view->human_name = 'Entityform Reference';
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
  $handler->display->display_options['query']['options']['query_tags'] = array(
    0 => 'entityform_reference',
  );
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
  $handler->display->display_options['style_plugin'] = 'table';
  /* Campo: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['label'] = '';
  $handler->display->display_options['fields']['field_entity_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_entity_name']['alter']['text'] = '[field_entity_name]';
  $handler->display->display_options['fields']['field_entity_name']['element_label_colon'] = FALSE;
  /* Campo: Entityform Submission: Fecha de envío */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'entityform';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  /* Filtro contextual: Campo: País (field_pais) */
  $handler->display->display_options['arguments']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['arguments']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pais_iso2']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_type'] = 'siasar_user_country';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pais_iso2']['limit'] = '0';
  /* Filtro contextual: Campo: Localidad (field_entidad_local) */
  $handler->display->display_options['arguments']['field_entidad_local_tid']['id'] = 'field_entidad_local_tid';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['field'] = 'field_entidad_local_tid';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['default_argument_type'] = 'siasar_user_location';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['summary_options']['items_per_page'] = '25';
  /* Criterio de filtrado: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sistema' => 'sistema',
  );
  /* Criterio de filtrado: Campo: Localidad (field_entidad_local) */
  $handler->display->display_options['filters']['field_entidad_local_tid']['id'] = 'field_entidad_local_tid';
  $handler->display->display_options['filters']['field_entidad_local_tid']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['filters']['field_entidad_local_tid']['field'] = 'field_entidad_local_tid';
  $handler->display->display_options['filters']['field_entidad_local_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_entidad_local_tid']['expose']['operator_id'] = 'field_entidad_local_tid_op';
  $handler->display->display_options['filters']['field_entidad_local_tid']['expose']['label'] = 'Departamento &gt; Municipio &gt; Centro Poblado (field_entidad_local)';
  $handler->display->display_options['filters']['field_entidad_local_tid']['expose']['operator'] = 'field_entidad_local_tid_op';
  $handler->display->display_options['filters']['field_entidad_local_tid']['expose']['identifier'] = 'field_entidad_local_tid';
  $handler->display->display_options['filters']['field_entidad_local_tid']['vocabulary'] = 'division_administrativa';

  /* Display: Reference to systems */
  $handler = $view->new_display('entityreference', 'Reference to systems', 'entityreference_systems');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_entity_name' => 'field_entity_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['label'] = '';
  $handler->display->display_options['fields']['field_entity_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_entity_name']['alter']['text'] = '[field_entity_name]';
  $handler->display->display_options['fields']['field_entity_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio de filtrado: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sistema' => 'sistema',
  );

  /* Display: Reference to Service Providers */
  $handler = $view->new_display('entityreference', 'Reference to Service Providers', 'entityreference_service_providers');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_entity_name' => 'field_entity_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Campo: Entityform Submission: Nombre */
  $handler->display->display_options['fields']['field_entity_name']['id'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['table'] = 'field_data_field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['field'] = 'field_entity_name';
  $handler->display->display_options['fields']['field_entity_name']['label'] = '';
  $handler->display->display_options['fields']['field_entity_name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_entity_name']['alter']['text'] = '[field_entity_name]';
  $handler->display->display_options['fields']['field_entity_name']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Criterio de filtrado: Entityform Submission: Entityform Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'entityform';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'prestador_de_servicio' => 'prestador_de_servicio',
  );
  $export['entityform_reference'] = $view;

  $view = new view();
  $view->name = 'tipos_de_moneda';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'units_unit';
  $view->human_name = 'Tipos de Moneda';
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
  /* Campo: Unit measurement: Symbol */
  $handler->display->display_options['fields']['symbol']['id'] = 'symbol';
  $handler->display->display_options['fields']['symbol']['table'] = 'units_unit';
  $handler->display->display_options['fields']['symbol']['field'] = 'symbol';
  $handler->display->display_options['fields']['symbol']['label'] = '';
  $handler->display->display_options['fields']['symbol']['element_label_colon'] = FALSE;
  /* Campo: Unit measurement: Etiqueta */
  $handler->display->display_options['fields']['label']['id'] = 'label';
  $handler->display->display_options['fields']['label']['table'] = 'units_unit';
  $handler->display->display_options['fields']['label']['field'] = 'label';
  $handler->display->display_options['fields']['label']['label'] = '';
  $handler->display->display_options['fields']['label']['element_label_colon'] = FALSE;
  /* Campo: Campo: País */
  $handler->display->display_options['fields']['field_pais']['id'] = 'field_pais';
  $handler->display->display_options['fields']['field_pais']['table'] = 'field_data_field_pais';
  $handler->display->display_options['fields']['field_pais']['field'] = 'field_pais';
  $handler->display->display_options['fields']['field_pais']['relationship'] = 'reverse_field_country_currency_taxonomy_term';
  $handler->display->display_options['fields']['field_pais']['label'] = '';
  $handler->display->display_options['fields']['field_pais']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_pais']['element_label_colon'] = FALSE;
  /* Criterio de filtrado: Unit measurement: Measure */
  $handler->display->display_options['filters']['measure']['id'] = 'measure';
  $handler->display->display_options['filters']['measure']['table'] = 'units_unit';
  $handler->display->display_options['filters']['measure']['field'] = 'measure';
  $handler->display->display_options['filters']['measure']['value'] = array(
    'currency' => 'currency',
  );

  /* Display: Referencia a entidades */
  $handler = $view->new_display('entityreference', 'Referencia a entidades', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'label' => 'label',
    'symbol' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relación: Referencia a entidades: Referenciando entidad */
  $handler->display->display_options['relationships']['reverse_field_country_currency_taxonomy_term']['id'] = 'reverse_field_country_currency_taxonomy_term';
  $handler->display->display_options['relationships']['reverse_field_country_currency_taxonomy_term']['table'] = 'units_unit';
  $handler->display->display_options['relationships']['reverse_field_country_currency_taxonomy_term']['field'] = 'reverse_field_country_currency_taxonomy_term';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtro contextual: Campo: País (field_pais) */
  $handler->display->display_options['arguments']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['arguments']['field_pais_iso2']['field'] = 'field_pais_iso2';
  $handler->display->display_options['arguments']['field_pais_iso2']['relationship'] = 'reverse_field_country_currency_taxonomy_term';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_pais_iso2']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_type'] = 'php';
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_options']['code'] = 'global $user;
$user_full = user_load($user->uid);
/*print_r($user_full->field_pais);
die();*/
return $user_full->field_pais[\'und\'][0][\'iso2\'];';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pais_iso2']['limit'] = '0';
  $export['tipos_de_moneda'] = $view;

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
  /* Relación: Campo: País (field_pais) */
  $handler->display->display_options['relationships']['field_pais_iso2']['id'] = 'field_pais_iso2';
  $handler->display->display_options['relationships']['field_pais_iso2']['table'] = 'field_data_field_pais';
  $handler->display->display_options['relationships']['field_pais_iso2']['field'] = 'field_pais_iso2';
  /* Relación: Campo: Localidad (field_entidad_local) */
  $handler->display->display_options['relationships']['field_entidad_local_tid']['id'] = 'field_entidad_local_tid';
  $handler->display->display_options['relationships']['field_entidad_local_tid']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['relationships']['field_entidad_local_tid']['field'] = 'field_entidad_local_tid';
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
  $handler->display->display_options['arguments']['field_pais_iso2']['default_argument_type'] = 'siasar_user_country';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_pais_iso2']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_pais_iso2']['limit'] = '0';
  /* Filtro contextual: Campo: Localidad (field_entidad_local) */
  $handler->display->display_options['arguments']['field_entidad_local_tid']['id'] = 'field_entidad_local_tid';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['table'] = 'field_data_field_entidad_local';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['field'] = 'field_entidad_local_tid';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['exception']['title'] = 'Todo';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['default_argument_type'] = 'siasar_user_location';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_entidad_local_tid']['summary_options']['items_per_page'] = '25';
  $export['users_select_view'] = $view;

  return $export;
}
