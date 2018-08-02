<?php

// Helper functions for "drush_siasar_load_n11" function

/**
 * Check and display errors in command line parameters set for execution.
 *
 * @param string $country_code
 * @param string $vocab_machine_name
 * @param string $file_uri
 * @return bool
 */
function siasar_updates_load_n11_error_check($country_code, $vocab_machine_name, $file_uri) {
  $country = country_load(strtoupper($country_code));
  $vocab = taxonomy_vocabulary_machine_name_load($vocab_machine_name);
  $error = false;

  if (!$country) {
    drupal_set_message('Country code: [' . $country_code . '] does not exist.', 'error');
    $error = true;
  }

  if (!$vocab) {
    drupal_set_message('Vocabulary with machine name: [' . $vocab_machine_name . '] does not exist.', 'error');
    $error = true;
  }

  if (!file_exists($file_uri)) {
    drupal_set_message('File: ' . $file_uri . ' does not exist.', 'error');
    $error = true;
  }

  return $error;
}
