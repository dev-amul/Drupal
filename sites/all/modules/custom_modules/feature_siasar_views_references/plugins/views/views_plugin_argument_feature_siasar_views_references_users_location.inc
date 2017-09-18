<?php

/**
 * Default argument plugin to provide the user's favorite
 * category as default.
 */
class views_plugin_argument_feature_siasar_views_references_users_location extends views_plugin_argument_default {

  function get_argument() {
    global $user;

    $wrapper = entity_metadata_wrapper('user', $user);

    /**
     * @var $argument \views_handler_argument_taxonomy
     */
    $argument = $this->argument;

    // We need to use the IN operation which is applied
    $argument->options['break_phrase'] = '+';
    $argument->options['validate']['fail'] = 'ignore';

    if (isset($wrapper->field_entidad_local)) {
      $user_location = $wrapper->field_entidad_local->value();

      if ($user_location) {

        $tree = taxonomy_get_tree($user_location->vid, $user_location->tid);

        $terms = array_map(function($term) {
          return $term->tid;
        }, $tree);

        $terms[] = $user_location->tid;

        $children = implode('+', $terms);
        return $children;
      }
    }

    return;
  }

}
