<?php
/**
 * @file
 * feature_siasar_user.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_siasar_user_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_entidad_local'.
  $field_instances['user-user-field_entidad_local'] = array(
    'bundle' => 'user',
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
    'entity_type' => 'user',
    'field_name' => 'field_entidad_local',
    'label' => 'Administrative division',
    'options_limit' => 0,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(
      'field_pais' => 0,
    ),
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
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
          'country_field_name' => 'field_pais',
          'force_deepest' => 0,
        ),
      ),
      'type' => 'siasar_hierarchical_select',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'user-user-field_identificacion'.
  $field_instances['user-user-field_identificacion'] = array(
    'bundle' => 'user',
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
    'entity_type' => 'user',
    'field_name' => 'field_identificacion',
    'label' => 'ID number',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
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

  // Exported field_instance: 'user-user-field_institucion'.
  $field_instances['user-user-field_institucion'] = array(
    'bundle' => 'user',
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
    'entity_type' => 'user',
    'field_name' => 'field_institucion',
    'label' => 'Institution',
    'options_limit' => 1,
    'options_limit_empty_behaviour' => 0,
    'options_limit_fields' => array(
      'field_pais' => 'field_pais',
    ),
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
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

  // Exported field_instance: 'user-user-field_nombre_completo'.
  $field_instances['user-user-field_nombre_completo'] = array(
    'bundle' => 'user',
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
    'entity_type' => 'user',
    'field_name' => 'field_nombre_completo',
    'label' => 'Full name',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
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

  // Exported field_instance: 'user-user-field_pais'.
  $field_instances['user-user-field_pais'] = array(
    'bundle' => 'user',
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
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pais',
    'label' => 'Country',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'user-user-field_telefono'.
  $field_instances['user-user-field_telefono'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Por favor, incluir el código de área de su país.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_plain',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_telefono',
    'label' => 'Phone',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'telephone',
      'settings' => array(
        'placeholder' => '',
      ),
      'type' => 'telephone_default',
      'weight' => 5,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Administrative division');
  t('Country');
  t('Full name');
  t('ID number');
  t('Institution');
  t('Phone');
  t('Por favor, incluir el código de área de su país.');

  return $field_instances;
}
