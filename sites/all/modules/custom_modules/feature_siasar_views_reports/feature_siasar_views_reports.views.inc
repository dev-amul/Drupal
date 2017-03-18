<?php

/**
 * Implements hook_views_query_alter.
 * Alters entityform_results_view to filter out results depending on user permissions.
 * Curently, it filters out results by country.
 */
function feature_siasar_views_reports_views_query_alter(&$view, &$query) {
  global $user;
  if (!in_array('entityform_results_view', $query->options['query_tags'])) return;

  // TODO: Maybe check a permission instead of a role?
  if (!in_array('administrator', $user->roles)) {
    $user_country_iso2 = _feature_siasar_views_reports_get_user_country();
    $query->add_where(0, 'users_entityform__field_data_field_pais.field_pais_iso2', $user_country_iso2, 'LIKE');
  }
}
