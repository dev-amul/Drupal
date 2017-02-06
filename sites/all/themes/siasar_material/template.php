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
  $viewport = array(
   '#tag' => 'meta',
   '#attributes' => array(
     'name' => 'viewport',
     'content' => 'width=device-width, initial-scale=1, maximum-scale=1',
   ),
  );
  drupal_add_html_head($viewport, 'viewport');
}
