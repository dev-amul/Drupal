<?php

/**
 * Default argument plugin to provide the user's country as default.
 */
class views_plugin_argument_feature_siasar_views_references_users_country extends views_plugin_argument_default {

  function get_argument() {
    global $user;

    $wrapper = entity_metadata_wrapper('user', $user);

    $user_country = $wrapper->field_pais->value();
    if (is_object($user_country)) {
      return $user_country->iso2;
    }
  }
}
