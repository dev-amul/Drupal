<?php


/**
 * Implements theme_menu_tree().
 */
function siasar_material_menu_tree(&$variables) {
  $theme_hook = $variables['theme_hook_original'];

  switch ($theme_hook) {
    case 'menu_tree__menu_front_page_menu':
      $output = $variables['tree'];
      break;
    case 'menu_tree__user_menu':
      $output = '<ul class="user-menu right">' . $variables['tree'] . '</ul>';
      break;
    default:
      $output = '<div class="collection with-header">' . $variables['tree'] . '</div>';
  }

  return $output;
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

