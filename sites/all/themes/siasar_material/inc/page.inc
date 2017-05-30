<?php

/**
 * Helper function to process page on Password request page
 */
function _siasar_material_process_password_request_page(&$vars) {
  if (current_path() != 'user/password') return;

  unset($vars['tabs']);
  drupal_set_title(t('Request new password'));
}

/*
* this function processes your $tabs and should be called from preprocess_page in your template.php
*/
function _siasar_material_process_tabs(&$vars) {
  $types = array('#primary', '#secondary');
  foreach ($types as $type) {
    if (is_array($vars['tabs'][$type])) {
      foreach ($vars['tabs'][$type] as $key => $tab) {
        $vars['tabs'][$type][$key]['#link']['localized_options']['attributes']['target'] = '_self';
      }
    }
  }
}
