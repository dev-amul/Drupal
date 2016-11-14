<?php
/**
 * @file
 * feature_siasar_entityform_comunidad.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_siasar_entityform_comunidad_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-comunidad-field_area_planificacion'.
  $field_instances['entityform-comunidad-field_area_planificacion'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'entityform',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_area_planificacion',
    'label' => 'Área o zona de planificación',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_ce_location'.
  $field_instances['entityform-comunidad-field_ce_location'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ce_location',
    'label' => 'Lugar en el que está ubicado el centro educativo de referencia',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 0,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_altitud'.
  $field_instances['entityform-comunidad-field_com_altitud'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_altitud',
    'label' => 'Altitud',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '0.00',
      'prefix' => '',
      'suffix' => 'mts.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 65,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_ce_existe'.
  $field_instances['entityform-comunidad-field_com_ce_existe'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_ce_existe',
    'label' => '¿Existe algún centro educativo en la comunidad?',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_ce_nombre'.
  $field_instances['entityform-comunidad-field_com_ce_nombre'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_ce_nombre',
    'label' => 'Nombre del centro educativo externo donde acude la población estudiantil',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_codigo_comunidad'.
  $field_instances['entityform-comunidad-field_com_codigo_comunidad'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_codigo_comunidad',
    'label' => 'Código Comunidad',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 20,
      ),
      'type' => 'text_textfield',
      'weight' => 66,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_cs_existe'.
  $field_instances['entityform-comunidad-field_com_cs_existe'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_cs_existe',
    'label' => '¿Existe algún centro de salud en la comunidad?',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_cs_nombre'.
  $field_instances['entityform-comunidad-field_com_cs_nombre'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_cs_nombre',
    'label' => 'Nombre del centro de salud externo que acude la población de la comunidad',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_fc_impsystem'.
  $field_instances['entityform-comunidad-field_com_fc_impsystem'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Agregar',
          'delete' => 'Eliminar',
          'description' => TRUE,
          'edit' => 'Editar',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_fc_impsystem',
    'label' => 'Mejora de sistema',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 57,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_fc_newwatsystem'.
  $field_instances['entityform-comunidad-field_com_fc_newwatsystem'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Agregar',
          'delete' => 'Eliminar',
          'description' => TRUE,
          'edit' => 'Editar',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_fc_newwatsystem',
    'label' => 'Nuevo sistema de agua',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 58,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_fc_systypimprove'.
  $field_instances['entityform-comunidad-field_com_fc_systypimprove'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Agregar',
          'delete' => 'Eliminar',
          'description' => TRUE,
          'edit' => 'Editar',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_fc_systypimprove',
    'label' => 'Sistema de Saneamiento del tipo 1 y 2 mejorado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 59,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_com_fc_systypunimprove'.
  $field_instances['entityform-comunidad-field_com_fc_systypunimprove'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Agregar',
          'delete' => 'Eliminar',
          'description' => TRUE,
          'edit' => 'Editar',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_fc_systypunimprove',
    'label' => 'Sistema de Saneamiento del tipo no mejorado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 60,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_fic_cs_ficha'.
  $field_instances['entityform-comunidad-field_com_fic_cs_ficha'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_fic_cs_ficha',
    'label' => 'Ficha de centro de salud',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_georef'.
  $field_instances['entityform-comunidad-field_com_georef'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'input_format' => 'lat/lon',
        'geom' => array(
          'lat' => '0.0',
          'lon' => '0.0',
        ),
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_georef',
    'label' => 'Georeferenciación',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'html5_geolocation' => 0,
      ),
      'type' => 'geofield_latlon',
      'weight' => 64,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_hig_num_vivagua'.
  $field_instances['entityform-comunidad-field_com_hig_num_vivagua'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_hig_num_vivagua',
    'label' => 'Cantidad de viviendas que almacenan el agua de bebida de forma segura (en recipientes limpios y bien tapados)',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_com_hig_num_vivbasica'.
  $field_instances['entityform-comunidad-field_com_hig_num_vivbasica'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_hig_num_vivbasica',
    'label' => 'Cantidad de viviendas que cuentan con una instalación básica (con agua y jabón) para el lavado de manos cerca (a menos de 10 metros) de la instalación de saneamiento',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_hig_num_vivtodos'.
  $field_instances['entityform-comunidad-field_com_hig_num_vivtodos'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_hig_num_vivtodos',
    'label' => 'Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) utilizan la instalación de lavado siempre',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_lev_general'.
  $field_instances['entityform-comunidad-field_com_lev_general'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_lev_general',
    'label' => '1. Levantamiento general aproximado (entrevistas, control parcial de las viviendas)',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_lev_muestral'.
  $field_instances['entityform-comunidad-field_com_lev_muestral'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_lev_muestral',
    'label' => '3. Levantamiento muestral',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_lev_utilform'.
  $field_instances['entityform-comunidad-field_com_lev_utilform'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_lev_utilform',
    'label' => '2. Levantamiento utilizando el formulario auxiliar',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_com_no_uso_vivnumtodos'.
  $field_instances['entityform-comunidad-field_com_no_uso_vivnumtodos'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_no_uso_vivnumtodos',
    'label' => 'Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento compartida o propia no mejorada:',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_no_uso_vivnumuso'.
  $field_instances['entityform-comunidad-field_com_no_uso_vivnumuso'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_no_uso_vivnumuso',
    'label' => 'Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento compartida o propia del tipo no mejorada:',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 35,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_infta'.
  $field_instances['entityform-comunidad-field_com_num_viv_infta'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_infta',
    'label' => 'Cantidad de viviendas que TIENEN infraestructura de saneamiento PROPIA mejorada tipo 1: ',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_inftb'.
  $field_instances['entityform-comunidad-field_com_num_viv_inftb'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_inftb',
    'label' => 'Cantidad de viviendas que TIENEN infraestructura de saneamiento PROPIA mejorada tipo 2:',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_muestra'.
  $field_instances['entityform-comunidad-field_com_num_viv_muestra'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_muestra',
    'label' => 'Nº Viviendas de la muestra:',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_usohab'.
  $field_instances['entityform-comunidad-field_com_num_viv_usohab'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_usohab',
    'label' => 'Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento COMPARTIDA entre varias viviendas, mejorada tipo 1 o 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_usohab2'.
  $field_instances['entityform-comunidad-field_com_num_viv_usohab2'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_usohab2',
    'label' => 'Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento COMPARTIDA entre varias viviendas, mejorada TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_usoinfa'.
  $field_instances['entityform-comunidad-field_com_num_viv_usoinfa'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_usoinfa',
    'label' => 'Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento PROPIA mejorada, tipo 1 o 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_usoinfa2'.
  $field_instances['entityform-comunidad-field_com_num_viv_usoinfa2'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_usoinfa2',
    'label' => 'Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento PROPIA mejorada, TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_usoinfb'.
  $field_instances['entityform-comunidad-field_com_num_viv_usoinfb'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_usoinfb',
    'label' => 'Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, tipo 1 o 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_usoinfb2'.
  $field_instances['entityform-comunidad-field_com_num_viv_usoinfb2'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_usoinfb2',
    'label' => 'Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_num_viv_usotodos'.
  $field_instances['entityform-comunidad-field_com_num_viv_usotodos'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_usotodos',
    'label' => 'Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, tipo de saneamiento COMPARTIDA entre varias viviendas, mejorada tipo 1 o 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_com_num_viv_usotodos2'.
  $field_instances['entityform-comunidad-field_com_num_viv_usotodos2'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_num_viv_usotodos2',
    'label' => 'Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, tipo de saneamiento COMPARTIDA entre varias viviendas, mejorada TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_obs_obscomre'.
  $field_instances['entityform-comunidad-field_com_obs_obscomre'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_obs_obscomre',
    'label' => 'Redacción',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_poblacion_total'.
  $field_instances['entityform-comunidad-field_com_poblacion_total'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_poblacion_total',
    'label' => 'Población total',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 1,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_com_recontrata_numvivc'.
  $field_instances['entityform-comunidad-field_com_recontrata_numvivc'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_recontrata_numvivc',
    'label' => 'Cantidad de viviendas que recogen o tratan las basuras domésticas',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_recotrata_disp'.
  $field_instances['entityform-comunidad-field_com_recotrata_disp'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_recotrata_disp',
    'label' => '¿Cuál es la disposición final de la basura más habitual en la comunidad? (quema, enterrada, tirada, tirada en un cuerpo de agua, etc.)',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_recotrata_prac'.
  $field_instances['entityform-comunidad-field_com_recotrata_prac'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_recotrata_prac',
    'label' => '¿Existe algún tipo de práctica de recolección y/o tratamiento de basuras en la comunidad?',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_com_srv_caracteristicas'.
  $field_instances['entityform-comunidad-field_com_srv_caracteristicas'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_srv_caracteristicas',
    'label' => 'Otras características de la comunidad',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_srv_existe'.
  $field_instances['entityform-comunidad-field_com_srv_existe'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_srv_existe',
    'label' => 'Se posee de servicios de energía eléctrica',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_srv_inte_existe'.
  $field_instances['entityform-comunidad-field_com_srv_inte_existe'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_srv_inte_existe',
    'label' => 'Se posee de servicios de conexión a Internet (3G o 4G)',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_srv_telf_existe'.
  $field_instances['entityform-comunidad-field_com_srv_telf_existe'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_srv_telf_existe',
    'label' => 'Se posee de servicios de telefonía fija',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_srv_telm_existe'.
  $field_instances['entityform-comunidad-field_com_srv_telm_existe'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_srv_telm_existe',
    'label' => 'Se posee de servicios de telefonía celular',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_viv_con_sistema'.
  $field_instances['entityform-comunidad-field_com_viv_con_sistema'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_viv_con_sistema',
    'label' => 'Viviendas con sistema',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_viv_sin_sistema'.
  $field_instances['entityform-comunidad-field_com_viv_sin_sistema'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_viv_sin_sistema',
    'label' => 'Viviendas sin sistema',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_com_viv_totales'.
  $field_instances['entityform-comunidad-field_com_viv_totales'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_com_viv_totales',
    'label' => 'Cantidad de viviendas totales',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_con_fic_ce_ficha'.
  $field_instances['entityform-comunidad-field_con_fic_ce_ficha'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection',
        'settings' => array(
          'add' => 'Add',
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_view',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_con_fic_ce_ficha',
    'label' => 'Ficha de centro educativo',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_cs_location'.
  $field_instances['entityform-comunidad-field_cs_location'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cs_location',
    'label' => 'Lugar en el que está ubicado el centro de salud de referencia',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'view' => array(
      'args' => array(),
      'display_name' => '',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => '',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_cuenca_hidrografica'.
  $field_instances['entityform-comunidad-field_cuenca_hidrografica'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 54,
      ),
    ),
    'entity_type' => 'entityform',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_cuenca_hidrografica',
    'label' => 'Cuenca hidrográfica',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_cuestionario_validado'.
  $field_instances['entityform-comunidad-field_cuestionario_validado'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cuestionario_validado',
    'label' => 'Validado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_entidad_local'.
  $field_instances['entityform-comunidad-field_entidad_local'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entidad_local',
    'label' => 'Localidad',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'view' => array(
      'args' => array(),
      'display_name' => 'term_reference_1',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => 'division_politica_administrativa',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'siasar_field_location',
      'settings' => array(
        'siasar_hierarchical_select' => array(
          'force_deepest' => 1,
        ),
      ),
      'type' => 'siasar_hierarchical_select',
      'weight' => 63,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_entity_clasification'.
  $field_instances['entityform-comunidad-field_entity_clasification'] = array(
    'bundle' => 'comunidad',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entity_clasification',
    'label' => 'Clasificación',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'computed_field',
      'settings' => array(),
      'type' => 'computed',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_entity_name'.
  $field_instances['entityform-comunidad-field_entity_name'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entity_name',
    'label' => 'Nombre',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 62,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_etnia_en_mayoria'.
  $field_instances['entityform-comunidad-field_etnia_en_mayoria'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_etnia_en_mayoria',
    'label' => 'Etnia en mayoría',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_fecha_encuesta'.
  $field_instances['entityform-comunidad-field_fecha_encuesta'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Fecha en la que se llena la encuesta',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
          'show_remaining_days' => FALSE,
        ),
        'type' => 'date_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_encuesta',
    'label' => 'Fecha de aplicación',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'site-wide',
        'input_format_custom' => '',
        'label_position' => 'none',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '1900:+0',
      ),
      'type' => 'date_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_field_com_num_viv_infnt'.
  $field_instances['entityform-comunidad-field_field_com_num_viv_infnt'] = array(
    'bundle' => 'comunidad',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_field_com_num_viv_infnt',
    'label' => 'Cantidad de viviendas que TIENEN OTRA infraestructura de saneamiento PROPIA del tipo no mejorada:',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'entityform-comunidad-field_field_com_obs_poblacion'.
  $field_instances['entityform-comunidad-field_field_com_obs_poblacion'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_field_com_obs_poblacion',
    'label' => 'Observaciones sobre el grupo de población',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_idioma_predominante'.
  $field_instances['entityform-comunidad-field_idioma_predominante'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_idioma_predominante',
    'label' => 'Idioma predominante',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_imagenc'.
  $field_instances['entityform-comunidad-field_imagenc'] = array(
    'bundle' => 'comunidad',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'large',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_imagenc',
    'label' => 'Imagen',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 61,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_otras_divisiones'.
  $field_instances['entityform-comunidad-field_otras_divisiones'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 56,
      ),
    ),
    'entity_type' => 'entityform',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_otras_divisiones',
    'label' => 'Otras divisiones',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'entityform-comunidad-field_user_reference'.
  $field_instances['entityform-comunidad-field_user_reference'] = array(
    'bundle' => 'comunidad',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 0,
    'entityconnect_unload_edit' => 0,
    'field_name' => 'field_user_reference',
    'label' => 'Encuestador',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fc_impsystem-field_com_e1estado'.
  $field_instances['field_collection_item-field_com_fc_impsystem-field_com_e1estado'] = array(
    'bundle' => 'field_com_fc_impsystem',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_e1estado',
    'label' => 'Estado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 0,
          'node_count' => 0,
        ),
      ),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fc_impsystem-field_com_e1source'.
  $field_instances['field_collection_item-field_com_fc_impsystem-field_com_e1source'] = array(
    'bundle' => 'field_com_fc_impsystem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_e1source',
    'label' => 'Fuente / institución',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fc_newwatsystem-field_com_e1estado'.
  $field_instances['field_collection_item-field_com_fc_newwatsystem-field_com_e1estado'] = array(
    'bundle' => 'field_com_fc_newwatsystem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_e1estado',
    'label' => 'Estado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fc_newwatsystem-field_com_e1source'.
  $field_instances['field_collection_item-field_com_fc_newwatsystem-field_com_e1source'] = array(
    'bundle' => 'field_com_fc_newwatsystem',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_e1source',
    'label' => 'Fuente / institución',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fc_systypimprove-field_com_e1estado'.
  $field_instances['field_collection_item-field_com_fc_systypimprove-field_com_e1estado'] = array(
    'bundle' => 'field_com_fc_systypimprove',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_e1estado',
    'label' => 'Estado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fc_systypimprove-field_com_e1source'.
  $field_instances['field_collection_item-field_com_fc_systypimprove-field_com_e1source'] = array(
    'bundle' => 'field_com_fc_systypimprove',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_e1source',
    'label' => 'Fuente / institución',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fc_systypunimprove-field_com_e1estado'.
  $field_instances['field_collection_item-field_com_fc_systypunimprove-field_com_e1estado'] = array(
    'bundle' => 'field_com_fc_systypunimprove',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_e1estado',
    'label' => 'Estado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fc_systypunimprove-field_com_e1source'.
  $field_instances['field_collection_item-field_com_fc_systypunimprove-field_com_e1source'] = array(
    'bundle' => 'field_com_fc_systypunimprove',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_e1source',
    'label' => 'Fuente / institución',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cscgperf'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cscgperf'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cscgperf',
    'label' => 'Personal de salud y administrativo. Femenino',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cscgperm'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cscgperm'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cscgperm',
    'label' => 'Personal de salud y administrativo. Masculino',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cscgusuf'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cscgusuf'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cscgusuf',
    'label' => 'Usuarios promedio del sistema de salud. Femenino',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cscgusum'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cscgusum'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cscgusum',
    'label' => 'Usuarios promedio del sistema de salud. Masculino',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssa_pa'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssa_pa'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssa_pa',
    'label' => '¿El centro educativo tiene algún sistema de agua asociado?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssa_pd'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssa_pd'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssa_pd',
    'label' => 'Observaciones ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssgcodigo'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssgcodigo'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssgcodigo',
    'label' => 'Código del centro de salud',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pa'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pa'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pa',
    'label' => 'Nº de Instalaciones para personal femenino de TIPO 1',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_paa'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_paa'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_paa',
    'label' => 'Nº Instalaciones comunes a personal y pacientes femeninos de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 35,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pab'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pab'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pab',
    'label' => 'Nº Instalaciones comunes a personal y pacientes femeninos de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pac'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pac'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pac',
    'label' => 'Nº Instalaciones comunes a personal y pacientes femeninos NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pad'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pad'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pad',
    'label' => 'Nº Instalaciones comunes a personal y pacientes femeninos BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pb'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pb'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pb',
    'label' => 'Nº de Instalaciones para personal femenino de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pba'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pba'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pba',
    'label' => 'Nº Instalaciones comunes a personal y pacientes masculinos de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pbb'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pbb'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pbb',
    'label' => 'Nº Instalaciones comunes a personal y pacientes masculinos de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pbc'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pbc'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pbc',
    'label' => 'Nº Instalaciones comunes a personal y pacientes masculinos NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 41,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pbd'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pbd'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pbd',
    'label' => 'Nº Instalaciones comunes a personal y pacientes masculinos BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 42,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pc'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pc'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pc',
    'label' => 'Nº de Instalaciones para personal femenino NO MEJORADA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pca'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pca'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pca',
    'label' => 'Nº Instalaciones mixtas para personal y pacientes de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 43,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pcb'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pcb'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pcb',
    'label' => 'Nº Instalaciones mixtas para personal y pacientes de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 44,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pcc'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pcc'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pcc',
    'label' => 'Nº Instalaciones mixtas para personal y pacientes NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 45,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pcd'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pcd'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pcd',
    'label' => 'Nº Instalaciones mixtas para personal y pacientes BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 46,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pd'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pd'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pd',
    'label' => 'Nº de Instalaciones para personal femenino BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pe'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pe'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pe',
    'label' => 'Nº de Instalaciones para personal masculino de TIPO 1',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pf'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pf'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pf',
    'label' => 'Nº de Instalaciones para personal masculino de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pg'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pg'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pg',
    'label' => 'Nº de Instalaciones para personal masculino NO MEJORADA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_ph'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_ph'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_ph',
    'label' => 'Nº de Instalaciones para personal masculino BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pi'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pi'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pi',
    'label' => 'Nº de Instalaciones para personal mixto de TIPO 1',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pj'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pj'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pj',
    'label' => 'Nº de Instalaciones para personal mixto de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pk'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pk'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pk',
    'label' => 'Nº de Instalaciones para personal mixto NO MEJORADA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pl'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pl'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pl',
    'label' => 'Nº de Instalaciones para personal mixto BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pm'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pm'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pm',
    'label' => 'Nº de Instalaciones para pacientes femenino de TIPO 1',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pn'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pn'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pn',
    'label' => 'Nº de Instalaciones para pacientes femenino de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_po'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_po'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_po',
    'label' => 'Nº de Instalaciones para pacientes femenino NO MEJORADA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pp'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pp'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pp',
    'label' => 'Nº de Instalaciones para pacientes femenino BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pq'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pq'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pq',
    'label' => 'Nº de Instalaciones para pacientes masculino de TIPO 1',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pr'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pr'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pr',
    'label' => 'Nº de Instalaciones para pacientes masculino de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_ps'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_ps'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_ps',
    'label' => 'Nº de Instalaciones para pacientes masculino NO MEJORADA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pt'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pt'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pt',
    'label' => 'Nº de Instalaciones para pacientes masculino BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pu'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pu'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pu',
    'label' => 'Nº de Instalaciones para pacientes mixto de TIPO 1',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pv'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pv'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pv',
    'label' => 'Nº de Instalaciones para pacientes mixto de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pw'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_pw'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_pw',
    'label' => 'Nº de Instalaciones para pacientes mixto NO MEJORADA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_px'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_com_fic_cssh_px'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cssh_px',
    'label' => 'Nº de Instalaciones para pacientes mixto BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_group_com_fic_cscgnom'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_group_com_fic_cscgnom'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_group_com_fic_cscgnom',
    'label' => 'Nombre del centro de salud',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_fic_cs_ficha-field_system_ref'.
  $field_instances['field_collection_item-field_com_fic_cs_ficha-field_system_ref'] = array(
    'bundle' => 'field_com_fic_cs_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_system_ref',
    'label' => 'Nombre del sistema',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_viv_con_sistema-field_com_viv_con_sistnva'.
  $field_instances['field_collection_item-field_com_viv_con_sistema-field_com_viv_con_sistnva'] = array(
    'bundle' => 'field_com_viv_con_sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_viv_con_sistnva',
    'label' => 'Viviendas atendidas',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_viv_con_sistema-field_prestador_servicio'.
  $field_instances['field_collection_item-field_com_viv_con_sistema-field_prestador_servicio'] = array(
    'bundle' => 'field_com_viv_con_sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_prestador_servicio',
    'label' => 'Nombre del prestador de servicio',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_com_viv_con_sistema-field_system_ref'.
  $field_instances['field_collection_item-field_com_viv_con_sistema-field_system_ref'] = array(
    'bundle' => 'field_com_viv_con_sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_system_ref',
    'label' => 'Nombre del sistema',
    'options_limit' => FALSE,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(),
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'references_dialog_add' => 0,
        'references_dialog_edit' => 0,
        'references_dialog_search' => 0,
        'references_dialog_search_view' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_fcodigo'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_fcodigo'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_ce_fcodigo',
    'label' => 'Código del centro educativo',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_fdocf'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_fdocf'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_ce_fdocf',
    'label' => 'Personal docente y administrativo. Femenino',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_fdocm'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_fdocm'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_ce_fdocm',
    'label' => 'Personal docente y administrativo. Masculino',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_festf'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_festf'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_ce_festf',
    'label' => 'Población estudiantil. Femenino',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_festm'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_ce_festm'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_ce_festm',
    'label' => 'Población estudiantil. Masculino',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesa_pa'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesa_pa'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesa_pa',
    'label' => '¿El centro educativo tiene algún sistema de agua asociado?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesa_pd'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesa_pd'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesa_pd',
    'label' => 'Observaciones ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pa'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pa'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pa',
    'label' => 'Nº de Instalaciones para personal femenino de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_paa'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_paa'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_paa',
    'label' => 'Nº de instalaciones comunes a personal y alumnado femenino de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pab'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pab'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pab',
    'label' => 'Nº de instalaciones comunes a personal y alumnado femenino de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pac'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pac'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pac',
    'label' => 'Nº de instalaciones comunes a personal y alumnado femenino NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pad'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pad'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pad',
    'label' => 'Nº de instalaciones comunes a personal y alumnado femenino BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pb'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pb'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pb',
    'label' => 'Nº de Instalaciones para personal femenino de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pba'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pba'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pba',
    'label' => 'Nº de instalaciones comunes a personal y alumnado masculino de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pbb'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pbb'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pbb',
    'label' => 'Nº de instalaciones comunes a personal y alumnado masculino de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pbc'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pbc'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pbc',
    'label' => 'Nº de instalaciones comunes a personal y alumnado masculino NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pbd'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pbd'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pbd',
    'label' => 'Nº de instalaciones comunes a personal y alumnado masculino BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 35,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pc'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pc'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pc',
    'label' => 'Nº de Instalaciones para personal femenino NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pca'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pca'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pca',
    'label' => 'Nº instalaciones mixtas para personal y alumnado de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 36,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pcb'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pcb'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pcb',
    'label' => 'Nº instalaciones mixtas para personal y alumnado de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pcc'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pcc'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pcc',
    'label' => 'Nº instalaciones mixtas para personal y alumnado NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pcd'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pcd'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pcd',
    'label' => 'Nº instalaciones mixtas para personal y alumnado BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pd'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pd'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pd',
    'label' => 'Nº de Instalaciones para personal femenino BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pe'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pe'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pe',
    'label' => 'Nº de Instalaciones para personal masculino de TIPO 1',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pf'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pf'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 17,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pf',
    'label' => 'Nº de Instalaciones para personal masculino de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pg'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pg'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pg',
    'label' => 'Nº de Instalaciones para personal masculino NO MEJORADA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_ph'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_ph'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_ph',
    'label' => 'Nº de Instalaciones para personal masculino BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pi'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pi'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pi',
    'label' => 'Nº de Instalaciones para personal mixto de TIPO 1',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pj'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pj'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pj',
    'label' => 'Nº de Instalaciones para personal mixto de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pk'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pk'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pk',
    'label' => 'Nº de Instalaciones para personal mixto NO MEJORADA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pl'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pl'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pl',
    'label' => 'Nº de Instalaciones para personal mixto BÁSICA',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pm'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pm'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pm',
    'label' => 'Nº de Instalaciones para alumnado femenino de TIPO 1',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pn'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pn'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pn',
    'label' => 'Nº de Instalaciones para alumnado femenino de TIPO 2',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_po'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_po'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_po',
    'label' => 'Nº de Instalaciones para alumnado femenino NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pp'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pp'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pp',
    'label' => 'Nº de Instalaciones para alumnado femenino BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pq'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pq'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pq',
    'label' => 'Nº de Instalaciones para alumnado masculino de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pr'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pr'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pr',
    'label' => 'Nº de Instalaciones para alumnado masculino de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_ps'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_ps'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 30,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_ps',
    'label' => 'Nº de Instalaciones para alumnado masculino NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pt'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pt'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pt',
    'label' => 'Nº de Instalaciones para alumnado masculino BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pu'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pu'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pu',
    'label' => 'Nº de Instalaciones para alumnado mixto de TIPO 1',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pv'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pv'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pv',
    'label' => 'Nº de Instalaciones para alumnado mixto de TIPO 2',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pw'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_pw'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 34,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_pw',
    'label' => 'Nº de Instalaciones para alumnado mixto NO MEJORADA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_px'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_com_fic_cesh_px'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_com_fic_cesh_px',
    'label' => 'Nº de Instalaciones para alumnado mixto BÁSICA',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_con_fic_ce_fnombre'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_con_fic_ce_fnombre'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_con_fic_ce_fnombre',
    'label' => 'Nombre del centro educativo',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_con_fic_ce_ficha-field_system_ref'.
  $field_instances['field_collection_item-field_con_fic_ce_ficha-field_system_ref'] = array(
    'bundle' => 'field_con_fic_ce_ficha',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_system_ref',
    'label' => 'Nombre del sistema',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('1. Levantamiento general aproximado (entrevistas, control parcial de las viviendas)');
  t('2. Levantamiento utilizando el formulario auxiliar');
  t('3. Levantamiento muestral');
  t('Altitud');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, TIPO 2');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, tipo 1 o 2');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, tipo de saneamiento COMPARTIDA entre varias viviendas, mejorada TIPO 2');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, tipo de saneamiento COMPARTIDA entre varias viviendas, mejorada tipo 1 o 2');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento compartida o propia no mejorada:');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) utilizan la instalación de lavado siempre');
  t('Cantidad de viviendas que TIENEN OTRA infraestructura de saneamiento PROPIA del tipo no mejorada:');
  t('Cantidad de viviendas que TIENEN infraestructura de saneamiento PROPIA mejorada tipo 1: ');
  t('Cantidad de viviendas que TIENEN infraestructura de saneamiento PROPIA mejorada tipo 2:');
  t('Cantidad de viviendas que almacenan el agua de bebida de forma segura (en recipientes limpios y bien tapados)');
  t('Cantidad de viviendas que cuentan con una instalación básica (con agua y jabón) para el lavado de manos cerca (a menos de 10 metros) de la instalación de saneamiento');
  t('Cantidad de viviendas que recogen o tratan las basuras domésticas');
  t('Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento COMPARTIDA entre varias viviendas, mejorada TIPO 2');
  t('Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento COMPARTIDA entre varias viviendas, mejorada tipo 1 o 2');
  t('Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento PROPIA mejorada, TIPO 2');
  t('Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento PROPIA mejorada, tipo 1 o 2');
  t('Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento compartida o propia del tipo no mejorada:');
  t('Cantidad de viviendas totales');
  t('Clasificación');
  t('Cuenca hidrográfica');
  t('Código Comunidad');
  t('Código del centro de salud');
  t('Código del centro educativo');
  t('Encuestador');
  t('Estado');
  t('Etnia en mayoría');
  t('Fecha de aplicación');
  t('Fecha en la que se llena la encuesta');
  t('Ficha de centro de salud');
  t('Ficha de centro educativo');
  t('Fuente / institución');
  t('Georeferenciación');
  t('Idioma predominante');
  t('Imagen');
  t('Localidad');
  t('Lugar en el que está ubicado el centro de salud de referencia');
  t('Lugar en el que está ubicado el centro educativo de referencia');
  t('Mejora de sistema');
  t('Nombre');
  t('Nombre del centro de salud');
  t('Nombre del centro de salud externo que acude la población de la comunidad');
  t('Nombre del centro educativo');
  t('Nombre del centro educativo externo donde acude la población estudiantil');
  t('Nombre del prestador de servicio');
  t('Nombre del sistema');
  t('Nuevo sistema de agua');
  t('Nº Instalaciones comunes a personal y pacientes femeninos BÁSICA');
  t('Nº Instalaciones comunes a personal y pacientes femeninos NO MEJORADA');
  t('Nº Instalaciones comunes a personal y pacientes femeninos de TIPO 1');
  t('Nº Instalaciones comunes a personal y pacientes femeninos de TIPO 2');
  t('Nº Instalaciones comunes a personal y pacientes masculinos BÁSICA');
  t('Nº Instalaciones comunes a personal y pacientes masculinos NO MEJORADA');
  t('Nº Instalaciones comunes a personal y pacientes masculinos de TIPO 1');
  t('Nº Instalaciones comunes a personal y pacientes masculinos de TIPO 2');
  t('Nº Instalaciones mixtas para personal y pacientes BÁSICA');
  t('Nº Instalaciones mixtas para personal y pacientes NO MEJORADA');
  t('Nº Instalaciones mixtas para personal y pacientes de TIPO 1');
  t('Nº Instalaciones mixtas para personal y pacientes de TIPO 2');
  t('Nº Viviendas de la muestra:');
  t('Nº de Instalaciones para alumnado femenino BÁSICA');
  t('Nº de Instalaciones para alumnado femenino NO MEJORADA');
  t('Nº de Instalaciones para alumnado femenino de TIPO 1');
  t('Nº de Instalaciones para alumnado femenino de TIPO 2');
  t('Nº de Instalaciones para alumnado masculino BÁSICA');
  t('Nº de Instalaciones para alumnado masculino NO MEJORADA');
  t('Nº de Instalaciones para alumnado masculino de TIPO 1');
  t('Nº de Instalaciones para alumnado masculino de TIPO 2');
  t('Nº de Instalaciones para alumnado mixto BÁSICA');
  t('Nº de Instalaciones para alumnado mixto NO MEJORADA');
  t('Nº de Instalaciones para alumnado mixto de TIPO 1');
  t('Nº de Instalaciones para alumnado mixto de TIPO 2');
  t('Nº de Instalaciones para pacientes femenino BÁSICA');
  t('Nº de Instalaciones para pacientes femenino NO MEJORADA');
  t('Nº de Instalaciones para pacientes femenino de TIPO 1');
  t('Nº de Instalaciones para pacientes femenino de TIPO 2');
  t('Nº de Instalaciones para pacientes masculino BÁSICA');
  t('Nº de Instalaciones para pacientes masculino NO MEJORADA');
  t('Nº de Instalaciones para pacientes masculino de TIPO 1');
  t('Nº de Instalaciones para pacientes masculino de TIPO 2');
  t('Nº de Instalaciones para pacientes mixto BÁSICA');
  t('Nº de Instalaciones para pacientes mixto NO MEJORADA');
  t('Nº de Instalaciones para pacientes mixto de TIPO 1');
  t('Nº de Instalaciones para pacientes mixto de TIPO 2');
  t('Nº de Instalaciones para personal femenino BÁSICA');
  t('Nº de Instalaciones para personal femenino NO MEJORADA');
  t('Nº de Instalaciones para personal femenino de TIPO 1');
  t('Nº de Instalaciones para personal femenino de TIPO 2');
  t('Nº de Instalaciones para personal masculino BÁSICA');
  t('Nº de Instalaciones para personal masculino NO MEJORADA');
  t('Nº de Instalaciones para personal masculino de TIPO 1');
  t('Nº de Instalaciones para personal masculino de TIPO 2');
  t('Nº de Instalaciones para personal mixto BÁSICA');
  t('Nº de Instalaciones para personal mixto NO MEJORADA');
  t('Nº de Instalaciones para personal mixto de TIPO 1');
  t('Nº de Instalaciones para personal mixto de TIPO 2');
  t('Nº de instalaciones comunes a personal y alumnado femenino BÁSICA');
  t('Nº de instalaciones comunes a personal y alumnado femenino NO MEJORADA');
  t('Nº de instalaciones comunes a personal y alumnado femenino de TIPO 1');
  t('Nº de instalaciones comunes a personal y alumnado femenino de TIPO 2');
  t('Nº de instalaciones comunes a personal y alumnado masculino BÁSICA');
  t('Nº de instalaciones comunes a personal y alumnado masculino NO MEJORADA');
  t('Nº de instalaciones comunes a personal y alumnado masculino de TIPO 1');
  t('Nº de instalaciones comunes a personal y alumnado masculino de TIPO 2');
  t('Nº instalaciones mixtas para personal y alumnado BÁSICA');
  t('Nº instalaciones mixtas para personal y alumnado NO MEJORADA');
  t('Nº instalaciones mixtas para personal y alumnado de TIPO 1');
  t('Nº instalaciones mixtas para personal y alumnado de TIPO 2');
  t('Observaciones ');
  t('Observaciones sobre el grupo de población');
  t('Otras características de la comunidad');
  t('Otras divisiones');
  t('Personal de salud y administrativo. Femenino');
  t('Personal de salud y administrativo. Masculino');
  t('Personal docente y administrativo. Femenino');
  t('Personal docente y administrativo. Masculino');
  t('Población estudiantil. Femenino');
  t('Población estudiantil. Masculino');
  t('Población total');
  t('Redacción');
  t('Se posee de servicios de conexión a Internet (3G o 4G)');
  t('Se posee de servicios de energía eléctrica');
  t('Se posee de servicios de telefonía celular');
  t('Se posee de servicios de telefonía fija');
  t('Sistema de Saneamiento del tipo 1 y 2 mejorado');
  t('Sistema de Saneamiento del tipo no mejorado');
  t('Usuarios promedio del sistema de salud. Femenino');
  t('Usuarios promedio del sistema de salud. Masculino');
  t('Validado');
  t('Viviendas atendidas');
  t('Viviendas con sistema');
  t('Viviendas sin sistema');
  t('¿Cuál es la disposición final de la basura más habitual en la comunidad? (quema, enterrada, tirada, tirada en un cuerpo de agua, etc.)');
  t('¿El centro educativo tiene algún sistema de agua asociado?');
  t('¿Existe algún centro de salud en la comunidad?');
  t('¿Existe algún centro educativo en la comunidad?');
  t('¿Existe algún tipo de práctica de recolección y/o tratamiento de basuras en la comunidad?');
  t('Área o zona de planificación');

  return $field_instances;
}
