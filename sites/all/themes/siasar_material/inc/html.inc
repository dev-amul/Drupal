<?php


/**
 * Helper function to add Meta Viewport
 */
function _siasar_material_add_meta_viewport() {
  $viewport = array(
   '#tag' => 'meta',
   '#attributes' => array(
     'name' => 'viewport',
     'content' => 'width=device-width, initial-scale=1, maximum-scale=1',
   ),
  );
  drupal_add_html_head($viewport, 'viewport');
}

/**
 * Helper function to add 403 and 404 body classes
 */
function _siasar_material_add_http_status_classes_to_body(&$vars) {
  $status = drupal_get_http_header("status");

  if($status === '403 Forbidden' || $status === '404 Not Found') {
    $vars['classes_array'] = array_filter($vars['classes_array'], '_siasar_material_filter_body_classes');
  }

  switch ($status) {
    case '403 Forbidden':
      $vars['classes_array'][] = 'forbidden-403';
      break;
    case '404 Not Found':
      $vars['classes_array'][] = 'not-found-404';
      break;
  }
}

/**
 * Helper function to add class to body when vieweing an entityform
 */
function _siasar_material_add_class_to_entityform_view(&$vars) {
  if (arg(0) == 'entityform' && is_numeric(arg(1)) && empty(arg(2))) {
    $vars['classes_array'][] = 'page-entityform-view';
  }
}

/**
 * Helper function to add workflow status class to body when editing an entityform
 */
function _siasar_material_add_workflow_status_class_to_entityform_edit(&$vars) {
  $allowed_pages = array('edit', 'workflow');
  if (arg(0) == 'entityform' && is_numeric(arg(1)) && in_array(arg(2), $allowed_pages)) {

    $entityform = entityform_load(arg(1));
    if (empty($entityform->field_status)) return;

    $status = workflow_state_load_single($entityform->field_status[LANGUAGE_NONE][0]['value']);
    $vars['classes_array'][] = 'workflow-status-' . $status->name;

  }
}

/**
 * Helper function to remove certain classes from BODY tag
 */
function _siasar_material_filter_body_classes($value) {
  if (strpos($value, 'page') === false) {
    return true;
  }
  return false;
}
