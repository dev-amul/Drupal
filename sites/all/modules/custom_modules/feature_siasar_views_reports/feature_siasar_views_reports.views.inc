<?php

/**
 * Implements hook_views_query_alter.
 * Alters entityform_results_view to filter out results depending on user permissions.
 * Curently, it filters out results by country.
 */
function feature_siasar_views_reports_views_query_alter(&$view, &$query) {
  global $user;
  if (empty($query->options['query_tags']) || !in_array('entityform_results_view', $query->options['query_tags'])) return;

  // @todo this is not needed anymore, the filtering is done through the exposed form
  // @nachenko could you double check this?

  if (!user_access('assign territorial division')) {
    $user_country_iso2 = _feature_siasar_views_reports_get_user_country();
    $query->add_where(0, 'users_entityform__field_data_field_pais.field_pais_iso2', $user_country_iso2, 'LIKE');
  }
}
