<?php

/**
 * @file
 * Definition of siasar_entityform_computable_handler.
 */

/**
 * Show if the item is computable or not
 */
class siasar_entityform_computable_handler extends views_handler_field {

  /**
   * Renders the field handler.
   */
  function render($values) {
    $output = t('No');
    if (isset($values->entityform_computable_states_computable) && $values->entityform_computable_states_computable == 1) {
      $output = t('Yes');
    }
    return $output;
  }
}