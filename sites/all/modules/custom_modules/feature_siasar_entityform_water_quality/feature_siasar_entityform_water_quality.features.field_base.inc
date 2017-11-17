<?php
/**
 * @file
 * feature_siasar_entityform_water_quality.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function feature_siasar_entityform_water_quality_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_alkalinity'.
  $field_bases['field_alkalinity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_alkalinity',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_altitude'.
  $field_bases['field_altitude'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_altitude',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_arsenic'.
  $field_bases['field_arsenic'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_arsenic',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_bacteriological_total'.
  $field_bases['field_bacteriological_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bacteriological_total',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_bicarbonates'.
  $field_bases['field_bicarbonates'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bicarbonates',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_calcium'.
  $field_bases['field_calcium'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_calcium',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_carbonates'.
  $field_bases['field_carbonates'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_carbonates',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_chemical_total'.
  $field_bases['field_chemical_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_chemical_total',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_chlorides'.
  $field_bases['field_chlorides'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_chlorides',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_color'.
  $field_bases['field_color'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_color',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'color' => 'color',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_conductivity'.
  $field_bases['field_conductivity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_conductivity',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'electrical_conductivity' => 'electrical_conductivity',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_fecal_coliforms'.
  $field_bases['field_fecal_coliforms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fecal_coliforms',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_fluorine'.
  $field_bases['field_fluorine'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_fluorine',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_geolocation'.
  $field_bases['field_geolocation'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_geolocation',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'bbox' => array(
        0 => 'top',
        1 => 'bottom',
        2 => 'left',
        3 => 'right',
      ),
      'bottom' => array(
        0 => 'bottom',
      ),
      'centroid' => array(
        0 => 'lat',
        1 => 'lon',
      ),
      'geohash' => array(
        0 => 'geohash',
      ),
      'lat' => array(
        0 => 'lat',
      ),
      'left' => array(
        0 => 'left',
      ),
      'lon' => array(
        0 => 'lon',
      ),
      'right' => array(
        0 => 'right',
      ),
      'top' => array(
        0 => 'top',
      ),
    ),
    'locked' => 0,
    'module' => 'geofield',
    'settings' => array(
      'backend' => 'default',
      'entity_translation_sync' => FALSE,
      'srid' => 4326,
    ),
    'translatable' => 0,
    'type' => 'geofield',
  );

  // Exported field_base: 'field_hardness'.
  $field_bases['field_hardness'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_hardness',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_iron'.
  $field_bases['field_iron'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_iron',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_lead'.
  $field_bases['field_lead'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_lead',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_manganese'.
  $field_bases['field_manganese'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_manganese',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_nitrates'.
  $field_bases['field_nitrates'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nitrates',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_nitrites'.
  $field_bases['field_nitrites'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_nitrites',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_observations'.
  $field_bases['field_observations'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_observations',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_organochlorine_pesticides'.
  $field_bases['field_organochlorine_pesticides'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organochlorine_pesticides',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_organochlorine_total'.
  $field_bases['field_organochlorine_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organochlorine_total',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_ph'.
  $field_bases['field_ph'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_ph',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'decimal_separator' => '.',
      'entity_translation_sync' => FALSE,
      'precision' => 10,
      'scale' => 2,
    ),
    'translatable' => 0,
    'type' => 'number_decimal',
  );

  // Exported field_base: 'field_physical_total'.
  $field_bases['field_physical_total'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_physical_total',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'number',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'number_integer',
  );

  // Exported field_base: 'field_potassium'.
  $field_bases['field_potassium'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_potassium',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_residual_chlorine'.
  $field_bases['field_residual_chlorine'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_residual_chlorine',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_sodium'.
  $field_bases['field_sodium'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sodium',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_sulfate'.
  $field_bases['field_sulfate'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_sulfate',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_survey_date'.
  $field_bases['field_survey_date'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_survey_date',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'date',
    'settings' => array(
      'cache_count' => 4,
      'cache_enabled' => 0,
      'entity_translation_sync' => FALSE,
      'granularity' => array(
        'day' => 'day',
        'hour' => 0,
        'minute' => 0,
        'month' => 'month',
        'second' => 0,
        'year' => 'year',
      ),
      'timezone_db' => '',
      'todate' => '',
      'tz_handling' => 'none',
    ),
    'translatable' => 0,
    'type' => 'datetime',
  );

  // Exported field_base: 'field_temperature'.
  $field_bases['field_temperature'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_temperature',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'temperature' => 'temperature',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_total_coliforms'.
  $field_bases['field_total_coliforms'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_total_coliforms',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'concentracion' => 'concentracion',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  // Exported field_base: 'field_turbidity'.
  $field_bases['field_turbidity'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_turbidity',
    'field_permissions' => array(
      'type' => 0,
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'mvf',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'meta_info' => array(
        'unit' => array(
          'field_type' => 'entityreference',
          'formatter' => 'entityreference_label',
          'label' => 'Unit Measure',
          'module' => 'entityreference',
          'not_supported_widgets' => array(
            0 => 'entityreference_autocomplete',
            1 => 'entityreference_autocomplete_tags',
          ),
          'widget' => 'options_select',
        ),
        'value' => array(
          'field_type' => 'number_decimal',
          'formatter' => 'number_decimal',
          'label' => 'Value',
          'module' => 'number',
          'not_supported_widgets' => array(),
          'widget' => 'elements_numberfield',
        ),
      ),
      'unit' => array(
        'handler' => 'base',
        'handler_settings' => array(
          'behaviors' => array(
            'views-select-list' => array(
              'status' => 0,
            ),
          ),
          'sort' => array(
            'type' => 'none',
          ),
          'target_bundles' => array(
            'turbidity' => 'turbidity',
          ),
        ),
        'target_type' => 'units_unit',
      ),
      'value' => array(
        'decimal_separator' => '.',
        'precision' => 10,
        'scale' => 2,
      ),
    ),
    'translatable' => 0,
    'type' => 'mvf_number_decimal_entityreference',
  );

  return $field_bases;
}
