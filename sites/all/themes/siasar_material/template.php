<?php

/**
 * Implements hook_html_head_alter().
 */
function siasar_material_html_head_alter(&$head_elements) {

}

/**
 * Implements hook_css_alter().
 */
function siasar_material_css_alter(&$css) {
  $css['sites/all/themes/siasar_material/css/style.css']['group'] = 200;
}

/**
 * Implements hook_preprocess_html().
 */
function siasar_material_preprocess_html(&$vars) {
  _siasar_material_add_meta_viewport();
  _siasar_material_add_status_classes_to_body($vars);
}
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
function _siasar_material_add_status_classes_to_body(&$vars) {
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
 * Helper function to remove certain classes from BODY tag
 */
function _siasar_material_filter_body_classes($value) {
  if (strpos($value, 'page') === false) {
    return true;
  }
  return false;
}
