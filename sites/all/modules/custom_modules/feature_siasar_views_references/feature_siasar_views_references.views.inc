<?php


/**
 * Implements hook_views_plugins().
 */
function feature_siasar_views_references_views_plugins() {

  $plugins = array(
    'argument default' => array(
      'siasar_user_country' => array(
        'title' => t('SIASAR User\'s country'),
        'handler' => 'views_plugin_argument_feature_siasar_views_references_users_country',
      ),
      'siasar_user_location' => array(
        'title' => t('SIASAR User\'s location'),
        'handler' => 'views_plugin_argument_feature_siasar_views_references_users_location',
      ),
    ),
  );

  return $plugins;
}


/**
 * Implements hook_query_alter(&$query)
 */
function feature_siasar_views_references_views_query_alter(&$view, &$query) {
 // if(!$query->hasTag('entityform_reference')) return;
 //$conditions = $query->conditions();
  $query = $query;
}
