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
  _siasar_material_add_class_to_entityform_view($vars);
}

/**
 * Implements hook_preprocess_page().
 */
function siasar_material_preprocess_page(&$vars) {
  siasar_material_process_tabs($vars);
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


/**
 * Implements theme_menu_tree().
 */
function siasar_material_menu_tree(&$variables) {
  if ($variables['theme_hook_original'] == 'menu_tree__menu_front_page_menu') return $variables['tree'];

  return '<div class="collection with-header">' . $variables['tree'] . '</div>';
}

/**
 * Materialize theme wrapper function for the secondary menu links.
 */
function siasar_material_menu_tree__menu_front_page_menu(&$variables) {
  return '<ul class="menu">' . $variables['tree'] . '</ul>';
}

/**
 * Materialize theme wrapper function for the submenu links.
 */
function siasar_material_menu_tree__submenu(&$variables) {
    return $variables['tree'];
}

/**
 * Overrides theme_menu_link().
 */
function siasar_material_menu_link(array $variables) {
  $element = $variables['element'];
  $sub_menu = '';
  $element['#localized_options']['attributes']['class'][] = 'collection-item';
  if ($element['#below']) {
    $element['#below']['#theme_wrappers'] = array('menu_tree__submenu');
    // Prevent dropdown functions from being added to management menu so it
    // does not affect the navbar module.
    if (($element['#original_link']['menu_name'] == 'management') && (module_exists('navbar'))) {
      $sub_menu = drupal_render($element['#below']);
    } elseif ($element['#original_link']['menu_name'] == 'menu-front-page-menu') {
      //$element['#below']['#theme_wrappers'][] = 'menu_front_page_menu';
      $sub_menu = '<ul>' . drupal_render($element['#below']) . '</ul>';
    } elseif ((!empty($element['#original_link']['depth'])) && ($element['#original_link']['depth'] == 1)) {
      // Add our own wrapper.
      unset($element['#below']['#theme_wrappers']);
      $sub_menu = '<ul class="dropdown-content" id="dropdown-menu">' . drupal_render($element['#below']) . '</ul>';
      // Generate as standard dropdown.
      $element['#title'] .= ' <i class="mdi-navigation-arrow-drop-down right"></i>';
      $element['#attributes']['class'][] = 'dropdown';
      $element['#localized_options']['html'] = TRUE;

      // Set dropdown trigger element to # to prevent inadvertent page loading
      // when a submenu link is clicked.
      $element['#localized_options']['attributes']['data-target'] = '#';
      $element['#localized_options']['attributes']['class'][] = 'dropdown-button';
      $element['#localized_options']['attributes']['data-activates'] = 'dropdown-menu';
    }
  }
  // On primary navigation menu, class 'active' is not set on active menu item.
  // @see https://drupal.org/node/1896674
  if (($element['#href'] == $_GET['q'] || ($element['#href'] == '<front>' && drupal_is_front_page())) && (empty($element['#localized_options']['language']))) {
    $element['#attributes']['class'][] = 'active';
  }
  $output = l($element['#title'], $element['#href'], $element['#localized_options']);
  return '<li' . drupal_attributes($element['#attributes']) . '>' . $output . $sub_menu . "</li>\n";
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

/*
* this function processes your $tabs and should be called from preprocess_page in your template.php
*/
function siasar_material_process_tabs(&$vars) {
  $types = array('#primary', '#secondary');
  foreach ($types as $type) {
    if (is_array($vars['tabs'][$type])) {
      foreach ($vars['tabs'][$type] as $key => $tab) {
        $vars['tabs'][$type][$key]['#link']['localized_options']['attributes']['target'] = '_self';
      }
    }
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
