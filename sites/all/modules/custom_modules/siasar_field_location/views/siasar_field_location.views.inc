<?php

/**
 * Implements hook_views_data_alter().
 */
function siasar_field_location_views_data_alter(&$data) {
  $data['field_data_field_entidad_local']['field_entidad_local_siasar_hierarchical_select'] = array(
    'title' => t('Location. SIASAR Hierarchical Select'),
    'group' => 'Entityform Submission',
    'help' => t('Location field, using SIASAR Hierarchical Select as exposed filter widget'),
    'real field' => 'field_entidad_local_tid',
    'filter' => array(
      'handler' => 'siasar_field_location_handler_filter_field_entidad_local',
    ),
  );
}
