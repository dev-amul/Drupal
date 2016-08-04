<?php
/**
 * @file
 * feaute_prestador_servicio.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feaute_prestador_servicio_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field__activos_corrientes'.
  $field_instances['entityform-prestador_de_servicio-field__activos_corrientes'] = array(
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
        'weight' => 60,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field__activos_corrientes',
    'label' => '	Activos Corrientes',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field__aportaciones_extras'.
  $field_instances['entityform-prestador_de_servicio-field__aportaciones_extras'] = array(
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
        'weight' => 39,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field__aportaciones_extras',
    'label' => '¿Se han realizado aportaciones extraordinarias no directamente vinculadas al servicio de agua? ',
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field__gasto_real_adm'.
  $field_instances['entityform-prestador_de_servicio-field__gasto_real_adm'] = array(
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
        'weight' => 45,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field__gasto_real_adm',
    'label' => '	 Gasto promedio mensual real en administración',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field__pasivos_corrientes'.
  $field_instances['entityform-prestador_de_servicio-field__pasivos_corrientes'] = array(
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
        'weight' => 62,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field__pasivos_corrientes',
    'label' => '	Pasivos Corrientes',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field__pasivos_no_corrientes'.
  $field_instances['entityform-prestador_de_servicio-field__pasivos_no_corrientes'] = array(
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
        'weight' => 63,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field__pasivos_no_corrientes',
    'label' => '	Pasivos No Corrientes',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_acta_rendicion_cuentas'.
  $field_instances['entityform-prestador_de_servicio-field_acta_rendicion_cuentas'] = array(
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
    'field_name' => 'field_acta_rendicion_cuentas',
    'label' => '¿Existe acta de la última asamblea de rendición de cuentas?',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_activos_no_corrientes'.
  $field_instances['entityform-prestador_de_servicio-field_activos_no_corrientes'] = array(
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
        'weight' => 61,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_activos_no_corrientes',
    'label' => 'Activos No Corrientes',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_agua_facturada'.
  $field_instances['entityform-prestador_de_servicio-field_agua_facturada'] = array(
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
        'weight' => 26,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_agua_facturada',
    'label' => 'Agua facturada (promedio mensual, en metros cúbicos)',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_agua_producida'.
  $field_instances['entityform-prestador_de_servicio-field_agua_producida'] = array(
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
        'weight' => 25,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_agua_producida',
    'label' => 'Agua producida (promedio mensual, en metros cúbicos)',
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
        'weight' => 12,
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
  // 'entityform-prestador_de_servicio-field_apoyo_gob_otros'.
  $field_instances['entityform-prestador_de_servicio-field_apoyo_gob_otros'] = array(
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
        'weight' => 68,
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
      'weight' => 82,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_atencion_operacion_sistema'.
  $field_instances['entityform-prestador_de_servicio-field_atencion_operacion_sistema'] = array(
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
    'field_name' => 'field_atencion_operacion_sistema',
    'label' => '	 El Prestador está dando la atención en operación y mantenimiento al sistema de Agua',
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
      'weight' => 78,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_balance_contable'.
  $field_instances['entityform-prestador_de_servicio-field_balance_contable'] = array(
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
        'weight' => 59,
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
        'weight' => 1,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_clase_de_prestador',
    'label' => 'Clase de prestador',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_codigo_sistema'.
  $field_instances['entityform-prestador_de_servicio-field_codigo_sistema'] = array(
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
        'weight' => 13,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_codigo_sistema',
    'label' => 'Código del sistema',
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
  // 'entityform-prestador_de_servicio-field_cuenta_banco'.
  $field_instances['entityform-prestador_de_servicio-field_cuenta_banco'] = array(
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
        'weight' => 29,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_cuenta_banco',
    'label' => 'El prestador, ¿tiene cuenta bancaria?',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_entidad_local_chica'.
  $field_instances['entityform-prestador_de_servicio-field_entidad_local_chica'] = array(
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
        'weight' => 87,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entidad_local_chica',
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_entidad_local_mayor'.
  $field_instances['entityform-prestador_de_servicio-field_entidad_local_mayor'] = array(
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_entidad_regional'.
  $field_instances['entityform-prestador_de_servicio-field_entidad_regional'] = array(
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
    'field_name' => 'field_entidad_regional',
    'label' => 'Entidad regional',
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
        'weight' => 15,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_estado_legal',
    'label' => 'Estado legal',
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
      'weight' => 49,
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
        'weight' => 14,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_creacion',
    'label' => 'Fecha de creación',
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
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '1950:+3',
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
        'weight' => 16,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecha_eleccion',
    'label' => 'Fecha de última elección de los miembros de Junta',
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
        'year_range' => '2000:+3',
      ),
      'type' => 'date_select',
      'weight' => 51,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_fondos_disponibles'.
  $field_instances['entityform-prestador_de_servicio-field_fondos_disponibles'] = array(
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
        'weight' => 57,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fondos_disponibles',
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
      'weight' => 9,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 48,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_real_mantenimiento',
    'label' => 'Gasto promedio mensual real en mantenimiento',
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
      'weight' => 16,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 46,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_real_operacion',
    'label' => 'Gasto promedio mensual real en operación',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_real_serv_ambient'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_real_serv_ambient'] = array(
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
        'weight' => 50,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_real_serv_ambient',
    'label' => 'Gasto promedio mensual real en servicios ambientales',
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
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_gasto_teorico_adm'.
  $field_instances['entityform-prestador_de_servicio-field_gasto_teorico_adm'] = array(
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
        'weight' => 44,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_teorico_adm',
    'label' => 'Gasto promedio mensual teórico en administración',
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
      'weight' => 13,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 51,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_teorico_ambientales',
    'label' => 'Gasto promedio mensual teórico en servicios ambientales',
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
      'weight' => 19,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 49,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_teorico_mantenimient',
    'label' => 'Gasto promedio mensual teórico en mantenimiento',
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
      'weight' => 17,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 47,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_gasto_teorico_operacion',
    'label' => 'Gasto promedio mensual teórico en operación',
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
      'weight' => 15,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_higiene_comunitaria'.
  $field_instances['entityform-prestador_de_servicio-field_higiene_comunitaria'] = array(
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
        'weight' => 70,
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
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_inf_medicion_agua'.
  $field_instances['entityform-prestador_de_servicio-field_inf_medicion_agua'] = array(
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
        'weight' => 22,
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
    'default_value' => NULL,
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
    'field_name' => 'field_ingresos_extra',
    'label' => '¿Han tenido ingresos extraordinarios de funcionamiento?',
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 33,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ingresos_reales',
    'label' => 'Ingresos reales por facturación',
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
        'weight' => 10,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_latitud',
    'label' => 'Latitud',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(),
      'type' => 'geofield_bounds',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_libro_ingresos_egresos'.
  $field_instances['entityform-prestador_de_servicio-field_libro_ingresos_egresos'] = array(
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
      'weight' => 72,
    ),
  );

  // Exported field_instance: 'entityform-prestador_de_servicio-field_longitud'.
  $field_instances['entityform-prestador_de_servicio-field_longitud'] = array(
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
        'weight' => 11,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_longitud',
    'label' => 'Longitud',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(),
      'type' => 'geofield_bounds',
      'weight' => 9,
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
        'weight' => 34,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_mantenimiento_sistema',
    'label' => '¿De qué forma es mantenido el sistema?',
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
      'weight' => 66,
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
  // 'entityform-prestador_de_servicio-field_miembros_nombrados'.
  $field_instances['entityform-prestador_de_servicio-field_miembros_nombrados'] = array(
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
        'weight' => 21,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_miembros_nombrados',
    'label' => '¿Todos los miembros de la Junta Directiva están nombrados?',
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
      'weight' => 52,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_aporte_final'.
  $field_instances['entityform-prestador_de_servicio-field_monto_aporte_final'] = array(
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
        'weight' => 40,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_aporte_final',
    'label' => 'Monto total del último año finalizado',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_aporte_previsto'.
  $field_instances['entityform-prestador_de_servicio-field_monto_aporte_previsto'] = array(
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
        'weight' => 41,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_aporte_previsto',
    'label' => 'Monto previsto para el año en curso',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_finalizado'.
  $field_instances['entityform-prestador_de_servicio-field_monto_finalizado'] = array(
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
        'weight' => 37,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_finalizado',
    'label' => 'Monto total del último año finalizado',
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
      'weight' => 59,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_previsto'.
  $field_instances['entityform-prestador_de_servicio-field_monto_previsto'] = array(
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
        'weight' => 38,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_previsto',
    'label' => 'Monto previsto para el año en curso',
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
      'weight' => 60,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_total_egresos'.
  $field_instances['entityform-prestador_de_servicio-field_monto_total_egresos'] = array(
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
        'weight' => 56,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_total_egresos',
    'label' => 'Monto total de egresos en el último año',
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
      'weight' => 74,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_total_fondos'.
  $field_instances['entityform-prestador_de_servicio-field_monto_total_fondos'] = array(
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
        'weight' => 58,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_total_fondos',
    'label' => '	Monto total actual',
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
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_monto_total_ingresos'.
  $field_instances['entityform-prestador_de_servicio-field_monto_total_ingresos'] = array(
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
        'weight' => 55,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_monto_total_ingresos',
    'label' => 'Monto total de ingresos en el último año',
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
      'weight' => 73,
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
        'weight' => 73,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_no_aguas_residuales',
    'label' => 'Promoción de no descargas de aguas residuales',
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
        'weight' => 83,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_no_tala_y_resforestacion',
    'label' => 'Realización de acciones que promuevan la NO tala de árboles y la reforestación',
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
      'weight' => 90,
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
        'weight' => 72,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_no_uso_plaguicidas',
    'label' => 'Promoción del no uso de plaguicidas en la zona cercana a la fuente o toma de agua del sistema',
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
      'weight' => 87,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_nombre_del_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_nombre_del_prestador'] = array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_nombre_del_prestador',
    'label' => 'Nombre del prestador',
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
      'weight' => 3,
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
        'weight' => 69,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_nombre_entidad_apoya',
    'label' => 'Nombre de entidad que apoya',
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
      'weight' => 83,
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
        'weight' => 18,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_numero_reuniones',
    'label' => 'Número de reuniones de la junta directiva en los últimos 6 meses',
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
      'weight' => 53,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_observaciones_comentarios'.
  $field_instances['entityform-prestador_de_servicio-field_observaciones_comentarios'] = array(
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
        'weight' => 86,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_observaciones_comentarios',
    'label' => '	Observaciones y comentarios',
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
      'weight' => 23,
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_otra_clase_de_prestador',
    'label' => 'Otra clase de prestador',
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
      'weight' => 14,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_otras_divisiones'.
  $field_instances['entityform-prestador_de_servicio-field_otras_divisiones'] = array(
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
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_otras_divisiones',
    'label' => 'Otras divisiones',
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
      'weight' => 7,
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
        'weight' => 35,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_otros_mantenimientos',
    'label' => '¿Qué "otros" mantiene el sistema?',
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
      'weight' => 67,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_personal_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_personal_prestador'] = array(
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
        'weight' => 66,
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
      'weight' => 80,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_promedio_mensual'.
  $field_instances['entityform-prestador_de_servicio-field_promedio_mensual'] = array(
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
        'weight' => 31,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_promedio_mensual',
    'label' => 'Facturación (promedio mensual de los últimos 12 meses, en la moneda especificada en la C2) ',
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
      'weight' => 66,
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
        'weight' => 78,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_proteccion_flora_fauna',
    'label' => 'Protección de la flora y fauna de la zona cercana a la fuente o toma de agua del sistema',
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
        'weight' => 84,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_proteccion_suelos',
    'label' => 'Protección de suelos (Estabilización de taludes, barreras vivas, barreras muertas, etc.)',
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
      'weight' => 91,
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
        'weight' => 76,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_proteccion_terreno',
    'label' => 'Revisión y/o aumento de la protección legal o administrativa del terreno donde se ubica la toma y/o del recurso hídrico',
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
      'weight' => 12,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_proteccion_zona_fuente'.
  $field_instances['entityform-prestador_de_servicio-field_proteccion_zona_fuente'] = array(
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
        'weight' => 71,
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
      'weight' => 85,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_recursos_prestador'.
  $field_instances['entityform-prestador_de_servicio-field_recursos_prestador'] = array(
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
        'weight' => 65,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_recursos_prestador',
    'label' => '¿El prestador de servicio cuenta con recursos (material de construcción, herramientas, equipo) para el desarrollo de sus activ.',
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
      'weight' => 78,
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
        'weight' => 74,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_reforestacion',
    'label' => 'Reforestación',
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
        'weight' => 67,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_reglamento_servicios',
    'label' => '¿Poseen un reglamento para la prestación del servicio?',
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
        'weight' => 27,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_representantes',
    'label' => 'Representantes',
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
        'weight' => 82,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_componentes_toma',
    'label' => 'Revisión y/o sustitución periódica de los componentes pertenecientes a la toma de agua del sistema (antes de rotura o daño)',
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
      'weight' => 89,
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
        'weight' => 79,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_demarcacion',
    'label' => 'Revisión del buen estado de la demarcación y señalización de la zona cercana a la fuente o toma de agua del sistema',
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
        'weight' => 80,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_estado_cercano',
    'label' => 'Revisión del estado del cercado de la obra de toma y/o mejorarlo',
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
        'weight' => 81,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_estado_obra',
    'label' => 'Revisión del estado de la obra de toma limpia y/o mejorarlo',
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
      'weight' => 88,
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
        'weight' => 85,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_revision_plan_contingencia',
    'label' => 'Revisión y actualización del plan de contingencia (incendio, desastres naturales)',
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
      'weight' => 92,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_rinde_cuentas'.
  $field_instances['entityform-prestador_de_servicio-field_rinde_cuentas'] = array(
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
        'weight' => 19,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_rinde_cuentas',
    'label' => 'El prestador, ¿rinde cuentas?',
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
      'weight' => 31,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 52,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sumatoria_gastos_reales',
    'label' => 'Suma de gastos reales ',
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
      'weight' => 20,
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
        'module' => 'number',
        'settings' => array(
          'decimal_separator' => '.',
          'prefix_suffix' => TRUE,
          'scale' => 2,
          'thousand_separator' => '',
        ),
        'type' => 'number_decimal',
        'weight' => 53,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sumatoria_gastos_teoricos',
    'label' => 'Suma de gastos teóricos',
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
      'weight' => 21,
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
        'weight' => 75,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sustitucion_componentes',
    'label' => 'Sustitución de componentes pertenecientes a la toma de agua del sistema (una vez dañados)',
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
      'weight' => 90,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_tarifa_media_mensual'.
  $field_instances['entityform-prestador_de_servicio-field_tarifa_media_mensual'] = array(
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
        'weight' => 5,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tarifa_media_mensual',
    'label' => 'Tarifa media mensual',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => 0,
      'prefix' => '$',
      'suffix' => '',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 63,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_tasa_anual_de_expansi_n_pr'.
  $field_instances['entityform-prestador_de_servicio-field_tasa_anual_de_expansi_n_pr'] = array(
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
        'weight' => 42,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tasa_anual_de_expansi_n_pr',
    'label' => 'Tasa anual de expansión promedio',
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
        'weight' => 28,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tecnicos',
    'label' => 'Técnicos',
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
        'weight' => 3,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tiene_definido_tipo_tarifa',
    'label' => 'Tiene definido un tipo de tarifa?',
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
      'weight' => 61,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_tipo_de_tarifa'.
  $field_instances['entityform-prestador_de_servicio-field_tipo_de_tarifa'] = array(
    'bundle' => 'prestador_de_servicio',
    'default_value' => array(
      0 => array(
        'tid' => 4,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_tipo_de_tarifa',
    'label' => 'Tipo de tarifa',
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
      'weight' => 62,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_usuarios_al_dia'.
  $field_instances['entityform-prestador_de_servicio-field_usuarios_al_dia'] = array(
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
        'weight' => 32,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_usuarios_al_dia',
    'label' => 'Número de usuarios al día en sus pagos ordinarios',
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
      'weight' => 67,
    ),
  );

  // Exported field_instance:
  // 'entityform-prestador_de_servicio-field_usuarios_deberian_pagan'.
  $field_instances['entityform-prestador_de_servicio-field_usuarios_deberian_pagan'] = array(
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
        'weight' => 30,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_usuarios_deberian_pagan',
    'label' => 'Número de usuarios que deberían pagar factura',
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
        'weight' => 77,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_vigilancia_zona',
    'label' => 'Vigilancia de la zona cercana a la fuente o toma de agua del sistema',
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
      'weight' => 13,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_representantes-field_cargo'.
  $field_instances['field_collection_item-field_representantes-field_cargo'] = array(
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_cargo',
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
      'weight' => 1,
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
        'weight' => 4,
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
      'weight' => 5,
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_nombre_representante',
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
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'field_collection_item-field_representantes-field_telefono_representante'.
  $field_instances['field_collection_item-field_representantes-field_telefono_representante'] = array(
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
    'field_name' => 'field_telefono_representante',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
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
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
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
      'weight' => 1,
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
        'weight' => 3,
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
      'weight' => 4,
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
    'label' => 'Nombre',
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
  // 'field_collection_item-field_tecnicos-field_telefono_tecnico'.
  $field_instances['field_collection_item-field_tecnicos-field_telefono_tecnico'] = array(
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
        'weight' => 2,
      ),
    ),
    'entity_type' => 'field_collection_item',
    'field_name' => 'field_telefono_tecnico',
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
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-atencion_operacion_sistema_agua-field_atencion_sistema'.
  $field_instances['taxonomy_term-atencion_operacion_sistema_agua-field_atencion_sistema'] = array(
    'bundle' => 'atencion_operacion_sistema_agua',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_atencion_sistema',
    'label' => 'El Prestador está dando la atención en operación y mantenimiento al sistema de Agua',
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
  t('	 El Prestador está dando la atención en operación y mantenimiento al sistema de Agua');
  t('	 Gasto promedio mensual real en administración');
  t('	Activos Corrientes');
  t('	Monto total actual');
  t('	Observaciones y comentarios');
  t('	Pasivos Corrientes');
  t('	Pasivos No Corrientes');
  t('	¿Dispone de balance contable?');
  t('Activos No Corrientes');
  t('Agua facturada (promedio mensual, en metros cúbicos)');
  t('Agua producida (promedio mensual, en metros cúbicos)');
  t('Altitud');
  t('Cargo');
  t('Clase de prestador');
  t('Código del sistema');
  t('El Prestador está dando la atención en operación y mantenimiento al sistema de Agua');
  t('El prestador, ¿rinde cuentas?');
  t('El prestador, ¿tiene cuenta bancaria?');
  t('Entidad local mayor');
  t('Entidad local menor');
  t('Entidad regional');
  t('Estado legal');
  t('Facturación (promedio mensual de los últimos 12 meses, en la moneda especificada en la C2) ');
  t('Fecha de creación');
  t('Fecha de última elección de los miembros de Junta');
  t('Gasto promedio mensual real en mantenimiento');
  t('Gasto promedio mensual real en operación');
  t('Gasto promedio mensual real en servicios ambientales');
  t('Gasto promedio mensual teórico en administración');
  t('Gasto promedio mensual teórico en mantenimiento');
  t('Gasto promedio mensual teórico en operación');
  t('Gasto promedio mensual teórico en servicios ambientales');
  t('Género');
  t('Ingresos reales por facturación');
  t('Latitud');
  t('Longitud');
  t('Monitoreo de la higiene comunitaria: ¿El prestador promueve saneamiento ambiental?');
  t('Monto previsto para el año en curso');
  t('Monto total de egresos en el último año');
  t('Monto total de ingresos en el último año');
  t('Monto total del último año finalizado');
  t('Nombre');
  t('Nombre de entidad que apoya');
  t('Nombre del prestador');
  t('Número de reuniones de la junta directiva en los últimos 6 meses');
  t('Número de usuarios al día en sus pagos ordinarios');
  t('Número de usuarios que deberían pagar factura');
  t('Otra clase de prestador');
  t('Otras divisiones');
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
  t('Revisión y/o sustitución periódica de los componentes pertenecientes a la toma de agua del sistema (antes de rotura o daño)');
  t('Suma de gastos reales ');
  t('Suma de gastos teóricos');
  t('Sustitución de componentes pertenecientes a la toma de agua del sistema (una vez dañados)');
  t('Tarifa media mensual');
  t('Tasa anual de expansión promedio');
  t('Teléfono');
  t('Tiene definido un tipo de tarifa?');
  t('Tipo de tarifa');
  t('Técnicos');
  t('Vigilancia de la zona cercana a la fuente o toma de agua del sistema');
  t('¿Cuenta con fondos disponibles?');
  t('¿Cuentan con personal técnico, operador o fontanero para la operación y mantenimiento?');
  t('¿De qué forma es mantenido el sistema?');
  t('¿El prestador de servicio cuenta con recursos (material de construcción, herramientas, equipo) para el desarrollo de sus activ.');
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
