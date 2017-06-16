<?php

/**
 * @file
 * Definition of siasar_field_location_handler_filter_field_entidad_local.
 */

/**
 * Filter by term id (including selection by simple hierarchical select).
 *
 * @ingroup views_filter_handlers
 */
class siasar_field_location_handler_filter_field_entidad_local extends views_handler_filter_term_node_tid {

  function value_validate($form, &$form_state) {
    // We only validate if they've chosen the text field style.
    if ($this->options['type'] != 'textfield') {
      return;
    }

    $values = drupal_explode_tags($form_state['values']['options']['value']);

    if ($values) {
      $form_state['values']['options']['value'] = $values;
    }
  }

  function exposed_validate(&$form, &$form_state) {
    if (empty($this->options['exposed'])) {
      return;
    }

    $identifier = $this->options['expose']['identifier'];

    // We only validate if they've chosen the text field style.
    if ($this->options['type'] != 'textfield') {
      if ($form_state['values'][$identifier] != 'All')  {
        $this->validated_exposed_input = (array) $form_state['values'][$identifier];
      }
      return;
    }

    if (empty($this->options['expose']['identifier'])) {
      return;
    }

    $vid = taxonomy_vocabulary_machine_name_load($this->options['vocabulary'])->vid;
    $values = drupal_explode_tags($form_state['values'][$identifier]);

    foreach($values as $v) {
      if (is_numeric($v)) {
        $tids[] = (int) $v;
        $tids = $this->_attach_children($tids, $v, $vid);
      }
    }

    if (isset($tids)) {
      $this->validated_exposed_input = $tids;
    }
  }

  function _attach_children($tids, $v, $vid) {
    $children = array_keys(taxonomy_get_children($v, $vid));

    if (!empty($children)) {
      $tids = array_merge($tids, $children);
      foreach ($children as $child) {
        $tids = $this->_attach_children($tids, $child, $vid);
      }
    }
    return $tids;
  }

}
