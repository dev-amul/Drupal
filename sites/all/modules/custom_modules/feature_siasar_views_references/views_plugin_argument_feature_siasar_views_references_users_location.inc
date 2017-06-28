<?php

/**
 * Default argument plugin to provide the user's favorite
 * category as default.
 */
class views_plugin_argument_feature_siasar_views_references_users_location extends views_plugin_argument_default {

  function init(&$view, &$argument, $options) {
    $this->view = &$view;
    $this->argument = &$argument;
    $this->argument->operator = 'in';

    $this->convert_options($options);
    $this->unpack_options($this->options, $options);
  }

  function get_argument() {
    global $user;

    $wrapper = entity_metadata_wrapper('user', $user);

    if (isset($wrapper->field_entidad_local)) {
      $user_location = (int) $wrapper->field_entidad_local->value()->tid;

      return array(534633, 534634);
      return $user_location;

   //   $children = taxonomy_get_children($user_location, $wrapper->field_entidad_local->value()->vid);
   //   $children = array_keys($children);
    } else {
      return 0;
    }
  }
}
