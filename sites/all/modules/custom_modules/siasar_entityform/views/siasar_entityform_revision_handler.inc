<?php

/**
 * @file
 * Definition of siasar_entityform_computable_handler.
 */

/**
 * Show if the item is computable or not
 */
class siasar_entityform_revision_handler extends views_handler_field {

  /**
   * Renders the field handler.
   */
  function render($values) {
    $output = '<span class="not-computable" title="' . t('Survey not considered by BI') .'"></span>';
    if (!empty($values->entityform_computable_states_entityform_revision)) {
      $output = '<span class="computable" title="' . t('Survey ready for BI') .'"></span>';
    }
    return $output;
  }
}