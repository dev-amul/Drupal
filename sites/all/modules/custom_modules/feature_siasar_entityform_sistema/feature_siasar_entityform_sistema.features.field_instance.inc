<?php
/**
 * @file
 * feature_siasar_entityform_sistema.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_siasar_entityform_sistema_field_default_field_instances() {
  $field_instances = array();

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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
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
        'weight' => 11,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
        'module' => 'field_collection',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 9,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
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
      'weight' => 106,
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
        'type' => 'list_default',
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
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
        'type' => 'list_default',
        'weight' => 9,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
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
    'description' => 'La altitud se mide en metros sobre el nivel del mar (msnm).',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_alto',
    'label' => 'Altitud',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => 'm',
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
    'description' => 'Year the system was built',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_anno_construccion',
    'label' => 'Año de construcción',
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
        'input_format' => 'custom',
        'input_format_custom' => 'Y',
        'label_position' => 'none',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1920:+0',
      ),
      'type' => 'date_select',
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_area_planificacion'.
  $field_instances['entityform-sistema-field_area_planificacion'] = array(
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
        'weight' => 33,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
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
      'weight' => 109,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_cantidad_de_cloro_residual'.
  $field_instances['entityform-sistema-field_cantidad_de_cloro_residual'] = array(
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
        'weight' => 11,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
          'target_id' => 681,
          'value' => '',
        ),
        'min' => array(
          'target_id' => 681,
          'value' => 0,
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 681,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => -1,
            'es-CO' => -1,
            'es-HN' => -1,
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
      'weight' => 12,
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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

  // Exported field_instance: 'entityform-sistema-field_cuenca_hidrografica'.
  $field_instances['entityform-sistema-field_cuenca_hidrografica'] = array(
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
        'weight' => 32,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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
      'weight' => 108,
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
        'weight' => 11,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
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
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 4,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 24,
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

  // Exported field_instance: 'entityform-sistema-field_data_source'.
  $field_instances['entityform-sistema-field_data_source'] = array(
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
        'weight' => 36,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_data_source',
    'label' => 'Origen de los datos',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => 'text_default',
        'formatter_settings' => array(),
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 10,
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
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'siasar_field_location',
        'settings' => array(
          'style' => 'links',
        ),
        'type' => 'siasar_field_location_hierarchy',
        'weight' => 5,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
      'module' => 'siasar_field_location',
      'settings' => array(
        'siasar_hierarchical_select' => array(
          'force_deepest' => 1,
        ),
      ),
      'type' => 'siasar_hierarchical_select',
      'weight' => 27,
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
      'entity_reference' => array(
        'label' => 'hidden',
        'module' => 'title',
        'settings' => array(
          'title_class' => '',
          'title_link' => 'content',
          'title_style' => '_none',
        ),
        'type' => 'title_linked',
        'weight' => 0,
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
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 6,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
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
      'weight' => 73,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_fecha_analisis_coliformes'.
  $field_instances['entityform-sistema-field_fecha_analisis_coliformes'] = array(
    'bundle' => 'sistema',
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
        'weight' => 13,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_analisis_coliformes',
    'label' => 'Fecha de analisis - Test de Coliformes',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_fecha_analisis_fq'.
  $field_instances['entityform-sistema-field_fecha_analisis_fq'] = array(
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
        'weight' => 15,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_analisis_fq',
    'label' => 'Fecha de análisis - Físico/Químico',
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
      'weight' => 16,
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_analisiscalidad_agua',
    'label' => 'Fecha de análisis - Cloro Residual',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 9,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
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
        'weight' => 7,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
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
        'weight' => 12,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_g4_3',
    'label' => '¿Pasa el test de coliformes?',
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
      'weight' => 13,
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
        'weight' => 14,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_g4_4',
    'label' => '¿Pasa el test de análisis Físico/Químico?',
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
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
        'weight' => 2,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'leaflet',
        'settings' => array(
          'height' => 400,
          'icon' => array(
            'html' => '',
            'htmlClass' => '',
            'iconAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'iconImageStyle' => '',
            'iconSize' => array(
              'x' => '',
              'y' => '',
            ),
            'iconType' => 'marker',
            'iconUrl' => '',
            'popupAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowUrl' => '',
          ),
          'leaflet_map' => 'OSM Mapnik',
          'popup' => array(
            'show' => 0,
            'text' => '',
          ),
          'vector_display' => array(
            'clickable' => 0,
            'color' => '',
            'dashArray' => '',
            'fill' => 0,
            'fillColor' => '',
            'fillOpacity' => '',
            'opacity' => '',
            'stroke' => 0,
            'stroke_override' => 0,
            'weight' => '',
          ),
          'zoom' => array(
            'initialZoom' => 13,
            'maxZoom' => -1,
            'minZoom' => 1,
            'scrollWheelZoom' => 1,
          ),
        ),
        'type' => 'geofield_leaflet',
        'weight' => 6,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
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
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 9,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
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

  // Exported field_instance: 'entityform-sistema-field_otras_divisiones'.
  $field_instances['entityform-sistema-field_otras_divisiones'] = array(
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
        'weight' => 34,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
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
      'weight' => 110,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_pais'.
  $field_instances['entityform-sistema-field_pais'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 3,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
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
      'weight' => 112,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_rating_s1'.
  $field_instances['entityform-sistema-field_rating_s1'] = array(
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
        'weight' => 35,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_rating_s1',
    'label' => 'Calificación (SIASAR 1)',
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
      'module' => 'field_extrawidgets',
      'settings' => array(
        'display_empty' => 0,
        'formatter' => 'entityreference_label',
        'formatter_settings' => array(
          'link' => 0,
        ),
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 9,
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
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 9,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
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

  // Exported field_instance: 'entityform-sistema-field_status'.
  $field_instances['entityform-sistema-field_status'] = array(
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
        'weight' => 4,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_status',
    'label' => 'Status',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'workflowfield',
      'settings' => array(
        'comment' => 1,
        'fieldset' => 0,
        'name_as_title' => 1,
      ),
      'type' => 'workflow_default',
      'weight' => 11,
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
        'weight' => 9,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
    'entityconnect_show_add_icon' => 0,
    'entityconnect_show_edit_icon' => 0,
    'entityconnect_unload_add' => 1,
    'entityconnect_unload_edit' => 1,
    'field_name' => 'field_origen_de_financiamiento_i',
    'label' => 'Origen de financiamiento (institución, organismo, donación, aporte, etc.)',
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
    'label' => 'Estado físico de la infraestructura de distribución de agua',
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
    'label' => 'Código de la distribución',
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
      'weight' => 3,
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
      'weight' => 4,
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
      'weight' => 5,
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
      'max' => 24,
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_f2_1'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f2_1'] = array(
    'bundle' => 'field_f_red_de_distribucion',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Pozos o sistemas por gravedad / bombeo. No aplica en sistemas con abastecimiento domiciliar. Al contestar este bloque se entiende que la distribución es parcial o totalmente mediante puntos de toma de agua públicos.',
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
    'label' => 'Señalar a qué distancia aproximada se encuentran instalados los puntos de toma de agua públicos a las casas de los usuarios.',
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
    'label' => 'Observaciones sobre la distribución',
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
    'label' => 'Estado físico de la infraestructura de captación de agua',
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
    'default_value' => NULL,
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
    'label' => 'Observaciones sobre la conducción',
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
    'field_name' => 'field_diametro_medio_de_tuberia',
    'label' => 'Diámetro medio o sección (interior) de la tubería principal',
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
            'unit' => 682,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 1,
            'es' => -1,
            'es-CO' => -1,
            'es-HN' => -1,
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
            'unit' => 4,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => -1,
            'enable' => 0,
            'es' => 2,
            'es-CO' => -1,
            'es-HN' => -1,
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

  // Translatables
  // Included for use with string extractors like potx.
  t(' Fuente y/o captación');
  t('Altitud');
  t('Año');
  t('Año de construcción');
  t('Calificación (SIASAR 1)');
  t('Cantidad de cloro residual');
  t('Capacidad de almacenamiento (volumen)');
  t('Caudal actual del sistema');
  t('Caudal de la fuente');
  t('Caudal de la fuente en epoca seca');
  t('Croquis');
  t('Cuenca hidrográfica');
  t('Código de Sistema');
  t('Código de la distribución');
  t('Código de la fuente');
  t('Código de la infraestructura');
  t('Código de la línea');
  t('Desinfección con cloro');
  t('Diámetro medio o sección (interior) de la tubería principal');
  t('Encuestador');
  t('Estado físico de la infraestructura de captación de agua');
  t('Estado físico de la infraestructura de distribución de agua');
  t('Estado físico de la línea de tratamiento de agua');
  t('Existe infraestructura de Captación de Agua  del sistema');
  t('Existe macro medición del caudal captado instalada');
  t('Existencia de contaminación causada por basuras de hogares o por aguas servidas alrededor de la toma de agua (presencia de letrinas, animales, viviendas, basura doméstica, etc.)');
  t('Existencia de indicios o riesgo de contaminación causada por productos químicos o residuos alrededor de la toma de agua con origen en actividades industriales, agrícolas, artesanales, etc.');
  t('Existencia de zonas erosionadas en los alrededores de fuente / toma de agua');
  t('Existencia de áreas verdes o zonas forestadas alrededor de la fuente / toma de agua');
  t('Fecha de Aplicación');
  t('Fecha de analisis - Test de Coliformes');
  t('Fecha de análisis - Cloro Residual');
  t('Fecha de análisis - Físico/Químico');
  t('Fecha de la toma del caudal de la fuente');
  t('Fecha de la toma del caudal de la fuente en época seca');
  t('Fecha en la que se llena la encuesta');
  t('Filtración domiciliaria');
  t('Fuentes de financiamiento');
  t('Funcionamiento correcto');
  t('Georeferenciación');
  t('Georreferenciación');
  t('Horas de servicio al día');
  t('Imagen');
  t('Infraestructura de almacenamiento');
  t('Infraestructura de tratamiento');
  t('Institución ejecutora	');
  t('La altitud se mide en metros sobre el nivel del mar (msnm).');
  t('Localidad');
  t('Longitud de la línea');
  t('Líneas de conducción');
  t('Monto');
  t('Nombre');
  t('Nombre de la fuente');
  t('Número de conexiones de la red de distribución');
  t('Número de micro medidores con consumo registrado');
  t('Número de micro medidores instalados');
  t('Observaciones');
  t('Observaciones sobre la conducción');
  t('Observaciones sobre la distribución');
  t('Observaciones sobre la infraestructura');
  t('Observaciones y comentarios');
  t('Origen de financiamiento (institución, organismo, donación, aporte, etc.)');
  t('Origen de los datos');
  t('Otras divisiones');
  t('País');
  t('Pozos o sistemas por gravedad / bombeo. No aplica en sistemas con abastecimiento domiciliar. Al contestar este bloque se entiende que la distribución es parcial o totalmente mediante puntos de toma de agua públicos.');
  t('Programa específico de donde provienen los fondos');
  t('Protección (delimitación con cerca u otros sistemas) de la fuente / toma de agua');
  t('Red de distribución');
  t('Rehabilitaciones y/o ampliaciones');
  t('Señalar a qué distancia aproximada se encuentran instalados los puntos de toma de agua públicos a las casas de los usuarios.');
  t('Status');
  t('Tipo de fuente');
  t('Tipo de rehabilitación o de ampliación');
  t('Tipo de sistema de abastecimiento de agua');
  t('Tipo de tratamiento');
  t('Validado');
  t('Year the system was built');
  t('¿Con qué frecuencia se realiza la limpieza?');
  t('¿Contiene estructuras especiales la línea? (Tanque rompe presión, válvulas, etc.)');
  t('¿Cuál es el Estado físico de la infraestructura de almacenamiento de agua?');
  t('¿Cuál es el estado físico de la línea de conducción de agua?');
  t('¿Es la fuente principal del sistema? (sólo debe ser una entre todas las asociadas)');
  t('¿Hay suficiente agua en las fuentes en función de la demanda en el invierno / época de lluvias?');
  t('¿Hay suficiente agua en las fuentes en función de la demanda en el verano / época seca?');
  t('¿Pasa el test de análisis Físico/Químico?');
  t('¿Pasa el test de coliformes?');
  t('¿Qué otro tipo de sistema es?');
  t('Área o zona de planificación');

  return $field_instances;
}
