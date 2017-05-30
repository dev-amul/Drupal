<?php

require_once dirname(__FILE__) . '/inc/page.inc';
require_once dirname(__FILE__) . '/inc/menu.inc';
require_once dirname(__FILE__) . '/inc/form.inc';

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
  _siasar_material_add_class_to_entityform_view($vars);
}

/**
 * Implements hook_preprocess_page().
 */
function siasar_material_preprocess_page(&$vars) {
  _siasar_material_process_password_request_page($vars);
  _siasar_material_process_tabs($vars);
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
 * Helper function to add class to body when vieweing an entityform
 */
function _siasar_material_add_class_to_entityform_view(&$vars) {
  if (arg(0) == 'entityform' && is_numeric(arg(1)) && empty(arg(2))) {
    $vars['classes_array'][] = 'page-entityform-view';
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


function siasar_material_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  $items_tag = ($variables['element']['#field_type'] === 'field_collection')
    ? 'ol'
    : 'div';

  // Render the items.
  $output .= '<' . $items_tag . ' class="field-items"' . $variables['content_attributes'] . '>';

  if (count($variables['items']) > 1) {
    foreach ($variables['items'] as $delta => $item) {
      $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
      $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
    }
  } else {
    $output .= drupal_render($variables['items'][0]);
  }
  $output .= '</' . $items_tag . '>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}


/**
 * Clean up Password form
 */
function siasar_material_form_user_pass_alter(&$form, &$form_state, &$form_id) {
  $class_list = &$form['#attributes']['class'];
  $pos = array_search('card-panel', $class_list);

  if ($pos !== false) {
    unset($class_list[$pos]);
  }
}

/**
 * Implementation of hook_preprocess_entity()
 */
function siasar_material_preprocess_entity(&$variables) {
  $els = $variables['elements'];
  if ($els['#entity_type'] !== 'entityform' || $els['#view_mode'] !== 'entity_reference') return;

  $suggestions = &$variables['theme_hook_suggestions'];
  $ours = "entityform__entityreference";

  array_splice($suggestions, 1, 0, $ours);
}
