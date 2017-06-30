<?php

/**
 * Add field status class to field_status field container tag
 */
function _siasar_material_add_state_class_to_workflow_field(&$variables) {
  if($variables['element']['#field_name'] !== 'field_status') return;

  $sid = $variables['element']['#items'][0]['value'];
  $current_status = workflow_state_load_single($sid);
  $variables['classes_array'][] = 'field-status-' . $current_status->name;
  $variables['items'][0]['#markup'] = t($variables['items'][0]['#markup']);
}
