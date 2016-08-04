<?php
/**
 * @file
 * feature_sistema.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_sistema_field_default_field_instances() {
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
        'weight' => 40,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_a6_1'.
  $field_instances['entityform-sistema-field_a6_1'] = array(
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
        'weight' => 41,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_a6_1',
    'label' => 'Croquis',
    'required' => 1,
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
      'weight' => 49,
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
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_a_fuentes_de_financiamient',
    'label' => ' F_F_C_I',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_table',
      'settings' => array(
        'nodragging' => 0,
      ),
      'type' => 'field_collection_table',
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
        'weight' => 24,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_agua_en_invierno',
    'label' => '¿Hay suficiente agua en las fuentes en función de la demanda en el invierno / época de lluvias?',
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
      'weight' => 29,
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
        'weight' => 23,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_agua_en_verano',
    'label' => '¿Hay suficiente agua en las fuentes en función de la demanda en el verano / época seca?',
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
      'weight' => 28,
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_anno_construccion',
    'label' => 'Año de construcción',
    'required' => 1,
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 1,
        'text_parts' => array(),
        'year_range' => '1980:+3',
      ),
      'type' => 'date_select',
      'weight' => 12,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_c_digo_sistema'.
  $field_instances['entityform-sistema-field_c_digo_sistema'] = array(
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
          'scale' => 0,
          'thousand_separator' => '',
        ),
        'type' => 'number_integer',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_c_digo_sistema',
    'label' => 'Código de Sistema',
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_d'.
  $field_instances['entityform-sistema-field_d'] = array(
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
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_d',
    'label' => 'Infraestructura de tramiento',
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
      'weight' => 7,
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
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_d_infraestructura',
    'label' => 'Infraestructura de tramiento',
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
      'weight' => 34,
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
        'weight' => 29,
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
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_encuestador'.
  $field_instances['entityform-sistema-field_encuestador'] = array(
    'bundle' => 'sistema',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Nombre de la persona que rellena la encuesta',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_encuestador',
    'label' => 'Encuestador',
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
        'size' => 50,
      ),
      'type' => 'text_textfield',
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_entidad_local_mayor'.
  $field_instances['entityform-sistema-field_entidad_local_mayor'] = array(
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entidad_local_mayor',
    'label' => 'Entidad local mayor',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_entidad_local_menor'.
  $field_instances['entityform-sistema-field_entidad_local_menor'] = array(
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
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entidad_local_menor',
    'label' => 'Entidad local menor',
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

  // Exported field_instance: 'entityform-sistema-field_entidad_regional_'.
  $field_instances['entityform-sistema-field_entidad_regional_'] = array(
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
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entidad_regional_',
    'label' => 'Entidad regional ',
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
        'weight' => 30,
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
      'weight' => 37,
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
        'weight' => 11,
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
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
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
        'weight' => 25,
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
      'weight' => 48,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g1_1'.
  $field_instances['entityform-sistema-field_g1_1'] = array(
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
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_g1_1',
    'label' => 'Caudal actual del sistema',
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
      'weight' => 36,
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
        'weight' => 32,
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
      'weight' => 37,
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
        'weight' => 33,
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
      'weight' => 38,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g4_1'.
  $field_instances['entityform-sistema-field_g4_1'] = array(
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
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_g4_1',
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g4_2'.
  $field_instances['entityform-sistema-field_g4_2'] = array(
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
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_g4_2',
    'label' => 'Cantidad de coliformes',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g4_3'.
  $field_instances['entityform-sistema-field_g4_3'] = array(
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
        'weight' => 36,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_g4_3',
    'label' => 'Pasa el test de coliformes?',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_g4_4'.
  $field_instances['entityform-sistema-field_g4_4'] = array(
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
        'weight' => 37,
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
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 43,
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
        'weight' => 38,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_h1_1',
    'label' => 'Observaciones y comentarios',
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 44,
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
        'module' => 'geofield',
        'settings' => array(
          'data' => 'full',
        ),
        'type' => 'geofield_wkt',
        'weight' => 7,
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
      'weight' => 18,
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
        'weight' => 26,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_monto_total_financiamiento'.
  $field_instances['entityform-sistema-field_monto_total_financiamiento'] = array(
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
        'weight' => 39,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_total_financiamiento',
    'label' => 'Monto total de financiamiento',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_nombre_del_sistema'.
  $field_instances['entityform-sistema-field_nombre_del_sistema'] = array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_nombre_del_sistema',
    'label' => 'Nombre del sistema',
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
        'size' => 50,
      ),
      'type' => 'text_textfield',
      'weight' => 11,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_otras_divisiones_'.
  $field_instances['entityform-sistema-field_otras_divisiones_'] = array(
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
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_otras_divisiones_',
    'label' => 'Otras divisiones ',
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_prest_serv'.
  $field_instances['entityform-sistema-field_prest_serv'] = array(
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
        'weight' => 17,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_prest_serv',
    'label' => 'P_S',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection_table',
      'settings' => array(
        'nodragging' => 0,
      ),
      'type' => 'field_collection_table',
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_rehabilitaciones_y_o_ampli'.
  $field_instances['entityform-sistema-field_rehabilitaciones_y_o_ampli'] = array(
    'bundle' => 'sistema',
    'default_value' => array(),
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
        'weight' => 20,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rehabilitaciones_y_o_ampli',
    'label' => 'Rehabilitaciones y/o ampliaciones',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'field_collection',
      'settings' => array(
        'nodragging' => 0,
      ),
      'type' => 'field_collection_embed',
      'weight' => 24,
    ),
  );

  // Exported field_instance:
  // 'entityform-sistema-field_tipo_de_sistema_de_abastec'.
  $field_instances['entityform-sistema-field_tipo_de_sistema_de_abastec'] = array(
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
    'field_name' => 'field_tipo_de_sistema_de_abastec',
    'label' => 'Tipo de sistema de abastecimiento de agua',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'entityform-sistema-field_total_financiamiento'.
  $field_instances['entityform-sistema-field_total_financiamiento'] = array(
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
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_total_financiamiento',
    'label' => 'Monto total utilizado',
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
      'weight' => 25,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_a_fuentes_de_financiamient-field_moneda'.
  $field_instances['field_collection_item-field_a_fuentes_de_financiamient-field_moneda'] = array(
    'bundle' => 'field_a_fuentes_de_financiamient',
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
    'field_name' => 'field_moneda',
    'label' => 'Moneda',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_a_fuentes_de_financiamient-field_monto'.
  $field_instances['field_collection_item-field_a_fuentes_de_financiamient-field_monto'] = array(
    'bundle' => 'field_a_fuentes_de_financiamient',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_monto',
    'label' => 'Monto',
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
  // 'field_collection_item-field_a_fuentes_de_financiamient-field_origen_de_financiamiento_i'.
  $field_instances['field_collection_item-field_a_fuentes_de_financiamient-field_origen_de_financiamiento_i'] = array(
    'bundle' => 'field_a_fuentes_de_financiamient',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_a_fuentes_de_financiamient-field_programa_especifico_fondo'.
  $field_instances['field_collection_item-field_a_fuentes_de_financiamient-field_programa_especifico_fondo'] = array(
    'bundle' => 'field_a_fuentes_de_financiamient',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_programa_especifico_fondo',
    'label' => 'Programa específico de donde provienen los fondos ',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_d1_2'.
  $field_instances['field_collection_item-field_d_infraestructura-field_d1_2'] = array(
    'bundle' => 'field_d_infraestructura',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_d1_2',
    'label' => 'Tipo de tratamiento',
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
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_d_infraestructura-field_d2_1'.
  $field_instances['field_collection_item-field_d_infraestructura-field_d2_1'] = array(
    'bundle' => 'field_d_infraestructura',
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
    'field_name' => 'field_d2_1',
    'label' => 'Estado físico de la línea de tratamiento de agua',
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
      'weight' => 5,
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_e_infraestructura_almac-field_e1_2'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_e1_2'] = array(
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_e1_2',
    'label' => 'Capacidad de almacenamient o (volumen)',
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
      'weight' => 2,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_e_infraestructura_almac-field_e1_3'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_e1_3'] = array(
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_e1_3',
    'label' => '¿Con qué frecuencia se realiza la limpieza?',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_e_infraestructura_almac-field_e2_1'.
  $field_instances['field_collection_item-field_e_infraestructura_almac-field_e2_1'] = array(
    'bundle' => 'field_e_infraestructura_almac',
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
    'field_name' => 'field_e2_1',
    'label' => '¿Cuál es el Estado físico de la infraestructura de almacenamiento de agua?',
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
      'weight' => 5,
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
        'size' => 20,
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
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_f_red_de_distribucion-field_f3_1'.
  $field_instances['field_collection_item-field_f_red_de_distribucion-field_f3_1'] = array(
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
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_f3_1',
    'label' => '¿Cuál es estado físico de la red de distribución de agua?',
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
      'weight' => 4,
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
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 5,
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
    'field_name' => 'field_caudal_de_la_fuente',
    'label' => 'Caudal de la fuente',
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
    'field_name' => 'field_caudal_fuente_epoca_seca',
    'label' => 'Caudal de la fuente en época seca',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_codigo_de_la_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_codigo_de_la_fuente'] = array(
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_codigo_de_la_fuente',
    'label' => 'Código de la fuente',
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
      'weight' => 2,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_estado_fisico_infraestruct'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_estado_fisico_infraestruct'] = array(
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
        'weight' => 17,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_estado_fisico_infraestruct',
    'label' => '¿Cuál es el estado físico de la infraestructura de captación de agua?',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_existencia_de_indicio'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existencia_de_indicio'] = array(
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
        'weight' => 13,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_existencia_de_indicio',
    'label' => ' Existencia de indicios o riesgo de contaminación causada por productos químicos o residuos alrededor de la toma de agua ',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_existencia_deareas_verdes'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existencia_deareas_verdes'] = array(
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_existencia_z_erosionadas'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existencia_z_erosionadas'] = array(
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_existencia_z_erosionadas',
    'label' => ' Existencia de zonas erosionadas en los alrededores de fuente / toma de agua',
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
      'weight' => 11,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_existenciade_contaminacion'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_existenciade_contaminacion'] = array(
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
        'weight' => 12,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_existenciade_contaminacion',
    'label' => ' Existencia de contaminación causada por basuras de hogares o por aguas servidas alrededor de la toma de agua ',
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_funciona_el_macro'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_funciona_el_macro'] = array(
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
        'weight' => 16,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_funciona_el_macro',
    'label' => '¿Funciona el macro de medición?',
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
      'weight' => 5,
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
    'label' => 'Existe infraestructura de Captación de Agua de del sistema',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_macro_medicion'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_macro_medicion'] = array(
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
        'weight' => 15,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_macro_medicion',
    'label' => 'Existe macro medición del caudal captado instalada',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_nombre_de_la_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_nombre_de_la_fuente'] = array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_nombre_de_la_fuente',
    'label' => 'Nombre de la fuente',
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
      'weight' => 16,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_proteccion_de_la_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_proteccion_de_la_fuente'] = array(
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_fuente_y_o_captacion-field_tipo_de_fuente'.
  $field_instances['field_collection_item-field_fuente_y_o_captacion-field_tipo_de_fuente'] = array(
    'bundle' => 'field_fuente_y_o_captacion',
    'default_value' => array(),
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
    'field_name' => 'field_tipo_de_fuente',
    'label' => 'Tipo de fuente',
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
  // 'field_collection_item-field_lineas_de_conduccion-field_c1_1'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_c1_1'] = array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_c1_1',
    'label' => 'Código de la línea',
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
        'size' => 50,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_c1_2'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_c1_2'] = array(
    'bundle' => 'field_lineas_de_conduccion',
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_c1_2',
    'label' => 'Longitud de la línea',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_c1_3'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_c1_3'] = array(
    'bundle' => 'field_lineas_de_conduccion',
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_c1_3',
    'label' => 'Diámetro medio (interior) de la tubería principal',
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
      'weight' => 2,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_lineas_de_conduccion-field_c2_1'.
  $field_instances['field_collection_item-field_lineas_de_conduccion-field_c2_1'] = array(
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
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_c2_1',
    'label' => '¿Cuál es el estado físico de la línea de conducción de agua?',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_prest_serv-field_prest_servicio'.
  $field_instances['field_collection_item-field_prest_serv-field_prest_servicio'] = array(
    'bundle' => 'field_prest_serv',
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
    'field_name' => 'field_prest_servicio',
    'label' => 'Prestador de servicio',
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
        'size' => 50,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
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
        'weight' => 7,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_ano',
    'label' => 'Año',
    'required' => 1,
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
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1990:+3',
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
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_institucion_ejecutora',
    'label' => 'Institución ejecutora',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_moneda_rehabilitacion'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_moneda_rehabilitacion'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_moneda_rehabilitacion',
    'label' => 'Moneda',
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
      'weight' => 6,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_monto_rehabilitacion',
    'label' => 'Monto',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_origen_financiacion'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_origen_financiacion'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
    'default_value' => NULL,
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
    'field_name' => 'field_origen_financiacion',
    'label' => 'Origen financiación',
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
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_programa'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_programa'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
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
    'field_name' => 'field_programa',
    'label' => 'Programa',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_rehabilitaciones_y_o_ampli-field_tipo_de_rehabilitaci_n_o_d'.
  $field_instances['field_collection_item-field_rehabilitaciones_y_o_ampli-field_tipo_de_rehabilitaci_n_o_d'] = array(
    'bundle' => 'field_rehabilitaciones_y_o_ampli',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_tipo_de_rehabilitaci_n_o_d',
    'label' => 'Tipo de rehabilitación o de ampliación',
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

  // Translatables
  // Included for use with string extractors like potx.
  t(' Existencia de contaminación causada por basuras de hogares o por aguas servidas alrededor de la toma de agua ');
  t(' Existencia de indicios o riesgo de contaminación causada por productos químicos o residuos alrededor de la toma de agua ');
  t(' Existencia de zonas erosionadas en los alrededores de fuente / toma de agua');
  t(' F_F_C_I');
  t(' Fuente y/o captación');
  t('Año');
  t('Año de construcción');
  t('Año en que se construyó el sistema ');
  t('Cantidad de coliformes');
  t('Capacidad de almacenamient o (volumen)');
  t('Caudal actual del sistema');
  t('Caudal de la fuente');
  t('Caudal de la fuente en época seca');
  t('Croquis');
  t('Código de Sistema');
  t('Código de la fuente');
  t('Código de la infraestructura');
  t('Código de la línea');
  t('Código de la red');
  t('Desinfección con cloro');
  t('Diámetro medio (interior) de la tubería principal');
  t('Encuestador');
  t('Entidad local mayor');
  t('Entidad local menor');
  t('Entidad regional ');
  t('Estado físico de la línea de tratamiento de agua');
  t('Existe infraestructura de Captación de Agua de del sistema');
  t('Existe macro medición del caudal captado instalada');
  t('Existencia de áreas verdes o zonas forestadas alrededor de la fuente / toma de agua');
  t('Fecha de Aplicación');
  t('Fecha de análisis de la calidad del agua');
  t('Fecha de la toma del caudal de la fuente');
  t('Fecha de la toma del caudal de la fuente en época seca');
  t('Fecha en la que se llena la encuesta');
  t('Filtración domiciliaria');
  t('Funcionamiento correcto');
  t('Georeferenciación');
  t('Horas de servicio al día');
  t('Infraestructura de almacenamiento');
  t('Infraestructura de tramiento');
  t('Institución ejecutora');
  t('Longitud de la línea');
  t('Líneas de conducción');
  t('Moneda');
  t('Monto');
  t('Monto total de financiamiento');
  t('Monto total utilizado');
  t('Nombre de la fuente');
  t('Nombre de la persona que rellena la encuesta');
  t('Nombre del sistema');
  t('Número de conexiones de la red de distribución');
  t('Número de micro medidores con consumo registrado');
  t('Número de micro medidores instalados');
  t('Observaciones');
  t('Observaciones sobre la infraestructura');
  t('Observaciones y comentarios');
  t('Origen de financiamiento (institución, organismo, donación, aporte, etc.)');
  t('Origen financiación');
  t('Otras divisiones ');
  t('P_S');
  t('Pasa el test de análisis físico-químicos');
  t('Pasa el test de coliformes?');
  t('Prestador de servicio');
  t('Programa');
  t('Programa específico de donde provienen los fondos ');
  t('Protección (delimitación con cerca u otros sistemas) de la fuente / toma de agua');
  t('Red de distribución');
  t('Rehabilitaciones y/o ampliaciones');
  t('Tipo de fuente');
  t('Tipo de rehabilitación o de ampliación');
  t('Tipo de sistema de abastecimiento de agua');
  t('Tipo de tratamiento');
  t('¿Con qué frecuencia se realiza la limpieza?');
  t('¿Contiene estructuras especiales la línea? (Tanque rompe presión, válvulas, etc.)');
  t('¿Cuál es el Estado físico de la infraestructura de almacenamiento de agua?');
  t('¿Cuál es el estado físico de la infraestructura de captación de agua?');
  t('¿Cuál es el estado físico de la línea de conducción de agua?');
  t('¿Cuál es estado físico de la red de distribución de agua?');
  t('¿Cuál es la Distancia promedio de las casas a puntos de toma de agua públicos?');
  t('¿Es la fuente principal del sistema? (sólo debe ser una entre todas las asociadas)');
  t('¿Funciona el macro de medición?');
  t('¿Hay suficiente agua en las fuentes en función de la demanda en el invierno / época de lluvias?');
  t('¿Hay suficiente agua en las fuentes en función de la demanda en el verano / época seca?');
  t('¿Qué otro tipo de sistema es?');

  return $field_instances;
}
