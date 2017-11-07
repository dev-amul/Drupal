<?php
/**
 * @file
 * feature_siasar_entityform_water_quality.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_siasar_entityform_water_quality_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'entityform-waq-field_alkalinity'.
  $field_instances['entityform-waq-field_alkalinity'] = array(
    'bundle' => 'waq',
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
        'weight' => 15,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_alkalinity',
    'label' => 'Alkalinity',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 14,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_altitude'.
  $field_instances['entityform-waq-field_altitude'] = array(
    'bundle' => 'waq',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_altitude',
    'label' => 'Altitude',
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
      'weight' => 41,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_arsenic'.
  $field_instances['entityform-waq-field_arsenic'] = array(
    'bundle' => 'waq',
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
    'field_name' => 'field_arsenic',
    'label' => 'Arsenic',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 30,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_bicarbonates'.
  $field_instances['entityform-waq-field_bicarbonates'] = array(
    'bundle' => 'waq',
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
    'field_name' => 'field_bicarbonates',
    'label' => 'Bicarbonates',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 15,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_calcium'.
  $field_instances['entityform-waq-field_calcium'] = array(
    'bundle' => 'waq',
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
        'weight' => 18,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_calcium',
    'label' => 'Calcium',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 18,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_carbonates'.
  $field_instances['entityform-waq-field_carbonates'] = array(
    'bundle' => 'waq',
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
        'weight' => 16,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_carbonates',
    'label' => 'Carbonates',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 16,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_chlorides'.
  $field_instances['entityform-waq-field_chlorides'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_chlorides',
    'label' => 'Chlorides',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 19,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_color'.
  $field_instances['entityform-waq-field_color'] = array(
    'bundle' => 'waq',
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
        'weight' => 14,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_color',
    'label' => 'Color',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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

  // Exported field_instance: 'entityform-waq-field_conductivity'.
  $field_instances['entityform-waq-field_conductivity'] = array(
    'bundle' => 'waq',
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
        'weight' => 12,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_conductivity',
    'label' => 'Conductivity',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 689,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 689,
            'enable' => 1,
            'es' => 689,
            'es-BO' => 689,
            'es-CO' => 689,
            'es-HN' => 689,
            'es-PY' => 689,
            'gn-PY' => 689,
            'pt-br' => 689,
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

  // Exported field_instance: 'entityform-waq-field_data_source'.
  $field_instances['entityform-waq-field_data_source'] = array(
    'bundle' => 'waq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 37,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_entidad_local'.
  $field_instances['entityform-waq-field_entidad_local'] = array(
    'bundle' => 'waq',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_entidad_local',
    'label' => 'Location',
    'options_limit' => 0,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(
      'field_pais' => 0,
    ),
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
      'weight' => 39,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_fecal_coliforms'.
  $field_instances['entityform-waq-field_fecal_coliforms'] = array(
    'bundle' => 'waq',
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
        'weight' => 32,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fecal_coliforms',
    'label' => 'Fecal Coliforms',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 693,
            'enable' => 1,
            'es' => 693,
            'es-BO' => 693,
            'es-CO' => 693,
            'es-HN' => 693,
            'es-PY' => 693,
            'gn-PY' => 693,
            'pt-br' => 693,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_fluorine'.
  $field_instances['entityform-waq-field_fluorine'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_fluorine',
    'label' => 'Fluorine',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 25,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_geolocation'.
  $field_instances['entityform-waq-field_geolocation'] = array(
    'bundle' => 'waq',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_geolocation',
    'label' => 'Geolocation',
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
      'weight' => 40,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_hardness'.
  $field_instances['entityform-waq-field_hardness'] = array(
    'bundle' => 'waq',
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
        'weight' => 17,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_hardness',
    'label' => 'Hardness',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 17,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_iron'.
  $field_instances['entityform-waq-field_iron'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_iron',
    'label' => 'Iron',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 20,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_lead'.
  $field_instances['entityform-waq-field_lead'] = array(
    'bundle' => 'waq',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_lead',
    'label' => 'Lead',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 29,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_manganese'.
  $field_instances['entityform-waq-field_manganese'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_manganese',
    'label' => 'Manganese',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 21,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_nitrates'.
  $field_instances['entityform-waq-field_nitrates'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_nitrates',
    'label' => 'Nitrates',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 0,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 23,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_nitrites'.
  $field_instances['entityform-waq-field_nitrites'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_nitrites',
    'label' => 'Nitrites',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 24,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_observations'.
  $field_instances['entityform-waq-field_observations'] = array(
    'bundle' => 'waq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 34,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_observations',
    'label' => 'Observations',
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
      'weight' => 34,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_organochlorine_pesticides'.
  $field_instances['entityform-waq-field_organochlorine_pesticides'] = array(
    'bundle' => 'waq',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_organochlorine_pesticides',
    'label' => 'Organochlorine Pesticides',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 694,
            'enable' => 1,
            'es' => 694,
            'es-BO' => 694,
            'es-CO' => 694,
            'es-HN' => 694,
            'es-PY' => 694,
            'gn-PY' => 694,
            'pt-br' => 694,
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_pais'.
  $field_instances['entityform-waq-field_pais'] = array(
    'bundle' => 'waq',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_pais',
    'label' => 'Country',
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
      'weight' => 36,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_ph'.
  $field_instances['entityform-waq-field_ph'] = array(
    'bundle' => 'waq',
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
        'weight' => 10,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_ph',
    'label' => 'pH',
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
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_potassium'.
  $field_instances['entityform-waq-field_potassium'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_potassium',
    'label' => 'Potassium',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 28,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_residual_chlorine'.
  $field_instances['entityform-waq-field_residual_chlorine'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_residual_chlorine',
    'label' => 'Residual Chlorine',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 26,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_sodium'.
  $field_instances['entityform-waq-field_sodium'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sodium',
    'label' => 'Sodium',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 27,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_status'.
  $field_instances['entityform-waq-field_status'] = array(
    'bundle' => 'waq',
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
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_sulfate'.
  $field_instances['entityform-waq-field_sulfate'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_sulfate',
    'label' => 'Sulfate',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 695,
            'enable' => 1,
            'es' => 695,
            'es-BO' => 695,
            'es-CO' => 695,
            'es-HN' => 695,
            'es-PY' => 695,
            'gn-PY' => 695,
            'pt-br' => 695,
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
      'weight' => 22,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_survey_date'.
  $field_instances['entityform-waq-field_survey_date'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_survey_date',
    'label' => 'Survey Date',
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
        'input_format' => 'd/m/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'no_fieldset' => 0,
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 37,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_temperature'.
  $field_instances['entityform-waq-field_temperature'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_temperature',
    'label' => 'Temperature',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 690,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 690,
            'enable' => 1,
            'es' => 690,
            'es-BO' => 690,
            'es-CO' => 690,
            'es-HN' => 690,
            'es-PY' => 690,
            'gn-PY' => 690,
            'pt-br' => 690,
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

  // Exported field_instance: 'entityform-waq-field_total_coliforms'.
  $field_instances['entityform-waq-field_total_coliforms'] = array(
    'bundle' => 'waq',
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
        'weight' => 33,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_total_coliforms',
    'label' => 'Total Coliforms',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 695,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 693,
            'enable' => 1,
            'es' => 693,
            'es-BO' => 693,
            'es-CO' => 693,
            'es-HN' => 693,
            'es-PY' => 693,
            'gn-PY' => 693,
            'pt-br' => 693,
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
      'weight' => 33,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_turbidity'.
  $field_instances['entityform-waq-field_turbidity'] = array(
    'bundle' => 'waq',
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
        'weight' => 13,
      ),
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_turbidity',
    'label' => 'Turbidity',
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
          'value' => '',
        ),
        'unit_suggesters_settings' => array(
          'hardcoded' => array(
            'enable' => 0,
            'unit' => 691,
            'weight' => 0,
          ),
          'locale' => array(
            'en' => 691,
            'enable' => 1,
            'es' => 691,
            'es-BO' => 691,
            'es-CO' => 691,
            'es-HN' => 691,
            'es-PY' => 691,
            'gn-PY' => 691,
            'pt-br' => 691,
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

  // Exported field_instance: 'entityform-waq-field_user_reference'.
  $field_instances['entityform-waq-field_user_reference'] = array(
    'bundle' => 'waq',
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
    'field_name' => 'field_user_reference',
    'label' => 'Interviewer',
    'options_limit' => 0,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(
      'field_pais' => 0,
    ),
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

  // Exported field_instance: 'entityform-waq-field_water_source_code'.
  $field_instances['entityform-waq-field_water_source_code'] = array(
    'bundle' => 'waq',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_water_source_code',
    'label' => 'Water Source Code',
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
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_water_source_name'.
  $field_instances['entityform-waq-field_water_source_name'] = array(
    'bundle' => 'waq',
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
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_water_source_name',
    'label' => 'Water Source Name',
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
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'entityform-waq-field_water_source_type'.
  $field_instances['entityform-waq-field_water_source_type'] = array(
    'bundle' => 'waq',
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
      'entity_reference' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'entityform',
    'field_name' => 'field_water_source_type',
    'label' => 'Water Source Type',
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
      'weight' => 44,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Alkalinity');
  t('Altitude');
  t('Arsenic');
  t('Bicarbonates');
  t('Calcium');
  t('Carbonates');
  t('Chlorides');
  t('Color');
  t('Conductivity');
  t('Country');
  t('Fecal Coliforms');
  t('Fluorine');
  t('Geolocation');
  t('Hardness');
  t('Interviewer');
  t('Iron');
  t('Lead');
  t('Location');
  t('Manganese');
  t('Nitrates');
  t('Nitrites');
  t('Observations');
  t('Organochlorine Pesticides');
  t('Origen de los datos');
  t('Potassium');
  t('Residual Chlorine');
  t('Sodium');
  t('Status');
  t('Sulfate');
  t('Survey Date');
  t('Temperature');
  t('Total Coliforms');
  t('Turbidity');
  t('Water Source Code');
  t('Water Source Name');
  t('Water Source Type');
  t('pH');

  return $field_instances;
}
