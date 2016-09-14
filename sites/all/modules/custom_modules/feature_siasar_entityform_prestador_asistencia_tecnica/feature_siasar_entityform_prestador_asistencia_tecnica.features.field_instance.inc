<?php
/**
 * @file
 * feature_siasar_entityform_prestador_asistencia_tecnica.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_siasar_entityform_prestador_asistencia_tecnica_field_default_field_instances() {
  $field_instances = array();

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

  // Translatables
  // Included for use with string extractors like potx.
  t('1. Verificar y apoyar la conformación, funcionamiento y reorganización de los CAPS');
  t('10. Llevar actualizado un listado de proveedores de servicio (electricistas, fontaneros mayores, laboratorios de calidad de agua) y proveedores de bienes (materiales de construcción y fontanería, productos químicos) para brindar apoyo a los CAPS');
  t('11. Asesorar al prestador (incluyendo fontanero) en temas de AOM');
  t('12. Actualizar y utilizar el SIASAR para propósitos de planificación municipal anual en materia de agua y saneamiento rural ');
  t('13. Otros servicios ofrecidos');
  t('14. Número de comunidades en los que se ofrece otros servicios');
  t('2. Apoyar la obtención de la figura Legal de los CAPS');
  t('3. Revisar y actualizar las finanzas del sistema');
  t('4. Apoyar a establecer y actualizar la tarifa');
  t('5. Apoyar en el establecimiento y legalización de reglamentos operativos');
  t('6. Apoyar a los CAPS en la planificación y desarrollo de asambleas de rendición de cuentas a la comunidad');
  t('7. Apoyar a los CAPS en el análisis y en la solución de conflictos (ej: uso o abuso del agua de los sistemas)');
  t('8. Recolectar muestras para análisis de calidad de agua de los sistemas y asesorar en su toma, medición e interp. de los datos');
  t('9. Asesorar a los CAPS en la medición de niveles estáticos de pozos y caudales de agua superficiales ');
  t('Cantidad de comunidades apoyadas en los últimos 12 meses');
  t('Cantidad de equipos de transporte ');
  t('Cantidad de equipos informáticos (computadora/impresora)');
  t('Cantidad de equipos para la medición de la calidad del agua');
  t('Cantidad de técnicos en la zona');
  t('Clasificación');
  t('Cuenta con presupuesto operativo anual');
  t('Dispone de fondos para combustible');
  t('Dispone de fondos para viáticos');
  t('Dispone de material didáctico impreso para distribución');
  t('Dispone de servicios de internet');
  t('Encuestador');
  t('Estado de los equipos de transporte ');
  t('Estado de los equipos informáticos (computadora/impresora)');
  t('Estado de los equipos para la medición de la calidad del agua');
  t('Fecha de Aplicación');
  t('Fecha en la que se cubre la encuesta');
  t('Imagen');
  t('Monto');
  t('Nombre');
  t('Observaciones y comentarios');
  t('Tipo de PAT');
  t('Total de comunidades en la zona de atención');
  t('Validado');
  t('Zona de Atención');

  return $field_instances;
}
