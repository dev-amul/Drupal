<?php
/**
 * @file
 * feature_siasar_field_bases.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_siasar_field_bases_field_default_field_instances() {
  $field_instances = array();

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
      'weight' => 40,
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
      'weight' => 35,
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
      'weight' => 34,
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
      'weight' => 32,
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
      'weight' => 31,
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
      'weight' => 38,
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
      'weight' => 23,
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
      'weight' => 22,
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
      'weight' => 21,
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
      'weight' => 39,
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
      'module' => 'shs',
      'settings' => array(
        'shs' => array(
          'create_new_levels' => 0,
          'create_new_terms' => 0,
          'force_deepest' => 1,
        ),
      ),
      'type' => 'taxonomy_shs',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_actualizar_prov_servicio'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_actualizar_prov_servicio'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'field_name' => 'field_actualizar_prov_servicio',
    'label' => '10. Llevar actualizado un listado de proveedores de servicio (electricistas, fontaneros mayores, laboratorios de calidad de agua) y proveedores de bienes (materiales de construcción y fontanería, productos químicos) para brindar apoyo a los CAPS',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_apoyar_actualizar_tarifa'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_apoyar_actualizar_tarifa'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_apoyar_actualizar_tarifa',
    'label' => '4. Apoyar a establecer y actualizar la tarifa',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_apoyar_caps_conflictos'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_apoyar_caps_conflictos'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_apoyar_caps_conflictos',
    'label' => '7. Apoyar a los CAPS en el análisis y en la solución de conflictos (ej: uso o abuso del agua de los sistemas)',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_apoyar_caps_planificacion'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_apoyar_caps_planificacion'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_apoyar_caps_planificacion',
    'label' => '6. Apoyar a los CAPS en la planificación y desarrollo de asambleas de rendición de cuentas a la comunidad',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_apoyar_juridica_caps'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_apoyar_juridica_caps'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_apoyar_juridica_caps',
    'label' => '2. Apoyar la obtención de la figura Legal de los CAPS',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_apoyar_legalizacion_reglam'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_apoyar_legalizacion_reglam'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_apoyar_legalizacion_reglam',
    'label' => '5. Apoyar en el establecimiento y legalización de reglamentos operativos',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_asesorar_prestador_aom'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_asesorar_prestador_aom'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'field_name' => 'field_asesorar_prestador_aom',
    'label' => '11. Asesorar al prestador (incluyendo fontanero) en temas de AOM',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_cantidad_comunidades_apoya'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_cantidad_comunidades_apoya'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cantidad_comunidades_apoya',
    'label' => 'Cantidad de comunidades apoyadas en los últimos 12 meses',
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

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_cantidad_equipos_inform'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_cantidad_equipos_inform'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cantidad_equipos_inform',
    'label' => 'Cantidad de equipos informáticos (computadora/impresora)',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_cantidad_equipos_transport'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_cantidad_equipos_transport'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cantidad_equipos_transport',
    'label' => 'Cantidad de equipos de transporte ',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_cantidad_medicion_agua'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_cantidad_medicion_agua'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cantidad_medicion_agua',
    'label' => 'Cantidad de equipos para la medición de la calidad del agua',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_cantidad_tecnicos_zona'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_cantidad_tecnicos_zona'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'field_name' => 'field_cantidad_tecnicos_zona',
    'label' => 'Cantidad de técnicos en la zona',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_caps_medicion_pozo_agua'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_caps_medicion_pozo_agua'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_caps_medicion_pozo_agua',
    'label' => '9. Asesorar a los CAPS en la medición de niveles estáticos de pozos y caudales de agua superficiales ',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_cuenta_presupuesto_anual'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_cuenta_presupuesto_anual'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cuenta_presupuesto_anual',
    'label' => 'Cuenta con presupuesto operativo anual',
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

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_cuestionario_validado'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_cuestionario_validado'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
        'weight' => 36,
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
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_dispone_fondos_combistible'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_dispone_fondos_combistible'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'field_name' => 'field_dispone_fondos_combistible',
    'label' => 'Dispone de fondos para combustible',
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

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_dispone_fondos_viaticos'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_dispone_fondos_viaticos'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dispone_fondos_viaticos',
    'label' => 'Dispone de fondos para viáticos',
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
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_dispone_material_didactico'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_dispone_material_didactico'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dispone_material_didactico',
    'label' => 'Dispone de material didáctico impreso para distribución',
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

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_dispone_servicios_internet'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_dispone_servicios_internet'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_dispone_servicios_internet',
    'label' => 'Dispone de servicios de internet',
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

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_entidad_local'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_entidad_local'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entidad_local',
    'label' => 'Zona de Atención',
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
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_entity_clasification'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_entity_clasification'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 37,
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
      'weight' => 37,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_entity_name'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_entity_name'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
      'weight' => 40,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_estado_equipos_informatico'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_estado_equipos_informatico'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_estado_equipos_informatico',
    'label' => 'Estado de los equipos informáticos (computadora/impresora)',
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
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_estado_equipos_transporte'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_estado_equipos_transporte'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_estado_equipos_transporte',
    'label' => 'Estado de los equipos de transporte ',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_estado_medicion_agua'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_estado_medicion_agua'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_estado_medicion_agua',
    'label' => 'Estado de los equipos para la medición de la calidad del agua',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_fecha_de_aplicacion'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_fecha_de_aplicacion'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'deleted' => 0,
    'description' => 'Fecha en la que se cubre la encuesta',
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
    'field_name' => 'field_fecha_de_aplicacion',
    'label' => 'Fecha de Aplicación',
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'none',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '1900:+0',
      ),
      'type' => 'date_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_imagenpat'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_imagenpat'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'field_name' => 'field_imagenpat',
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
      'weight' => 39,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_monto'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_monto'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto',
    'label' => 'Monto',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 511,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 38,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_observaciones_comentarios'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_observaciones_comentarios'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_observaciones_comentarios',
    'label' => 'Observaciones y comentarios',
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
      'weight' => 29,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_otras_numero_comunidade'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_otras_numero_comunidade'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'field_name' => 'field_otras_numero_comunidade',
    'label' => '14. Número de comunidades en los que se ofrece otros servicios',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_otras_tipo_apoyo'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_otras_tipo_apoyo'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_otras_tipo_apoyo',
    'label' => '13. Otros servicios ofrecidos',
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
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_recolectar_muestras_agua'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_recolectar_muestras_agua'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_recolectar_muestras_agua',
    'label' => '8. Recolectar muestras para análisis de calidad de agua de los sistemas y asesorar en su toma, medición e interp. de los datos',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_revisar_actualizar_finanza'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_revisar_actualizar_finanza'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_revisar_actualizar_finanza',
    'label' => '3. Revisar y actualizar las finanzas del sistema',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_siasar_planification_anual'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_siasar_planification_anual'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'field_name' => 'field_siasar_planification_anual',
    'label' => '12. Actualizar y utilizar el SIASAR para propósitos de planificación municipal anual en materia de agua y saneamiento rural ',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_tipo_de_pat2'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_tipo_de_pat2'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'field_name' => 'field_tipo_de_pat2',
    'label' => 'Tipo de PAT',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_total_comunidades_zona'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_total_comunidades_zona'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_total_comunidades_zona',
    'label' => 'Total de comunidades en la zona de atención',
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
  // 'entityform-prestador_de_asistencia_t_cnica-field_user_reference'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_user_reference'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_asistencia_t_cnica-field_verificar_apoyar_caps'.
  $field_instances['entityform-prestador_de_asistencia_t_cnica-field_verificar_apoyar_caps'] = array(
    'bundle' => 'prestador_de_asistencia_t_cnica',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_verificar_apoyar_caps',
    'label' => '1. Verificar y apoyar la conformación, funcionamiento y reorganización de los CAPS',
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
  // 'entityform-prestador_de_servicio-field__aportaciones_extras'.
  $field_instances['entityform-prestador_de_servicio-field__aportaciones_extras'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 37,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field__aportaciones_extras',
    'label' => '¿Se han realizado aportaciones extraordinarias no directamente vinculadas al servicio de agua? ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 104,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field__cuenta_con_fondos_disponi'.
  $field_instances['entityform-prestador_de_servicio-field__cuenta_con_fondos_disponi'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 54,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field__cuenta_con_fondos_disponi',
    'label' => '¿Cuenta con fondos disponibles?',
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
      'weight' => 144,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_acta_rendicion_cuentas'.
  $field_instances['entityform-prestador_de_servicio-field_acta_rendicion_cuentas'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_acta_rendicion_cuentas',
    'label' => '¿Existe acta de la última asamblea de rendición de cuentas?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 128,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_activos_corrientes'.
  $field_instances['entityform-prestador_de_servicio-field_activos_corrientes'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 57,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_activos_corrientes',
    'label' => 'Activos Corrientes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 511,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_activos_no_corrientes'.
  $field_instances['entityform-prestador_de_servicio-field_activos_no_corrientes'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 58,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_activos_no_corrientes',
    'label' => 'Activos No Corrientes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 511,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_agua_facturada'.
  $field_instances['entityform-prestador_de_servicio-field_agua_facturada'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'value' => '0.00',
        'target_id' => 609,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_agua_facturada',
    'label' => 'Agua facturada (promedio mensual, en metros cúbicos)',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 609,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 609,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_agua_producida'.
  $field_instances['entityform-prestador_de_servicio-field_agua_producida'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'value' => '0.00',
        'target_id' => 609,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_agua_producida',
    'label' => 'Agua producida (promedio mensual, en metros cúbicos)',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 609,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 609,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-prestador_de_servicio-field_altitud'.
  $field_instances['entityform-prestador_de_servicio-field_altitud'] = array(
    'bundle' => 'prestador_de_servicio',
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
    'field_name' => 'field_altitud',
    'label' => 'Altitud',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'mts.',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 153,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_apoyo_gob_otros'.
  $field_instances['entityform-prestador_de_servicio-field_apoyo_gob_otros'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 65,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_apoyo_gob_otros',
    'label' => '¿Reciben apoyo técnico del gobierno/otras instituciones para la operación del sistema u otras actividades?',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_atencion_del_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_atencion_del_prestador'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 61,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_atencion_del_prestador',
    'label' => 'El Prestador está dando la atención en operación y mantenimiento al sistema de Agua',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 111,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_balance_contable'.
  $field_instances['entityform-prestador_de_servicio-field_balance_contable'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 56,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_balance_contable',
    'label' => '	¿Dispone de balance contable?',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_clase_de_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_clase_de_prestador'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_clase_de_prestador',
    'label' => 'Clase de prestador',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_codigo_de_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_codigo_de_prestador'] = array(
    'bundle' => 'prestador_de_servicio',
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
    'field_name' => 'field_codigo_de_prestador',
    'label' => 'Código de prestador ',
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
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 154,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_comentarios'.
  $field_instances['entityform-prestador_de_servicio-field_comentarios'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 83,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_comentarios',
    'label' => 'Observaciones y comentarios',
    'required' => FALSE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 115,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_cuenta_banco'.
  $field_instances['entityform-prestador_de_servicio-field_cuenta_banco'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cuenta_banco',
    'label' => 'El prestador, ¿tiene cuenta bancaria?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_cuestionario_validado'.
  $field_instances['entityform-prestador_de_servicio-field_cuestionario_validado'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 84,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_entidad_local'.
  $field_instances['entityform-prestador_de_servicio-field_entidad_local'] = array(
    'bundle' => 'prestador_de_servicio',
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
          'force_deepest' => 1,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 151,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_entity_clasification'.
  $field_instances['entityform-prestador_de_servicio-field_entity_clasification'] = array(
    'bundle' => 'prestador_de_servicio',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 85,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_entity_name'.
  $field_instances['entityform-prestador_de_servicio-field_entity_name'] = array(
    'bundle' => 'prestador_de_servicio',
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
      'weight' => 150,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_estado_legal'.
  $field_instances['entityform-prestador_de_servicio-field_estado_legal'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_estado_legal',
    'label' => 'Estado legal del prestador ',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 49,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_facturacion_promedio'.
  $field_instances['entityform-prestador_de_servicio-field_facturacion_promedio'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_facturacion_promedio',
    'label' => 'Facturación (promedio mensual de los últimos 12 meses, en la moneda especificada en la C2)',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 309,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 66,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_fecha_aplicacion'.
  $field_instances['entityform-prestador_de_servicio-field_fecha_aplicacion'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
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
    'field_name' => 'field_fecha_aplicacion',
    'label' => 'Fecha de Aplicación',
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
      'weight' => 93,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_fecha_creacion'.
  $field_instances['entityform-prestador_de_servicio-field_fecha_creacion'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_creacion',
    'label' => 'Fecha de creación',
    'required' => 0,
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
      'weight' => 48,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_fecha_eleccion'.
  $field_instances['entityform-prestador_de_servicio-field_fecha_eleccion'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
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
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_eleccion',
    'label' => 'Fecha de última elección de los miembros de Junta',
    'required' => 0,
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
      'weight' => 51,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_promedio_admin'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_promedio_admin'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 41,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_promedio_admin',
    'label' => 'Gasto promedio mensual real en administración',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 471,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 134,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_real_ambientales'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_real_ambientales'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 44,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_real_ambientales',
    'label' => 'Gasto promedio mensual real en servicios ambientales',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 323,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 140,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_real_mantenimiento'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_real_mantenimiento'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 43,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_real_mantenimiento',
    'label' => 'Gasto promedio mensual real en mantenimiento ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 360,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 138,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_real_operacion'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_real_operacion'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 42,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_real_operacion',
    'label' => 'Gasto promedio mensual real en operación',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 471,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 136,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_teorico_admin'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_teorico_admin'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_teorico_admin',
    'label' => 'Gasto promedio mensual teórico en administración ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 471,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 135,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_teorico_ambientales'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_teorico_ambientales'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_teorico_ambientales',
    'label' => 'Gasto promedio mensual teórico en servicios ambientales      ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 323,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 141,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_teorico_mantenimient'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_teorico_mantenimient'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_teorico_mantenimient',
    'label' => 'Gasto promedio mensual teórico en mantenimiento',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 323,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 139,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_teorico_operacion'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_teorico_operacion'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_teorico_operacion',
    'label' => 'Gasto promedio mensual teórico en operación',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 336,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 137,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_higiene_comunitaria'.
  $field_instances['entityform-prestador_de_servicio-field_higiene_comunitaria'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 67,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_higiene_comunitaria',
    'label' => 'Monitoreo de la higiene comunitaria: ¿El prestador promueve saneamiento ambiental?',
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
      'weight' => 85,
    ),
  );

  // Exported field_instance: 'entityform-prestador_de_servicio-field_imagenps'.
  $field_instances['entityform-prestador_de_servicio-field_imagenps'] = array(
    'bundle' => 'prestador_de_servicio',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_imagenps',
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
      'weight' => 149,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_inf_medicion_agua'.
  $field_instances['entityform-prestador_de_servicio-field_inf_medicion_agua'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_inf_medicion_agua',
    'label' => '¿Se tiene información sobre la medición del agua?',
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_ingresos_extra'.
  $field_instances['entityform-prestador_de_servicio-field_ingresos_extra'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ingresos_extra',
    'label' => '¿Han tenido ingresos extraordinarios de funcionamiento?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 58,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_ingresos_reales'.
  $field_instances['entityform-prestador_de_servicio-field_ingresos_reales'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ingresos_reales',
    'label' => ' Ingresos reales por facturación ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 309,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 68,
    ),
  );

  // Exported field_instance: 'entityform-prestador_de_servicio-field_latitud'.
  $field_instances['entityform-prestador_de_servicio-field_latitud'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
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
    'field_name' => 'field_latitud',
    'label' => 'Georeferenciación',
    'required' => 0,
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
      'weight' => 152,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_libro_ingresos_egresos'.
  $field_instances['entityform-prestador_de_servicio-field_libro_ingresos_egresos'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 51,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_libro_ingresos_egresos',
    'label' => '¿Tienen libro de ingresos y egresos al día?',
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
      'weight' => 146,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_mantenimiento_sistema'.
  $field_instances['entityform-prestador_de_servicio-field_mantenimiento_sistema'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 32,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_mantenimiento_sistema',
    'label' => '¿De qué forma es mantenido el sistema?',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 130,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_mecanismo_pago_tarifa'.
  $field_instances['entityform-prestador_de_servicio-field_mecanismo_pago_tarifa'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_mecanismo_pago_tarifa',
    'label' => '¿La comunidad conoce el mecanismo de pago de la tarifa y se aplica de forma regular? ',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_miembros_nombrados'.
  $field_instances['entityform-prestador_de_servicio-field_miembros_nombrados'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_miembros_nombrados',
    'label' => '¿Todos los miembros de la Junta Directiva están nombrados?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 52,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_aporte_finalizado'.
  $field_instances['entityform-prestador_de_servicio-field_monto_aporte_finalizado'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 38,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_aporte_finalizado',
    'label' => 'Monto total del último año finalizado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 309,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 105,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_aporte_previsto'.
  $field_instances['entityform-prestador_de_servicio-field_monto_aporte_previsto'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 39,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_aporte_previsto',
    'label' => 'Monto previsto para el año en curso',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 309,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 106,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_previsto'.
  $field_instances['entityform-prestador_de_servicio-field_monto_previsto'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_previsto',
    'label' => 'Monto previsto para el año en curso',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 309,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 60,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_total_de_egresos'.
  $field_instances['entityform-prestador_de_servicio-field_monto_total_de_egresos'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_total_de_egresos',
    'label' => 'Monto total de egresos en el último año',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 314,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 148,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_total_de_ingresos'.
  $field_instances['entityform-prestador_de_servicio-field_monto_total_de_ingresos'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_total_de_ingresos',
    'label' => 'Monto total de ingresos en el último año ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 314,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 147,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_total_finalizado'.
  $field_instances['entityform-prestador_de_servicio-field_monto_total_finalizado'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_total_finalizado',
    'label' => 'Monto total del último año finalizado',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 309,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 59,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_total_fondos'.
  $field_instances['entityform-prestador_de_servicio-field_monto_total_fondos'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 55,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_total_fondos',
    'label' => 'Monto total actual',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 511,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 145,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_no_aguas_residuales'.
  $field_instances['entityform-prestador_de_servicio-field_no_aguas_residuales'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 70,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_no_aguas_residuales',
    'label' => 'Promoción de no descargas de aguas residuales',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 88,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_no_tala_y_resforestacion'.
  $field_instances['entityform-prestador_de_servicio-field_no_tala_y_resforestacion'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 80,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_no_tala_y_resforestacion',
    'label' => 'Realización de acciones que promuevan la NO tala de árboles y la reforestación',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_no_uso_plaguicidas'.
  $field_instances['entityform-prestador_de_servicio-field_no_uso_plaguicidas'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 69,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_no_uso_plaguicidas',
    'label' => 'Promoción del no uso de plaguicidas en la zona cercana a la fuente o toma de agua del sistema',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 87,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_nombre_entidad_apoya'.
  $field_instances['entityform-prestador_de_servicio-field_nombre_entidad_apoya'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 66,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_nombre_entidad_apoya',
    'label' => 'Nombre de entidad que apoya',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_numero_reuniones'.
  $field_instances['entityform-prestador_de_servicio-field_numero_reuniones'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_numero_reuniones',
    'label' => 'Número de reuniones de la junta directiva en los últimos 6 meses',
    'required' => 0,
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
      'weight' => 53,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_otra_clase_de_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_otra_clase_de_prestador'] = array(
    'bundle' => 'prestador_de_servicio',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_otra_clase_de_prestador',
    'label' => 'Otra clase de prestador',
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

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_otros_mantenimientos'.
  $field_instances['entityform-prestador_de_servicio-field_otros_mantenimientos'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_otros_mantenimientos',
    'label' => '¿Qué "otros" mantiene el sistema?',
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
      'weight' => 131,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_otros_motivos'.
  $field_instances['entityform-prestador_de_servicio-field_otros_motivos'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_otros_motivos',
    'label' => '¿Por qué otros motivos no se conoce el mecanismo?',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_pasivos_corrientes_'.
  $field_instances['entityform-prestador_de_servicio-field_pasivos_corrientes_'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 59,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_pasivos_corrientes_',
    'label' => 'Pasivos Corrientes ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 511,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_pasivos_no_corrientes'.
  $field_instances['entityform-prestador_de_servicio-field_pasivos_no_corrientes'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 60,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_pasivos_no_corrientes',
    'label' => 'Pasivos No Corrientes',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 511,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_personal_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_personal_prestador'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 63,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_personal_prestador',
    'label' => '¿Cuentan con personal técnico, operador o fontanero para la operación y mantenimiento?',
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
      'weight' => 87,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_proteccion_flora_fauna'.
  $field_instances['entityform-prestador_de_servicio-field_proteccion_flora_fauna'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 75,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_proteccion_flora_fauna',
    'label' => 'Protección de la flora y fauna de la zona cercana a la fuente o toma de agua del sistema',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 21,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_proteccion_suelos'.
  $field_instances['entityform-prestador_de_servicio-field_proteccion_suelos'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 81,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_proteccion_suelos',
    'label' => 'Protección de suelos (Estabilización de taludes, barreras vivas, barreras muertas, etc.)',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 27,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_proteccion_terreno'.
  $field_instances['entityform-prestador_de_servicio-field_proteccion_terreno'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 73,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_proteccion_terreno',
    'label' => 'Revisión y/o aumento de la protección legal o administrativa del terreno donde se ubica la toma y/o del recurso hídrico',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_proteccion_zona_fuente'.
  $field_instances['entityform-prestador_de_servicio-field_proteccion_zona_fuente'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 68,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_proteccion_zona_fuente',
    'label' => '¿El prestador promueve acciones de protección de la zona cercana a la fuente o toma de agua del sistema?',
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
      'weight' => 86,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_recursos_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_recursos_prestador'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 62,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_recursos_prestador',
    'label' => '¿El prestador de servicio cuenta con recursos (material de construcción, herramientas, equipo) para el desarrollo de sus actividades de mantenimiento?',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_reforestacion'.
  $field_instances['entityform-prestador_de_servicio-field_reforestacion'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 71,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_reforestacion',
    'label' => 'Reforestación',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 89,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_reglamento_servicios'.
  $field_instances['entityform-prestador_de_servicio-field_reglamento_servicios'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 64,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_reglamento_servicios',
    'label' => '¿Poseen un reglamento para la prestación del servicio?',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 80,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_representantes'.
  $field_instances['entityform-prestador_de_servicio-field_representantes'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_representantes',
    'label' => 'Representantes',
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
      'weight' => 30,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_revision_componentes_toma'.
  $field_instances['entityform-prestador_de_servicio-field_revision_componentes_toma'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 79,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_componentes_toma',
    'label' => 'Acción preventiva: Revisión y/o sustitución periódica de los componentes pertenecientes a la toma de agua del sistema (antes de rotura o daño)  Realización de acciones que promuevan la NO tala de árboles y la reforestación',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_revision_demarcacion'.
  $field_instances['entityform-prestador_de_servicio-field_revision_demarcacion'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 76,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_demarcacion',
    'label' => 'Revisión del buen estado de la demarcación y señalización de la zona cercana a la fuente o toma de agua del sistema',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 22,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_revision_estado_cercano'.
  $field_instances['entityform-prestador_de_servicio-field_revision_estado_cercano'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 77,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_estado_cercano',
    'label' => 'Revisión del estado del cercado de la obra de toma y/o mejorarlo',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_revision_estado_obra'.
  $field_instances['entityform-prestador_de_servicio-field_revision_estado_obra'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 78,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_estado_obra',
    'label' => 'Revisión del estado de la obra de toma limpia y/o mejorarlo',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_revision_plan_contingencia'.
  $field_instances['entityform-prestador_de_servicio-field_revision_plan_contingencia'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 82,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_plan_contingencia',
    'label' => 'Revisión y actualización del plan de contingencia (incendio, desastres naturales)',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 28,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_rinde_cuentas'.
  $field_instances['entityform-prestador_de_servicio-field_rinde_cuentas'] = array(
    'bundle' => 'prestador_de_servicio',
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
    'field_name' => 'field_rinde_cuentas',
    'label' => 'El prestador, ¿rinde cuentas?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 127,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_sumatoria_gastos_reales'.
  $field_instances['entityform-prestador_de_servicio-field_sumatoria_gastos_reales'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 45,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sumatoria_gastos_reales',
    'label' => 'Suma de gastos reales ',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 314,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 142,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_sumatoria_gastos_teoricos'.
  $field_instances['entityform-prestador_de_servicio-field_sumatoria_gastos_teoricos'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 50,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sumatoria_gastos_teoricos',
    'label' => 'Suma de gastos teóricos',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 314,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 143,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_sustitucion_componentes'.
  $field_instances['entityform-prestador_de_servicio-field_sustitucion_componentes'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 72,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sustitucion_componentes',
    'label' => 'Sustitución de componentes pertenecientes a la toma de agua del sistema (una vez dañados)',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 90,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_tarifa_media_mensual'.
  $field_instances['entityform-prestador_de_servicio-field_tarifa_media_mensual'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'target_id' => 397,
        'value' => '0.00',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tarifa_media_mensual',
    'label' => 'Tarifa media mensual',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 397,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 406,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 63,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_tasa_anual_de_expansion_pr'.
  $field_instances['entityform-prestador_de_servicio-field_tasa_anual_de_expansion_pr'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 40,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tasa_anual_de_expansion_pr',
    'label' => 'Tasa anual de expansión promedio',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 467,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 132,
    ),
  );

  // Exported field_instance: 'entityform-prestador_de_servicio-field_tecnicos'.
  $field_instances['entityform-prestador_de_servicio-field_tecnicos'] = array(
    'bundle' => 'prestador_de_servicio',
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
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tecnicos',
    'label' => 'Técnicos',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_tiene_definido_tipo_tarifa'.
  $field_instances['entityform-prestador_de_servicio-field_tiene_definido_tipo_tarifa'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tiene_definido_tipo_tarifa',
    'label' => 'Tiene definido un tipo de tarifa?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_tipo_de_tarifa'.
  $field_instances['entityform-prestador_de_servicio-field_tipo_de_tarifa'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tipo_de_tarifa',
    'label' => 'Tipo de tarifa',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 62,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_user_reference'.
  $field_instances['entityform-prestador_de_servicio-field_user_reference'] = array(
    'bundle' => 'prestador_de_servicio',
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
      'weight' => 94,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_usuarios_al_dia'.
  $field_instances['entityform-prestador_de_servicio-field_usuarios_al_dia'] = array(
    'bundle' => 'prestador_de_servicio',
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
    'field_name' => 'field_usuarios_al_dia',
    'label' => 'Número de usuarios al día en sus pagos ordinarios',
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
      'weight' => 67,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_usuarios_deberian_pagan'.
  $field_instances['entityform-prestador_de_servicio-field_usuarios_deberian_pagan'] = array(
    'bundle' => 'prestador_de_servicio',
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
    'entity_type' => 'entityform',
    'field_name' => 'field_usuarios_deberian_pagan',
    'label' => 'Número de usuarios que deberían pagar factura',
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
      'weight' => 65,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_vigilancia_zona'.
  $field_instances['entityform-prestador_de_servicio-field_vigilancia_zona'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 74,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_vigilancia_zona',
    'label' => 'Vigilancia de la zona cercana a la fuente o toma de agua del sistema',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_a4_2'.
  $field_instances['entityform-sistema-field_a4_2'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_a4_2',
    'label' => '¿Qué otro tipo de sistema es?',
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
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 79,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_a6_croquis'.
  $field_instances['entityform-sistema-field_a6_croquis'] = array(
    'bundle' => 'sistema',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_a6_croquis',
    'label' => 'Croquis',
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
      'weight' => 44,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_a_fuentes_de_financiamient'.
  $field_instances['entityform-sistema-field_a_fuentes_de_financiamient'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'field_collection_table',
        'settings' => array(
          'add' => 'Add',
          'cssfield' => FALSE,
          'cssrowcol' => FALSE,
          'delete' => 'Delete',
          'description' => TRUE,
          'edit' => 'Edit',
          'empty' => TRUE,
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_table_view',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_a_fuentes_de_financiamient',
    'label' => 'Fuentes de financiamiento',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_agua_en_invierno'.
  $field_instances['entityform-sistema-field_agua_en_invierno'] = array(
    'bundle' => 'sistema',
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
        'type' => 'list_key',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_agua_en_invierno',
    'label' => '¿Hay suficiente agua en las fuentes en función de la demanda en el invierno / época de lluvias?',
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
      'weight' => 54,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_agua_en_verano'.
  $field_instances['entityform-sistema-field_agua_en_verano'] = array(
    'bundle' => 'sistema',
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
        'type' => 'list_key',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_agua_en_verano',
    'label' => '¿Hay suficiente agua en las fuentes en función de la demanda en el verano / época seca?',
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
      'weight' => 53,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_alto'.
  $field_instances['entityform-sistema-field_alto'] = array(
    'bundle' => 'sistema',
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_alto',
    'label' => 'Altitud',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'mts.',
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

  // Exported field_instance: 'entityform-sistema-field_anno_construccion'.
  $field_instances['entityform-sistema-field_anno_construccion'] = array(
    'bundle' => 'sistema',
    'default_value' => array(),
    'deleted' => 0,
    'description' => 'Año en que se construyó el sistema ',
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_anno_construccion',
    'label' => 'Año de construcción',
    'required' => 0,
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
        'input_format_custom' => 'Y',
        'label_position' => 'none',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1900:+0',
      ),
      'type' => 'date_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_cantidad_de_cloro_residual'.
  $field_instances['entityform-sistema-field_cantidad_de_cloro_residual'] = array(
    'bundle' => 'sistema',
    'default_value' => array(
      0 => array(
        'value' => 0,
        'target_id' => 599,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cantidad_de_cloro_residual',
    'label' => 'Cantidad de cloro residual',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 599,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => 599,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_caudal_actual_del_sistema'.
  $field_instances['entityform-sistema-field_caudal_actual_del_sistema'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_caudal_actual_del_sistema',
    'label' => 'Caudal actual del sistema',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 598,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => 594,
            'pt-br' => 625,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 102,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_codigo_de_sistema'.
  $field_instances['entityform-sistema-field_codigo_de_sistema'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_codigo_de_sistema',
    'label' => 'Código de Sistema',
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
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_cuestionario_validado'.
  $field_instances['entityform-sistema-field_cuestionario_validado'] = array(
    'bundle' => 'sistema',
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
        'weight' => 29,
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

  // Exported field_instance: 'entityform-sistema-field_d_infraestructura'.
  $field_instances['entityform-sistema-field_d_infraestructura'] = array(
    'bundle' => 'sistema',
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
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_d_infraestructura',
    'label' => 'Infraestructura de tratamiento',
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
      'weight' => 72,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_e_infraestructura_almac'.
  $field_instances['entityform-sistema-field_e_infraestructura_almac'] = array(
    'bundle' => 'sistema',
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
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_e_infraestructura_almac',
    'label' => 'Infraestructura de almacenamiento',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_entidad_local'.
  $field_instances['entityform-sistema-field_entidad_local'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 5,
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
          'force_deepest' => 1,
          'node_count' => 0,
        ),
      ),
      'type' => 'taxonomy_shs',
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_entity_clasification'.
  $field_instances['entityform-sistema-field_entity_clasification'] = array(
    'bundle' => 'sistema',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'computed_field',
        'settings' => array(),
        'type' => 'computed_field_plain',
        'weight' => 30,
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

  // Exported field_instance: 'entityform-sistema-field_entity_name'.
  $field_instances['entityform-sistema-field_entity_name'] = array(
    'bundle' => 'sistema',
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_f_red_de_distribucion'.
  $field_instances['entityform-sistema-field_f_red_de_distribucion'] = array(
    'bundle' => 'sistema',
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
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_f_red_de_distribucion',
    'label' => 'Red de distribución',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_fecha_analisiscalidad_agua'.
  $field_instances['entityform-sistema-field_fecha_analisiscalidad_agua'] = array(
    'bundle' => 'sistema',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_analisiscalidad_agua',
    'label' => 'Fecha de análisis de la calidad del agua',
    'required' => 0,
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_fecha_de_aplicaci_n'.
  $field_instances['entityform-sistema-field_fecha_de_aplicaci_n'] = array(
    'bundle' => 'sistema',
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
    'field_name' => 'field_fecha_de_aplicaci_n',
    'label' => 'Fecha de Aplicación',
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
        'increment' => 30,
        'input_format' => 'd/m/Y - g:i:sa',
        'input_format_custom' => '',
        'label_position' => 'none',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '1900:+0',
      ),
      'type' => 'date_select',
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_fuente_y_o_captacion'.
  $field_instances['entityform-sistema-field_fuente_y_o_captacion'] = array(
    'bundle' => 'sistema',
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
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fuente_y_o_captacion',
    'label' => ' Fuente y/o captación',
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
      'weight' => 46,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g2_1'.
  $field_instances['entityform-sistema-field_g2_1'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
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
    'field_name' => 'field_g2_1',
    'label' => 'Desinfección con cloro',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g3_1'.
  $field_instances['entityform-sistema-field_g3_1'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
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
    'field_name' => 'field_g3_1',
    'label' => 'Filtración domiciliaria',
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
      'weight' => 101,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g4_3'.
  $field_instances['entityform-sistema-field_g4_3'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_g4_3',
    'label' => 'Pasa el test de coliformes?',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g4_4'.
  $field_instances['entityform-sistema-field_g4_4'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
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
    'field_name' => 'field_g4_4',
    'label' => 'Pasa el test de análisis físico-químicos',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_h1_1'.
  $field_instances['entityform-sistema-field_h1_1'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_h1_1',
    'label' => 'Observaciones y comentarios',
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
      'weight' => 44,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_imagen'.
  $field_instances['entityform-sistema-field_imagen'] = array(
    'bundle' => 'sistema',
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
    'field_name' => 'field_imagen',
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_latitud'.
  $field_instances['entityform-sistema-field_latitud'] = array(
    'bundle' => 'sistema',
    'default_value' => array(
      0 => array(
        'input_format' => 'lat/lon',
        'geom' => array(
          'lat' => '0.00',
          'lon' => '0.00',
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_latitud',
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
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_lineas_de_conduccion'.
  $field_instances['entityform-sistema-field_lineas_de_conduccion'] = array(
    'bundle' => 'sistema',
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
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_lineas_de_conduccion',
    'label' => 'Líneas de conducción',
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
      'weight' => 74,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_rehabilitaciones_y_o_ampli'.
  $field_instances['entityform-sistema-field_rehabilitaciones_y_o_ampli'] = array(
    'bundle' => 'sistema',
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rehabilitaciones_y_o_ampli',
    'label' => 'Rehabilitaciones y/o ampliaciones',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'field_collection',
      'settings' => array(),
      'type' => 'field_collection_embed',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_tipo_de_sistema_de_absto'.
  $field_instances['entityform-sistema-field_tipo_de_sistema_de_absto'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tipo_de_sistema_de_absto',
    'label' => 'Tipo de sistema de abastecimiento de agua',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 78,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_user_reference'.
  $field_instances['entityform-sistema-field_user_reference'] = array(
    'bundle' => 'sistema',
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
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_a_fuentes_de_financiamient-field_monto_financiamiento'.
  $field_instances['field_collection_item-field_a_fuentes_de_financiamient-field_monto_financiamiento'] = array(
    'bundle' => 'field_a_fuentes_de_financiamient',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_monto_financiamiento',
    'label' => 'Monto',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 331,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_a_fuentes_de_financiamient-field_origen_de_financiamiento_i'.
  $field_instances['field_collection_item-field_a_fuentes_de_financiamient-field_origen_de_financiamiento_i'] = array(
    'bundle' => 'field_a_fuentes_de_financiamient',
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
    'field_name' => 'field_origen_de_financiamiento_i',
    'label' => 'Origen de financiamiento (institución, organismo, donación, aporte, etc.)',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_a_fuentes_de_financiamient-field_programa_especifico_fondos'.
  $field_instances['field_collection_item-field_a_fuentes_de_financiamient-field_programa_especifico_fondos'] = array(
    'bundle' => 'field_a_fuentes_de_financiamient',
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
    'field_name' => 'field_programa_especifico_fondos',
    'label' => 'Programa específico de donde provienen los fondos',
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
      'weight' => 20,
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
      'weight' => 21,
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
      'weight' => 22,
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
      'weight' => 23,
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
      'weight' => 24,
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
      'weight' => 25,
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
      'weight' => 26,
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
      'weight' => 27,
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
      'weight' => 28,
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
      'weight' => 29,
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
      'weight' => 30,
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
      'weight' => 31,
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
      'weight' => 32,
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
      'weight' => 33,
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
      'weight' => 34,
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
      'weight' => 35,
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

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_d1_1'.
  $field_instances['field_collection_item-field_d_infraestructura-field_d1_1'] = array(
    'bundle' => 'field_d_infraestructura',
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
    'field_name' => 'field_d1_1',
    'label' => 'Código de la infraestructura',
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
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_d1_3'.
  $field_instances['field_collection_item-field_d_infraestructura-field_d1_3'] = array(
    'bundle' => 'field_d_infraestructura',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_d1_3',
    'label' => 'Funcionamiento correcto',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_d1_4'.
  $field_instances['field_collection_item-field_d_infraestructura-field_d1_4'] = array(
    'bundle' => 'field_d_infraestructura',
    'default_value' => NULL,
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_d1_4',
    'label' => 'Georreferenciación',
    'required' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_d1_5'.
  $field_instances['field_collection_item-field_d_infraestructura-field_d1_5'] = array(
    'bundle' => 'field_d_infraestructura',
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_d1_5',
    'label' => 'Altitud',
    'required' => 0,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_d2_2'.
  $field_instances['field_collection_item-field_d_infraestructura-field_d2_2'] = array(
    'bundle' => 'field_d_infraestructura',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_d2_2',
    'label' => 'Observaciones sobre la infraestructura',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_edo_fisico_linea_tto'.
  $field_instances['field_collection_item-field_d_infraestructura-field_edo_fisico_linea_tto'] = array(
    'bundle' => 'field_d_infraestructura',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_edo_fisico_linea_tto',
    'label' => 'Estado físico de la línea de tratamiento de agua',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_tipo_de_tratamiento'.
  $field_instances['field_collection_item-field_d_infraestructura-field_tipo_de_tratamiento'] = array(
    'bundle' => 'field_d_infraestructura',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tipo_de_tratamiento',
    'label' => 'Tipo de tratamiento',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_e_infraestructura_almac-field_capacidad_almacenamiento'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_capacidad_almacenamiento'] = array(
    'bundle' => 'field_e_infraestructura_almac',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_capacidad_almacenamiento',
    'label' => 'Capacidad de almacenamiento (volumen)',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 1,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 609,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => 609,
            'pt-br' => 624,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_e_infraestructura_almac-field_e1_1'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_e1_1'] = array(
    'bundle' => 'field_e_infraestructura_almac',
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
    'field_name' => 'field_e1_1',
    'label' => 'Código de la infraestructura',
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
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_e_infraestructura_almac-field_e1_5_altitud'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_e1_5_altitud'] = array(
    'bundle' => 'field_e_infraestructura_almac',
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_e1_5_altitud',
    'label' => 'Altitud',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'mts.',
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
  // 'field_collection_item-field_e_infraestructura_almac-field_e2_2'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_e2_2'] = array(
    'bundle' => 'field_e_infraestructura_almac',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_e2_2',
    'label' => 'Observaciones sobre la infraestructura',
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
  // 'field_collection_item-field_e_infraestructura_almac-field_edo_fisico_infr_almac'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_edo_fisico_infr_almac'] = array(
    'bundle' => 'field_e_infraestructura_almac',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_edo_fisico_infr_almac',
    'label' => '¿Cuál es el Estado físico de la infraestructura de almacenamiento de agua?',
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
      'display_name' => '',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => '',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_e_infraestructura_almac-field_frecuencia_limpieza_infr'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_frecuencia_limpieza_infr'] = array(
    'bundle' => 'field_e_infraestructura_almac',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_frecuencia_limpieza_infr',
    'label' => '¿Con qué frecuencia se realiza la limpieza?',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => 612,
          'value' => 1,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 612,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => 612,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'label',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_e_infraestructura_almac-field_latitud_longitud'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_latitud_longitud'] = array(
    'bundle' => 'field_e_infraestructura_almac',
    'default_value' => NULL,
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_latitud_longitud',
    'label' => 'Georeferenciación',
    'required' => 0,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_edo_fisico_red_dist'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_edo_fisico_red_dist'] = array(
    'bundle' => 'field_f_red_de_distribucion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_edo_fisico_red_dist',
    'label' => '¿Cuál es el estado físico de la red de distribución de agua?',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_f1_1'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f1_1'] = array(
    'bundle' => 'field_f_red_de_distribucion',
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
    'field_name' => 'field_f1_1',
    'label' => 'Código de la red',
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
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_f1_2'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f1_2'] = array(
    'bundle' => 'field_f_red_de_distribucion',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_f1_2',
    'label' => 'Número de conexiones de la red de distribución',
    'required' => 0,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_f1_3'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f1_3'] = array(
    'bundle' => 'field_f_red_de_distribucion',
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
    'field_name' => 'field_f1_3',
    'label' => 'Número de micro medidores instalados',
    'required' => 0,
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
  // 'field_collection_item-field_f_red_de_distribucion-field_f1_4'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f1_4'] = array(
    'bundle' => 'field_f_red_de_distribucion',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_f1_4',
    'label' => 'Número de micro medidores con consumo registrado',
    'required' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_f1_5'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f1_5'] = array(
    'bundle' => 'field_f_red_de_distribucion',
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_f1_5',
    'label' => 'Horas de servicio al día',
    'required' => 0,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_f2_1'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f2_1'] = array(
    'bundle' => 'field_f_red_de_distribucion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_f2_1',
    'label' => '¿Cuál es la Distancia promedio de las casas a puntos de toma de agua públicos?',
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

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_f3_2'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f3_2'] = array(
    'bundle' => 'field_f_red_de_distribucion',
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_f3_2',
    'label' => 'Observaciones sobre la infraestructura',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_b1_7'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_b1_7'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => NULL,
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
        'weight' => 19,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_b1_7',
    'label' => 'Georreferenciación',
    'required' => 0,
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_b1_altitud'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_b1_altitud'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
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
        'weight' => 20,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_b1_altitud',
    'label' => 'Altitud',
    'required' => 0,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_caudal_de_la_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_caudal_de_la_fuente'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 27,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_caudal_de_la_fuente',
    'label' => 'Caudal de la fuente',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 598,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => 594,
            'pt-br' => 625,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -9,
          ),
          'value' => array(
            'weight' => -10,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_caudal_fuente_epoca_seca'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_caudal_fuente_epoca_seca'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 28,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_caudal_fuente_epoca_seca',
    'label' => 'Caudal de la fuente en epoca seca',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 598,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => 594,
            'pt-br' => 625,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -9,
          ),
          'value' => array(
            'weight' => -10,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_codigo_de_la_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_codigo_de_la_fuente'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => array(
      0 => array(
        'value' => 'FTE0',
      ),
    ),
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
    'field_name' => 'field_codigo_de_la_fuente',
    'label' => 'Código de la fuente',
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
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_edo_fisico_infra_cptcion'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_edo_fisico_infra_cptcion'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 22,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_edo_fisico_infra_cptcion',
    'label' => '¿Cuál es el estado físico de la infraestructura de captación de agua?',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_es_la_fuente_principal'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_es_la_fuente_principal'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_es_la_fuente_principal',
    'label' => '¿Es la fuente principal del sistema? (sólo debe ser una entre todas las asociadas)',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_existe_macro_medicion'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existe_macro_medicion'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 29,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_existe_macro_medicion',
    'label' => 'Existe macro medición del caudal captado instalada',
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
  // 'field_collection_item-field_fuente_y_o_captacion-field_existencia_de_indicio'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existencia_de_indicio'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
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
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_existencia_de_indicio',
    'label' => 'Existencia de indicios o riesgo de contaminación causada por productos químicos o residuos alrededor de la toma de agua con origen en actividades industriales, agrícolas, artesanales, etc.',
    'required' => 0,
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

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_existencia_deareas_verdes'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existencia_deareas_verdes'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
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
        'weight' => 9,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_existencia_deareas_verdes',
    'label' => 'Existencia de áreas verdes o zonas forestadas alrededor de la fuente / toma de agua',
    'required' => 0,
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

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_existencia_z_erosionadas'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existencia_z_erosionadas'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_existencia_z_erosionadas',
    'label' => 'Existencia de zonas erosionadas en los alrededores de fuente / toma de agua',
    'required' => 0,
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

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_existenciade_contaminacion'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existenciade_contaminacion'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
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
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_existenciade_contaminacion',
    'label' => 'Existencia de contaminación causada por basuras de hogares o por aguas servidas alrededor de la toma de agua (presencia de letrinas, animales, viviendas, basura doméstica, etc.)',
    'required' => 0,
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
  // 'field_collection_item-field_fuente_y_o_captacion-field_fecha_toma_caudal_ep_seca'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_fecha_toma_caudal_ep_seca'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fecha_toma_caudal_ep_seca',
    'label' => 'Fecha de la toma del caudal de la fuente',
    'required' => 0,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_fecha_toma_cdal_epoca_seca'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_fecha_toma_cdal_epoca_seca'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_fecha_toma_cdal_epoca_seca',
    'label' => 'Fecha de la toma del caudal de la fuente en época seca',
    'required' => 0,
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_infraestructura_captacion'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_infraestructura_captacion'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
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
        'weight' => 14,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_infraestructura_captacion',
    'label' => 'Existe infraestructura de Captación de Agua  del sistema',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_nombre_de_la_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_nombre_de_la_fuente'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => array(
      0 => array(
        'value' => 'Nombre  de la fuente',
      ),
    ),
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
    'field_name' => 'field_nombre_de_la_fuente',
    'label' => 'Nombre de la fuente',
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
        'size' => 30,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_observaciones'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_observaciones'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 18,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_observaciones',
    'label' => 'Observaciones',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_proteccion_de_la_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_proteccion_de_la_fuente'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
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
        'weight' => 11,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_proteccion_de_la_fuente',
    'label' => 'Protección (delimitación con cerca u otros sistemas) de la fuente / toma de agua',
    'required' => 0,
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

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_tipo_de_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_tipo_de_fuente'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => array(
      0 => array(
        'tid' => 32144,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tipo_de_fuente',
    'label' => 'Tipo de fuente',
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
      'display_name' => '',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => '',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_c1_1'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_c1_1'] = array(
    'bundle' => 'field_lineas_de_conduccion',
    'default_value' => array(
      0 => array(
        'value' => 'CON0',
      ),
    ),
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
    'field_name' => 'field_c1_1',
    'label' => 'Código de la línea',
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
        'size' => 4,
      ),
      'type' => 'text_textfield',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_c1_4'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_c1_4'] = array(
    'bundle' => 'field_lineas_de_conduccion',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_c1_4',
    'label' => '¿Contiene estructuras especiales la línea? (Tanque rompe presión, válvulas, etc.)',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_c2_2'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_c2_2'] = array(
    'bundle' => 'field_lineas_de_conduccion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_c2_2',
    'label' => 'Observaciones',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_diametro_medio_de_tuberia'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_diametro_medio_de_tuberia'] = array(
    'bundle' => 'field_lineas_de_conduccion',
    'default_value' => array(
      0 => array(
        'value' => '0.00',
        'target_id' => 637,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_diametro_medio_de_tuberia',
    'label' => 'Diámetro medio (interior) de la tubería principal',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 636,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_edo_fisico_linea_conducion'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_edo_fisico_linea_conducion'] = array(
    'bundle' => 'field_lineas_de_conduccion',
    'default_value' => array(
      0 => array(
        'tid' => 32056,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_edo_fisico_linea_conducion',
    'label' => '¿Cuál es el estado físico de la línea de conducción de agua?',
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
      'display_name' => '',
      'match_operator' => 'CONTAINS',
      'size' => '',
      'view_name' => '',
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_longitud_de_la_linea'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_longitud_de_la_linea'] = array(
    'bundle' => 'field_lineas_de_conduccion',
    'default_value' => array(
      0 => array(
        'value' => '0.00',
        'target_id' => 2,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_longitud_de_la_linea',
    'label' => 'Longitud de la línea',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 4,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => 2,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => 1,
          ),
          'value' => array(
            'weight' => 0,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_ano'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_ano'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
    'deleted' => 0,
    'description' => '',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ano',
    'label' => 'Año',
    'required' => 0,
    'settings' => array(
      'default_value' => 'blank',
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
        'label_position' => 'above',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '1900:+0',
      ),
      'type' => 'date_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_institucion_ejecutora'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_institucion_ejecutora'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_institucion_ejecutora',
    'label' => 'Institución ejecutora	',
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
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_monto_rehabilitacion'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_monto_rehabilitacion'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'mvf',
        'settings' => array(
          'mvf' => array(
            'unit_suggesters_settings' => array(),
          ),
          'unit' => array(),
          'value' => array(),
        ),
        'type' => 'mvf_formatter_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_monto_rehabilitacion',
    'label' => 'Monto',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'mvf' => array(
        'max' => array(
          'target_id' => '_none',
          'value' => '',
        ),
        'min' => array(
          'target_id' => '_none',
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 331,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => -1,
            'pt-br' => -1,
            'weight' => 0,
          ),
          'original' => array(
            'enable' => 0,
            'weight' => 0,
          ),
          'per_user' => array(
            'enable' => 0,
            'weight' => 0,
          ),
        ),
      ),
      'unit' => array(),
      'user_register_form' => FALSE,
      'value' => array(
        'max' => '',
        'min' => '',
        'prefix' => '',
        'suffix' => '',
      ),
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'mvf',
      'settings' => array(
        'meta_info' => array(
          'unit' => array(
            'label_property' => 'symbol',
            'weight' => -10,
          ),
          'value' => array(
            'weight' => -9,
          ),
        ),
      ),
      'type' => 'mvf_widget_default',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_origen_de_financiamiento_i'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_origen_de_financiamiento_i'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_origen_de_financiamiento_i',
    'label' => 'Origen de financiamiento (institución, organismo, donación, aporte, etc.)',
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
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_programa_especifico_fondos'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_programa_especifico_fondos'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_programa_especifico_fondos',
    'label' => 'Programa específico de donde provienen los fondos',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_tipo_de_rehabilitacion'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_tipo_de_rehabilitacion'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
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
    'field_name' => 'field_tipo_de_rehabilitacion',
    'label' => 'Tipo de rehabilitación o de ampliación',
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
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_representantes-field_cargo_representante'.
  $field_instances['field_collection_item-field_representantes-field_cargo_representante'] = array(
    'bundle' => 'field_representantes',
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
    'field_name' => 'field_cargo_representante',
    'label' => 'Cargo',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_representantes-field_genero'.
  $field_instances['field_collection_item-field_representantes-field_genero'] = array(
    'bundle' => 'field_representantes',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_genero',
    'label' => 'Género',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_representantes-field_nombre_representante'.
  $field_instances['field_collection_item-field_representantes-field_nombre_representante'] = array(
    'bundle' => 'field_representantes',
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
    'field_name' => 'field_nombre_representante',
    'label' => 'Nombre del Representante',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_representantes-field_telefon'.
  $field_instances['field_collection_item-field_representantes-field_telefon'] = array(
    'bundle' => 'field_representantes',
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_telefon',
    'label' => 'Teléfono',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_tecnicos-field_cargo_tecnico'.
  $field_instances['field_collection_item-field_tecnicos-field_cargo_tecnico'] = array(
    'bundle' => 'field_tecnicos',
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
    'field_name' => 'field_cargo_tecnico',
    'label' => 'Cargo',
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
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_tecnicos-field_genero_tecnico'.
  $field_instances['field_collection_item-field_tecnicos-field_genero_tecnico'] = array(
    'bundle' => 'field_tecnicos',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_genero_tecnico',
    'label' => 'Género',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_tecnicos-field_nombre_tecnico'.
  $field_instances['field_collection_item-field_tecnicos-field_nombre_tecnico'] = array(
    'bundle' => 'field_tecnicos',
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
    'field_name' => 'field_nombre_tecnico',
    'label' => 'Nombre del Técnico',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_tecnicos-field_telef'.
  $field_instances['field_collection_item-field_tecnicos-field_telef'] = array(
    'bundle' => 'field_tecnicos',
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
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_telef',
    'label' => 'Teléfono',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-division_administrativa-field_pais'.
  $field_instances['taxonomy_term-division_administrativa-field_pais'] = array(
    'bundle' => 'division_administrativa',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_pais',
    'label' => 'País',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-instituciones-field_pais'.
  $field_instances['taxonomy_term-instituciones-field_pais'] = array(
    'bundle' => 'instituciones',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_pais',
    'label' => 'País',
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
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('	¿Dispone de balance contable?');
  t(' Fuente y/o captación');
  t(' Ingresos reales por facturación ');
  t('1. Levantamiento general aproximado (entrevistas, control parcial de las viviendas)');
  t('1. Verificar y apoyar la conformación, funcionamiento y reorganización de los CAPS');
  t('10. Llevar actualizado un listado de proveedores de servicio (electricistas, fontaneros mayores, laboratorios de calidad de agua) y proveedores de bienes (materiales de construcción y fontanería, productos químicos) para brindar apoyo a los CAPS');
  t('11. Asesorar al prestador (incluyendo fontanero) en temas de AOM');
  t('12. Actualizar y utilizar el SIASAR para propósitos de planificación municipal anual en materia de agua y saneamiento rural ');
  t('13. Otros servicios ofrecidos');
  t('14. Número de comunidades en los que se ofrece otros servicios');
  t('2. Apoyar la obtención de la figura Legal de los CAPS');
  t('2. Levantamiento utilizando el formulario auxiliar');
  t('3. Levantamiento muestral');
  t('3. Revisar y actualizar las finanzas del sistema');
  t('4. Apoyar a establecer y actualizar la tarifa');
  t('5. Apoyar en el establecimiento y legalización de reglamentos operativos');
  t('6. Apoyar a los CAPS en la planificación y desarrollo de asambleas de rendición de cuentas a la comunidad');
  t('7. Apoyar a los CAPS en el análisis y en la solución de conflictos (ej: uso o abuso del agua de los sistemas)');
  t('8. Recolectar muestras para análisis de calidad de agua de los sistemas y asesorar en su toma, medición e interp. de los datos');
  t('9. Asesorar a los CAPS en la medición de niveles estáticos de pozos y caudales de agua superficiales ');
  t('Acción preventiva: Revisión y/o sustitución periódica de los componentes pertenecientes a la toma de agua del sistema (antes de rotura o daño)  Realización de acciones que promuevan la NO tala de árboles y la reforestación');
  t('Activos Corrientes');
  t('Activos No Corrientes');
  t('Agua facturada (promedio mensual, en metros cúbicos)');
  t('Agua producida (promedio mensual, en metros cúbicos)');
  t('Altitud');
  t('Año');
  t('Año de construcción');
  t('Año en que se construyó el sistema ');
  t('Cantidad de cloro residual');
  t('Cantidad de comunidades apoyadas en los últimos 12 meses');
  t('Cantidad de equipos de transporte ');
  t('Cantidad de equipos informáticos (computadora/impresora)');
  t('Cantidad de equipos para la medición de la calidad del agua');
  t('Cantidad de técnicos en la zona');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, tipo 1 o 2');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento PROPIA mejorada, tipo de saneamiento COMPARTIDA entre varias viviendas, mejorada tipo 1 o 2');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) USAN esta infraestructura de saneamiento compartida o propia no mejorada:');
  t('Cantidad de viviendas en que TODOS sus miembros (incluyendo ancianos/as, hombres, mujeres y niños/as) utilizan la instalación de lavado siempre');
  t('Cantidad de viviendas que TIENEN OTRA infraestructura de saneamiento PROPIA del tipo no mejorada:');
  t('Cantidad de viviendas que TIENEN infraestructura de saneamiento PROPIA mejorada tipo 1: ');
  t('Cantidad de viviendas que TIENEN infraestructura de saneamiento PROPIA mejorada tipo 2:');
  t('Cantidad de viviendas que almacenan el agua de bebida de forma segura (en recipientes limpios y bien tapados)');
  t('Cantidad de viviendas que cuentan con una instalación básica (con agua y jabón) para el lavado de manos cerca (a menos de 10 metros) de la instalación de saneamiento');
  t('Cantidad de viviendas que recogen o tratan las basuras domésticas');
  t('Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento COMPARTIDA entre varias viviendas, mejorada tipo 1 o 2');
  t('Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento PROPIA mejorada, tipo 1 o 2');
  t('Cantidad de viviendas que sus miembros USAN habitualmente infraestructura de saneamiento compartida o propia del tipo no mejorada:');
  t('Cantidad de viviendas totales');
  t('Capacidad de almacenamiento (volumen)');
  t('Cargo');
  t('Caudal actual del sistema');
  t('Caudal de la fuente');
  t('Caudal de la fuente en epoca seca');
  t('Clase de prestador');
  t('Clasificación');
  t('Croquis');
  t('Cuenta con presupuesto operativo anual');
  t('Código Comunidad');
  t('Código de Sistema');
  t('Código de la fuente');
  t('Código de la infraestructura');
  t('Código de la línea');
  t('Código de la red');
  t('Código de prestador ');
  t('Código del centro de salud');
  t('Código del centro educativo');
  t('Desinfección con cloro');
  t('Dispone de fondos para combustible');
  t('Dispone de fondos para viáticos');
  t('Dispone de material didáctico impreso para distribución');
  t('Dispone de servicios de internet');
  t('Diámetro medio (interior) de la tubería principal');
  t('El Prestador está dando la atención en operación y mantenimiento al sistema de Agua');
  t('El prestador, ¿rinde cuentas?');
  t('El prestador, ¿tiene cuenta bancaria?');
  t('Encuestador');
  t('Estado');
  t('Estado de los equipos de transporte ');
  t('Estado de los equipos informáticos (computadora/impresora)');
  t('Estado de los equipos para la medición de la calidad del agua');
  t('Estado físico de la línea de tratamiento de agua');
  t('Estado legal del prestador ');
  t('Etnia en mayoría');
  t('Existe infraestructura de Captación de Agua  del sistema');
  t('Existe macro medición del caudal captado instalada');
  t('Existencia de contaminación causada por basuras de hogares o por aguas servidas alrededor de la toma de agua (presencia de letrinas, animales, viviendas, basura doméstica, etc.)');
  t('Existencia de indicios o riesgo de contaminación causada por productos químicos o residuos alrededor de la toma de agua con origen en actividades industriales, agrícolas, artesanales, etc.');
  t('Existencia de zonas erosionadas en los alrededores de fuente / toma de agua');
  t('Existencia de áreas verdes o zonas forestadas alrededor de la fuente / toma de agua');
  t('Facturación (promedio mensual de los últimos 12 meses, en la moneda especificada en la C2)');
  t('Fecha de Aplicación');
  t('Fecha de análisis de la calidad del agua');
  t('Fecha de aplicación');
  t('Fecha de creación');
  t('Fecha de la toma del caudal de la fuente');
  t('Fecha de la toma del caudal de la fuente en época seca');
  t('Fecha de última elección de los miembros de Junta');
  t('Fecha en la que se cubre la encuesta');
  t('Fecha en la que se llena la encuesta');
  t('Ficha de centro de salud');
  t('Ficha de centro educativo');
  t('Filtración domiciliaria');
  t('Fuente / institución');
  t('Fuentes de financiamiento');
  t('Funcionamiento correcto');
  t('Gasto promedio mensual real en administración');
  t('Gasto promedio mensual real en mantenimiento ');
  t('Gasto promedio mensual real en operación');
  t('Gasto promedio mensual real en servicios ambientales');
  t('Gasto promedio mensual teórico en administración ');
  t('Gasto promedio mensual teórico en mantenimiento');
  t('Gasto promedio mensual teórico en operación');
  t('Gasto promedio mensual teórico en servicios ambientales      ');
  t('Georeferenciación');
  t('Georreferenciación');
  t('Género');
  t('Horas de servicio al día');
  t('Idioma predominante');
  t('Imagen');
  t('Infraestructura de almacenamiento');
  t('Infraestructura de tratamiento');
  t('Institución ejecutora	');
  t('Localidad');
  t('Longitud de la línea');
  t('Lugar en el que está ubicado el centro de salud de referencia');
  t('Lugar en el que está ubicado el centro educativo de referencia');
  t('Líneas de conducción');
  t('Mejora de sistema');
  t('Monitoreo de la higiene comunitaria: ¿El prestador promueve saneamiento ambiental?');
  t('Monto');
  t('Monto previsto para el año en curso');
  t('Monto total actual');
  t('Monto total de egresos en el último año');
  t('Monto total de ingresos en el último año ');
  t('Monto total del último año finalizado');
  t('Nombre');
  t('Nombre de entidad que apoya');
  t('Nombre de la fuente');
  t('Nombre del Representante');
  t('Nombre del Técnico');
  t('Nombre del centro de salud');
  t('Nombre del centro de salud externo que acude la población de la comunidad');
  t('Nombre del centro educativo');
  t('Nombre del centro educativo externo donde acude la población estudiantil');
  t('Nombre del prestador de servicio');
  t('Nombre del sistema');
  t('Nuevo sistema de agua');
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
  t('Número de conexiones de la red de distribución');
  t('Número de micro medidores con consumo registrado');
  t('Número de micro medidores instalados');
  t('Número de reuniones de la junta directiva en los últimos 6 meses');
  t('Número de usuarios al día en sus pagos ordinarios');
  t('Número de usuarios que deberían pagar factura');
  t('Observaciones');
  t('Observaciones ');
  t('Observaciones sobre el grupo de población');
  t('Observaciones sobre la infraestructura');
  t('Observaciones y comentarios');
  t('Origen de financiamiento (institución, organismo, donación, aporte, etc.)');
  t('Otra clase de prestador');
  t('Otras características de la comunidad');
  t('Pasa el test de análisis físico-químicos');
  t('Pasa el test de coliformes?');
  t('Pasivos Corrientes ');
  t('Pasivos No Corrientes');
  t('País');
  t('Personal de salud y administrativo. Femenino');
  t('Personal de salud y administrativo. Masculino');
  t('Personal docente y administrativo. Femenino');
  t('Personal docente y administrativo. Masculino');
  t('Población estudiantil. Femenino');
  t('Población estudiantil. Masculino');
  t('Población total');
  t('Programa específico de donde provienen los fondos');
  t('Promoción de no descargas de aguas residuales');
  t('Promoción del no uso de plaguicidas en la zona cercana a la fuente o toma de agua del sistema');
  t('Protección (delimitación con cerca u otros sistemas) de la fuente / toma de agua');
  t('Protección de la flora y fauna de la zona cercana a la fuente o toma de agua del sistema');
  t('Protección de suelos (Estabilización de taludes, barreras vivas, barreras muertas, etc.)');
  t('Realización de acciones que promuevan la NO tala de árboles y la reforestación');
  t('Red de distribución');
  t('Redacción');
  t('Reforestación');
  t('Rehabilitaciones y/o ampliaciones');
  t('Representantes');
  t('Revisión del buen estado de la demarcación y señalización de la zona cercana a la fuente o toma de agua del sistema');
  t('Revisión del estado de la obra de toma limpia y/o mejorarlo');
  t('Revisión del estado del cercado de la obra de toma y/o mejorarlo');
  t('Revisión y actualización del plan de contingencia (incendio, desastres naturales)');
  t('Revisión y/o aumento de la protección legal o administrativa del terreno donde se ubica la toma y/o del recurso hídrico');
  t('Se posee de servicios de conexión a Internet (3G o 4G)');
  t('Se posee de servicios de energía eléctrica');
  t('Se posee de servicios de telefonía celular');
  t('Se posee de servicios de telefonía fija');
  t('Sistema de Saneamiento del tipo 1 y 2 mejorado');
  t('Sistema de Saneamiento del tipo no mejorado');
  t('Suma de gastos reales ');
  t('Suma de gastos teóricos');
  t('Sustitución de componentes pertenecientes a la toma de agua del sistema (una vez dañados)');
  t('Tarifa media mensual');
  t('Tasa anual de expansión promedio');
  t('Teléfono');
  t('Tiene definido un tipo de tarifa?');
  t('Tipo de PAT');
  t('Tipo de fuente');
  t('Tipo de rehabilitación o de ampliación');
  t('Tipo de sistema de abastecimiento de agua');
  t('Tipo de tarifa');
  t('Tipo de tratamiento');
  t('Total de comunidades en la zona de atención');
  t('Técnicos');
  t('Usuarios promedio del sistema de salud. Femenino');
  t('Usuarios promedio del sistema de salud. Masculino');
  t('Validado');
  t('Vigilancia de la zona cercana a la fuente o toma de agua del sistema');
  t('Viviendas atendidas');
  t('Viviendas con sistema');
  t('Viviendas sin sistema');
  t('Zona de Atención');
  t('¿Con qué frecuencia se realiza la limpieza?');
  t('¿Contiene estructuras especiales la línea? (Tanque rompe presión, válvulas, etc.)');
  t('¿Cuenta con fondos disponibles?');
  t('¿Cuentan con personal técnico, operador o fontanero para la operación y mantenimiento?');
  t('¿Cuál es el Estado físico de la infraestructura de almacenamiento de agua?');
  t('¿Cuál es el estado físico de la infraestructura de captación de agua?');
  t('¿Cuál es el estado físico de la línea de conducción de agua?');
  t('¿Cuál es el estado físico de la red de distribución de agua?');
  t('¿Cuál es la Distancia promedio de las casas a puntos de toma de agua públicos?');
  t('¿Cuál es la disposición final de la basura más habitual en la comunidad? (quema, enterrada, tirada, tirada en un cuerpo de agua, etc.)');
  t('¿De qué forma es mantenido el sistema?');
  t('¿El centro educativo tiene algún sistema de agua asociado?');
  t('¿El prestador de servicio cuenta con recursos (material de construcción, herramientas, equipo) para el desarrollo de sus actividades de mantenimiento?');
  t('¿El prestador promueve acciones de protección de la zona cercana a la fuente o toma de agua del sistema?');
  t('¿Es la fuente principal del sistema? (sólo debe ser una entre todas las asociadas)');
  t('¿Existe acta de la última asamblea de rendición de cuentas?');
  t('¿Existe algún centro de salud en la comunidad?');
  t('¿Existe algún centro educativo en la comunidad?');
  t('¿Existe algún tipo de práctica de recolección y/o tratamiento de basuras en la comunidad?');
  t('¿Han tenido ingresos extraordinarios de funcionamiento?');
  t('¿Hay suficiente agua en las fuentes en función de la demanda en el invierno / época de lluvias?');
  t('¿Hay suficiente agua en las fuentes en función de la demanda en el verano / época seca?');
  t('¿La comunidad conoce el mecanismo de pago de la tarifa y se aplica de forma regular? ');
  t('¿Por qué otros motivos no se conoce el mecanismo?');
  t('¿Poseen un reglamento para la prestación del servicio?');
  t('¿Qué "otros" mantiene el sistema?');
  t('¿Qué otro tipo de sistema es?');
  t('¿Reciben apoyo técnico del gobierno/otras instituciones para la operación del sistema u otras actividades?');
  t('¿Se han realizado aportaciones extraordinarias no directamente vinculadas al servicio de agua? ');
  t('¿Se tiene información sobre la medición del agua?');
  t('¿Tienen libro de ingresos y egresos al día?');
  t('¿Todos los miembros de la Junta Directiva están nombrados?');

  return $field_instances;
}
