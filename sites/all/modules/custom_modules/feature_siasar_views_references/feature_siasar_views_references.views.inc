<?php


/**
 * Implements hook_views_plugins().
 */
function feature_siasar_views_references_views_plugins() {
  $plugin_path = drupal_get_path('module', 'feature_siasar_views_references') . '/plugins/views';

  $plugins = array(
    'argument default' => array(
      'siasar_user_country' => array(
        'title' => t('SIASAR User\'s country'),
        'handler' => 'views_plugin_argument_feature_siasar_views_references_users_country',
        'path' => $plugin_path,
      ),
      'siasar_user_location' => array(
        'title' => t('SIASAR User\'s location'),
        'handler' => 'views_plugin_argument_feature_siasar_views_references_users_location',
        'path' => $plugin_path,
      ),
    ),
  );

  return $plugins;
}
