<?php

/**
 * @file
 * Drush interface to i18n_string functionalities.
 */

/**
 * Implements hook_drush_command().
 */
function i18n_string_drush_command() {
  $commands = array();
  $commands['i18n-string-refresh'] = array(
    'description' => 'Refresh strings for selected text groups.',
    'arguments' => array(
      'groups' => 'A space delimited list of text groups which contain the strings that need to be refreshed.',
    ),
    'options' => array(
      'delete' => array(
        'description' => 'Delete left over strings.',
      ),
      'all' => array(
        'description' => 'Refresh all available string groups.',
      ),
    ),
    'examples' => array(
      'Refresh strings in one textgroup' => 'drush i18n-string-refresh views',
      'Refresh strings in multiple textgroups' => 'drush i18n-string-refresh views field',
      'Refresh strings in multiple textgroups and clean up left over strings' => 'drush i18n-string-refresh views field --delete',
    ),
  );
  return $commands;
}

/**
 * Validation for command i18n-string-refresh
 */
function drush_i18n_string_refresh_validate() {
  $groups = drush_get_arguments();
  // Remove the first argument, which is the command itself
  unset($groups[0]);
  // Make sure either groups or the option --all are used, but not both
  if (drush_get_option('all') && !empty($groups)) {
    return drush_set_error('I8N_STRING_REFRESH_INVALID_OPTIONS', dt('Option --all must not have any groups explicitly set'));
  }
  elseif (!drush_get_option('all') && empty($groups)) {
    // Die gracefully if neither --all nor groups to refresh is are set.
    return drush_set_error('I8N_STRING_REFRESH_INVALID_OPTIONS', dt('Please specify either groups to refresh or the option --all. See  '
      . '`drush help i18n-string-refresh` for information on usage.'));
  }
}


/**
 * Callback for command i18n-string-refresh.
 */
function drush_i18n_string_refresh() {
  $groups = drush_get_arguments();
  // Remove the first argument, which is the command itself
  unset($groups[0]);

  if (empty($groups) && drush_get_option('all')) {
    $groups = array_keys(i18n_string_group_info());
  }

  // Refresh only valid textgroups
  foreach ($groups as $key => $group) {
    // Get textgroup info
    $group_info = i18n_string_group_info($group);
    // Remove invalid textgroup
    if (empty($group_info)) {
      drush_log(dt('Textgroup !textgroup does not exist', array('!textgroup' => $group)), 'warning');
      unset($groups[$key]);
    }
  }

  // Perform batch operations
  if (!empty($groups)) {
    module_load_include('admin.inc', 'i18n_string');
    // Should left over strings be deleted?
    $delete = drush_get_option('delete') ? TRUE : FALSE;
    $batch = i18n_string_refresh_batch($groups, $delete);
    batch_set($batch);
    drush_backend_batch_process();
    drush_log(dt('Strings refreshed'), 'ok');
  }
}
