<?php
/**
 * @file
 * feature_siasar_entityform_prestador_servicio.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_siasar_entityform_prestador_servicio_field_default_field_instances() {
  $field_instances = array();

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
        'weight' => 19,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 65,
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
        'weight' => 19,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
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
        'weight' => 26,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 79,
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
        'weight' => 20,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 62,
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
        'weight' => 21,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
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
        'weight' => 5,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 25,
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
        'weight' => 9,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_altitud',
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
      'weight' => 154,
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
        'weight' => 14,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 17,
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
        'weight' => 12,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 68,
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
        'weight' => 19,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
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
        'weight' => 16,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
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
      'weight' => 155,
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 57,
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
      'weight' => 148,
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
        'weight' => 25,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 56,
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
        'weight' => 11,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 45,
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
  // 'entityform-prestador_de_servicio-field_data_source'.
  $field_instances['entityform-prestador_de_servicio-field_data_source'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 30,
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
        'formatter' => '',
        'formatter_settings' => array(),
        'size' => 60,
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 157,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_entidad_local'.
  $field_instances['entityform-prestador_de_servicio-field_entidad_local'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(),
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 50,
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
      'weight' => 152,
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
        'weight' => 5,
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
        'weight' => 17,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 33,
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
        'weight' => 4,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 32,
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 59,
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
        'weight' => 16,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 23,
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
        'year_range' => '1920:+0',
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
        'weight' => 21,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 82,
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
        'weight' => 19,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 39,
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
        'weight' => 25,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 42,
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
        'weight' => 23,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 75,
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
        'weight' => 21,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 28,
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
        'weight' => 20,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 26,
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
        'weight' => 26,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 74,
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
        'weight' => 24,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
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
        'weight' => 22,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 21,
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 81,
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
        'weight' => 4,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 72,
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
        'weight' => 3,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 53,
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
        'weight' => 19,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 22,
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
        'weight' => 6,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 37,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ingresos_reales',
    'label' => 'Billing Income',
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
    'default_value' => array(
      0 => array(
        'input_format' => 'lat/lon',
        'geom' => array(
          'lat' => '',
          'lon' => '',
        ),
      ),
    ),
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
        'weight' => 8,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 83,
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
      'weight' => 153,
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
        'weight' => 19,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 54,
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
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 66,
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
      'type' => 'options_buttons',
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
        'weight' => 3,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 77,
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
      'type' => 'options_buttons',
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
        'weight' => 22,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 69,
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
        'weight' => 20,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 61,
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
        'weight' => 21,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 73,
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
        'weight' => 21,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 40,
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
        'weight' => 21,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 34,
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
        'weight' => 20,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 31,
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
        'weight' => 20,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 85,
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
        'weight' => 20,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 30,
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
        'weight' => 13,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 38,
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
        'weight' => 15,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 70,
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
        'weight' => 12,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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
        'weight' => 15,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 18,
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
    'default_value' => array(),
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 67,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_numero_reuniones',
    'label' => 'Número de reuniones de la junta directiva en los últimos 6 meses',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => 180,
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
        'weight' => 17,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 46,
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
        'weight' => 4,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 80,
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
        'weight' => 4,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
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

  // Exported field_instance: 'entityform-prestador_de_servicio-field_pais'.
  $field_instances['entityform-prestador_de_servicio-field_pais'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 6,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 29,
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
      'weight' => 151,
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
        'weight' => 22,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 41,
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
        'weight' => 23,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 36,
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
        'weight' => 14,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 71,
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 58,
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
        'weight' => 16,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 60,
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
        'weight' => 8,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
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
        'weight' => 17,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 20,
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
  // 'entityform-prestador_de_servicio-field_rating_s1'.
  $field_instances['entityform-prestador_de_servicio-field_rating_s1'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(),
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
        'weight' => 29,
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
        'formatter' => '',
        'formatter_settings' => array(),
      ),
      'type' => 'field_extrawidgets_read_only',
      'weight' => 156,
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
        'weight' => 13,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 44,
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
        'weight' => 14,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 63,
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
        'weight' => 7,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 76,
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
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 25,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 52,
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
        'weight' => 14,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 86,
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
        'weight' => 11,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
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
        'weight' => 12,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 43,
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
        'weight' => 17,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
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
        'weight' => 25,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 64,
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
        'weight' => 27,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 35,
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
        'weight' => 28,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
        'weight' => 15,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 55,
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
        'weight' => 4,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
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
        'weight' => 19,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 27,
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
          'view_mode' => 'full',
        ),
        'type' => 'field_collection_fields',
        'weight' => 26,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 49,
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
        'weight' => 25,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
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
        'weight' => 3,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 84,
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
    'default_value' => array(),
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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
    'default_value' => array(),
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 51,
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
        'weight' => 9,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 78,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('	¿Dispone de balance contable?');
  t(' Ingresos reales por facturación ');
  t('Acción preventiva: Revisión y/o sustitución periódica de los componentes pertenecientes a la toma de agua del sistema (antes de rotura o daño)  Realización de acciones que promuevan la NO tala de árboles y la reforestación');
  t('Activos Corrientes');
  t('Activos No Corrientes');
  t('Agua facturada (promedio mensual, en metros cúbicos)');
  t('Agua producida (promedio mensual, en metros cúbicos)');
  t('Altitud');
  t('Calificación (SIASAR 1)');
  t('Cargo');
  t('Clase de prestador');
  t('Código de prestador ');
  t('El Prestador está dando la atención en operación y mantenimiento al sistema de Agua');
  t('El prestador, ¿rinde cuentas?');
  t('El prestador, ¿tiene cuenta bancaria?');
  t('Encuestador');
  t('Estado legal del prestador ');
  t('Facturación (promedio mensual de los últimos 12 meses, en la moneda especificada en la C2)');
  t('Fecha de Aplicación');
  t('Fecha de creación');
  t('Fecha de última elección de los miembros de Junta');
  t('Gasto promedio mensual real en administración');
  t('Gasto promedio mensual real en mantenimiento ');
  t('Gasto promedio mensual real en operación');
  t('Gasto promedio mensual real en servicios ambientales');
  t('Gasto promedio mensual teórico en administración ');
  t('Gasto promedio mensual teórico en mantenimiento');
  t('Gasto promedio mensual teórico en operación');
  t('Gasto promedio mensual teórico en servicios ambientales      ');
  t('Georeferenciación');
  t('Género');
  t('Imagen');
  t('La altitud se mide en metros sobre el nivel del mar (msnm).');
  t('Localidad');
  t('Monitoreo de la higiene comunitaria: ¿El prestador promueve saneamiento ambiental?');
  t('Monto previsto para el año en curso');
  t('Monto total actual');
  t('Monto total de egresos en el último año');
  t('Monto total de ingresos en el último año ');
  t('Monto total del último año finalizado');
  t('Nombre');
  t('Nombre de entidad que apoya');
  t('Nombre del Representante');
  t('Nombre del Técnico');
  t('Número de reuniones de la junta directiva en los últimos 6 meses');
  t('Número de usuarios al día en sus pagos ordinarios');
  t('Número de usuarios que deberían pagar factura');
  t('Observaciones y comentarios');
  t('Origen de los datos');
  t('Otra clase de prestador');
  t('Pasivos Corrientes ');
  t('Pasivos No Corrientes');
  t('País');
  t('Promoción de no descargas de aguas residuales');
  t('Promoción del no uso de plaguicidas en la zona cercana a la fuente o toma de agua del sistema');
  t('Protección de la flora y fauna de la zona cercana a la fuente o toma de agua del sistema');
  t('Protección de suelos (Estabilización de taludes, barreras vivas, barreras muertas, etc.)');
  t('Realización de acciones que promuevan la NO tala de árboles y la reforestación');
  t('Reforestación');
  t('Representantes');
  t('Revisión del buen estado de la demarcación y señalización de la zona cercana a la fuente o toma de agua del sistema');
  t('Revisión del estado de la obra de toma limpia y/o mejorarlo');
  t('Revisión del estado del cercado de la obra de toma y/o mejorarlo');
  t('Revisión y actualización del plan de contingencia (incendio, desastres naturales)');
  t('Revisión y/o aumento de la protección legal o administrativa del terreno donde se ubica la toma y/o del recurso hídrico');
  t('Suma de gastos reales ');
  t('Suma de gastos teóricos');
  t('Sustitución de componentes pertenecientes a la toma de agua del sistema (una vez dañados)');
  t('Tarifa media mensual');
  t('Tasa anual de expansión promedio');
  t('Teléfono');
  t('Tiene definido un tipo de tarifa?');
  t('Tipo de tarifa');
  t('Técnicos');
  t('Validado');
  t('Vigilancia de la zona cercana a la fuente o toma de agua del sistema');
  t('¿Cuenta con fondos disponibles?');
  t('¿Cuentan con personal técnico, operador o fontanero para la operación y mantenimiento?');
  t('¿De qué forma es mantenido el sistema?');
  t('¿El prestador de servicio cuenta con recursos (material de construcción, herramientas, equipo) para el desarrollo de sus actividades de mantenimiento?');
  t('¿El prestador promueve acciones de protección de la zona cercana a la fuente o toma de agua del sistema?');
  t('¿Existe acta de la última asamblea de rendición de cuentas?');
  t('¿Han tenido ingresos extraordinarios de funcionamiento?');
  t('¿La comunidad conoce el mecanismo de pago de la tarifa y se aplica de forma regular? ');
  t('¿Por qué otros motivos no se conoce el mecanismo?');
  t('¿Poseen un reglamento para la prestación del servicio?');
  t('¿Qué "otros" mantiene el sistema?');
  t('¿Reciben apoyo técnico del gobierno/otras instituciones para la operación del sistema u otras actividades?');
  t('¿Se han realizado aportaciones extraordinarias no directamente vinculadas al servicio de agua? ');
  t('¿Se tiene información sobre la medición del agua?');
  t('¿Tienen libro de ingresos y egresos al día?');
  t('¿Todos los miembros de la Junta Directiva están nombrados?');

  return $field_instances;
}
