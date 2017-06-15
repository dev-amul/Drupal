<?php

/**
 * @file Integrates entityform_revisions with diff module
 */

/**
 * Generates an overview table of older revisions of an entityform.
 *
 * @param $form
 *   the form array.
 *
 * @param $form_state
 *   the initial/submitted form state.
 *
 * @param $entityform
 *   An entityform object.
 *
 * @return array
 *   A Drupal form.
 */
function entityform_revision_overview_form($form, $form_state, $entityform) {

  $form['entityform_id'] = array(
    '#type' => 'hidden',
    '#value' => $entityform->identifier(),
  );

  $revisions = entityform_revision_list($entityform);

  $revert_permission = FALSE;
  if (entityform_access('revert', $entityform)) {
    $revert_permission = TRUE;
  }
  $delete_permission = FALSE;
  if (entityform_access('delete', $entityform)) {
    $delete_permission = TRUE;
  }

  $allowed_tags = array('a', 'em', 'strong', 'cite', 'blockquote', 'code', 'ul', 'ol', 'li', 'dl', 'dt', 'dd', 'br');
  foreach ($revisions as $revision) {
    $revision_ids[$revision->vid] = '';
    $operations = array();

    $revision_log = ($revision->log != '') ? '<p class="revision-log">' . filter_xss($revision->log, $allowed_tags) . '</p>' : '';
    if ($revision->current_vid > 0) {
      $form['info'][$revision->vid] = array(
        '#markup' =>
          t('!date by !username',
            array(
              '!date' => l(format_date($revision->changed, 'short'), "entityform/" . $entityform->identifier()),
              '!username' => theme('username', array('account' => $revision)))
          ) . $revision_log,
      );
      $operations[] = array(
        '#markup' => drupal_placeholder(t('current revision')),
      );
    }
    else {
      $diff_date = l(
        format_date($revision->changed, 'small'),
        "entityform/" . $entityform->identifier() . "/revisions/$revision->vid/view"
      );

      $form['info'][$revision->vid] = array(
        '#markup' => t('!date by !username', array(
              '!date' => $diff_date,
              '!username' => theme('username', array('account' => $revision)))
          ) . $revision_log,
      );

      if ($revert_permission) {
        $operations[] = array(
          '#markup' => l(t('revert'), "entityform/" . $entityform->identifier() . "/revisions/$revision->vid/revert"),
        );
      }
      if ($delete_permission) {
        $operations[] = array(
          '#markup' => l(t('delete'), "entityform/" . $entityform->identifier() . "/revisions/$revision->vid/delete"),
        );
      }
      // Set a dummy, even if the user has no permission for the other
      // operations, so that we can check if the operations array is
      // empty to know if the row denotes the current revision.
      $operations[] = array();
    }
    $form['operations'][$revision->vid] = $operations;
  }

  $new_vid = key($revision_ids);
  next($revision_ids);
  $old_vid = key($revision_ids);
  $form['diff']['old'] = array(
    '#type' => 'radios',
    '#options' => $revision_ids,
    '#default_value' => $old_vid,
  );
  $form['diff']['new'] = array(
    '#type' => 'radios',
    '#options' => $revision_ids,
    '#default_value' => $new_vid,
  );

  $form['submit'] = array('#type' => 'submit', '#value' => t('Compare'));
  $form['#theme'] = 'diff_node_revisions';

  $form['#attributes'] = array(
    'class' => array(
      'entityform-revisions'
    )
  );
  $form['#attached'] = diff_build_attachments(TRUE);
  return $form;
}


/**
 * Submit code for input form to select two revisions.
 */
function entityform_revision_overview_form_submit($form, &$form_state) {
  // The ids are ordered so the old revision is always on the left.
  $old_vid = min($form_state['values']['old'], $form_state['values']['new']);
  $new_vid = max($form_state['values']['old'], $form_state['values']['new']);
  $form_state['redirect'] = 'entityform/' . $form_state['values']['entityform_id'] . '/revisions/view/' . $old_vid . '/' . $new_vid;
}

/**
 * Validation for input form to select two revisions.
 */
function entityform_revision_overview_form_validate($form, &$form_state) {
  $old_vid = $form_state['values']['old'];
  $new_vid = $form_state['values']['new'];
  if ($old_vid == $new_vid || !$old_vid || !$new_vid) {
    form_set_error('diff', t('Select different revisions to compare.'));
  }
}

/**
 * Create a comparison for the entities between versions 'old_vid' and
 * 'new_vid'.
 *
 * @param \Entityform $entityform
 *   Entityform on which to perform comparison
 * @param integer $old_vid
 *   Version ID of the old revision.
 * @param integer $new_vid
 *   Version ID of the new revision.
 *
 * @return mixed
 */
function entityform_revisions_diff_diffs_show($entityform, $old_vid, $new_vid, $state = NULL) {
  // Attaches the CSS.
  $build['#attached'] = diff_build_attachments();

  $default_state = variable_get('diff_default_state_node', 'raw');
  if (empty($state)) {
    $state = $default_state;
  }
  $state = str_replace('-', '_', $state);
  if (!array_key_exists($state, diff_available_states())) {
    $state = $default_state;
  }

  drupal_set_title(t('Entityform revisions', array()), PASS_THROUGH);
  $revisions = entityform_revision_list($entityform);

  $old_entityform = entityform_get_revision($entityform, $old_vid);
  $new_entityform = entityform_get_revision($entityform, $new_vid);

  // Generate table header (date, username, log message).
  $old_header = t('!date by !username', array(
    '!date' => l(format_date($old_entityform->revision_changed), "entityform/" . $old_entityform->identifier() . "/revisions/$old_entityform->vid/view", array('absolute' => 1)),
    '!username' => theme('username', array('account' => $revisions[$old_vid])),
  ));
  $new_header = t('!date by !username', array(
    '!date' => l(format_date($new_entityform->revision_changed), "entityform/" . $new_entityform->identifier() . "/revisions/$new_entityform->vid/view", array('absolute' => 1)),
    '!username' => theme('username', array('account' => $revisions[$new_vid])),
  ));

  $old_log = !empty($old_entityform->log) ? '<p class="revision-log">' . filter_xss($old_entityform->log) . '</p>' : '';
  $new_log = !empty($new_entityform->log) ? '<p class="revision-log">' . filter_xss($new_entityform->log) . '</p>' : '';

  // Generate previous diff/next diff links.
  $nav_suffix = ($default_state != $state) ? '/' . str_replace('_', '-', $state) : '';
  $next_vid = _entityform_revisions_diff_get_next_vid($revisions, $new_vid);
  if ($next_vid) {
    $next_link = l(t('Next difference >'), 'entityform/' . $entityform->identifier() . '/revisions/view/' . $new_vid . '/' . $next_vid . $nav_suffix, array('absolute' => 1));
  }
  else {
    $next_link = '';
  }
  $prev_vid = _entityform_revisions_diff_get_previous_vid($revisions, $old_vid);
  if ($prev_vid) {
    $prev_link = l(t('< Previous difference'), 'entityform/' . $entityform->identifier() . '/revisions/view/' . $prev_vid . '/' . $old_vid . $nav_suffix, array('absolute' => 1));
  }
  else {
    $prev_link = '';
  }

  $header = _entityform_revisions_diff_default_header($old_header, $new_header);
  $rows = array();
  if ($old_log || $new_log) {
    $rows['logs'] = array(
      array(
        'data' => $old_log,
        'colspan' => 2,
      ),
      array(
        'data' => $new_log,
        'colspan' => 2,
      ),
    );
  }
  $rows['navigation'] = array(
    array(
      'data' => $prev_link,
      'class' => array('diff-prevlink'),
      'colspan' => 2,
    ),
    array(
      'data' => $next_link,
      'class' => array('diff-nextlink'),
      'colspan' => 2,
    ),
  );

  $links = array();
  foreach (diff_available_states('entityform') as $alternative_state => $label) {
    if ($alternative_state == $state) {
      // @todo: Should we show both or just alternatives?
    }
    $links[$alternative_state] = array(
      'title' => $label,
      'href' => "entityform/{$entityform->identifier()}/revisions/view/{$old_vid}/{$new_vid}" . ($alternative_state == $default_state ? '' : '/' . str_replace('_', '-', $alternative_state)),
    );
  }
  if (count($links) > 1) {
    $state_links = theme('links', array(
      'links' => $links,
      'attributes' => array('class' => array('links', 'inline')),
    ));
    $rows['states'] = array(
      array(
        'data' => $state_links,
        'class' => 'diff-links',
        'colspan' => 4,
      ),
    );
  }
  $rows = array_merge($rows, _entityform_revisions_diff_body_rows($old_entityform, $new_entityform, $state));

  $build['diff_table'] = array(
    '#theme' => 'table__diff__standard',
    '#header' => $header,
    '#rows' => $rows,
    '#attributes' => array('class' => array('diff')),
    '#colgroups' => _entityform_revisions_diff_default_cols(),
    '#sticky' => FALSE,
  );

  return $build;
}

/**
 * Creates an array of rows which represent the difference between nodes.
 *
 * @param object $old_entityform
 *   Node for comparison which will be displayed on the left side.
 * @param object $new_entityform
 *   Node for comparison which will be displayed on the right side.
 * @param boolean $state
 *   The state to render for the diff.
 *
 * @return array
 */
function _entityform_revisions_diff_body_rows($old_entityform, $new_entityform, $state = 'raw') {
  // This is an unique index only, so no need for drupal_static().
  static $table_row_counter = 0;

  if ($theme = variable_get('diff_theme', 'default')) {
    drupal_add_css(drupal_get_path('module', 'diff') . "/css/diff.{$theme}.css");
  }
  module_load_include('inc', 'diff', 'includes/node');
  module_load_include('inc', 'diff', 'diff.pages');

  $rows = array();
  $any_visible_change = FALSE;
  $context = array(
    'entity_type' => 'entityform',
    'states' => array($state),
    'view_mode' => 'diff_standard',
  );

  $entityform_diffs = diff_compare_entities($old_entityform, $new_entityform, $context);

  // Track line numbers between multiple diffs.
  $line_stats = array(
    'counter' => array('x' => 0, 'y' => 0),
    'offset' => array('x' => 0, 'y' => 0),
  );

  // Render diffs for each.
  foreach ($entityform_diffs as $entityform_diff) {
    $show_header = !empty($entityform_diff['#name']);
    // These are field level settings.
    if ($show_header && isset($entityform_diff['#settings']['show_header'])) {
      $show_header = $show_header && $entityform_diff['#settings']['show_header'];
    }

    // Line counting and line header options.
    if (empty($entityform_diff['#settings']['line_counter'])) {
      $line_counter = FALSE;
    }
    else {
      $line_counter = $entityform_diff['#settings']['line_counter'];
    }
    // Every call to 'line' resets the counters.
    if ($line_counter) {
      $line_stats['counter']['x'] = 0;
      $line_stats['counter']['y'] = 0;
      if ($line_counter == 'line' && 0) {
        $line_stats['offset']['x'] = 0;
        $line_stats['offset']['y'] = 0;
      }
      $line_stats_ref = $line_stats;
    }
    else {
      $line_stats_ref = NULL;
    }

    list($old, $new) = diff_extract_state($entityform_diff, $state);
    if ($node_diff_rows = diff_get_rows($old, $new, $line_counter && $line_counter != 'hidden', $line_stats_ref)) {
      if ($line_counter && $line_counter != 'line') {
        $line_stats['offset']['x'] += $line_stats_ref['counter']['x'];
        $line_stats['offset']['y'] += $line_stats_ref['counter']['y'];
      }
      if ($show_header) {
        $rows['diff-header-' . $table_row_counter++] = array(
          array(
            'data' => t('Changes to %name', array('%name' => $entityform_diff['#name'])),
            'class' => 'diff-section-title',
            'colspan' => 4,
          ),
        );
      }
      // To avoid passing counter to the Diff engine, index rows manually here
      // to allow modules to interact with the table. i.e. no array_merge().
      foreach ($node_diff_rows as $row) {
        $rows['diff-row-' . $table_row_counter++] = $row;
      }
      $any_visible_change = TRUE;
    }
  }
  if (!$any_visible_change) {
    $rows['diff-empty-' . $table_row_counter++] = array(
      array(
        'data' => t('No visible changes'),
        'class' => 'diff-section-title',
        'colspan' => 4,
      ),
    );
    // @todo: revise this.
    // Needed to keep safari happy.
    $rows['diff-empty-' . $table_row_counter++] = array(
      array('data' => ''),
      array('data' => ''),
      array('data' => ''),
      array('data' => ''),
    );
  }

  return $rows;
}


/**
 * Get the entry in the revisions list after $vid.
 *
 * @param array $entityform_revisions
 *   Array of entityform revision IDs in descending order.
 * @param int $vid
 *   Version ID to look for.
 *
 * @return boolean|integer
 *   Returns FALSE if $vid is the last entry.
 */
function _entityform_revisions_diff_get_next_vid($entityform_revisions, $vid) {
  $previous = NULL;
  foreach ($entityform_revisions as $revision) {
    if ($revision->vid == $vid) {
      return ($previous ? $previous->vid : FALSE);
    }
    $previous = $revision;
  }
  return FALSE;
}

/**
 * Get the entry in the revision list before $vid.
 *
 * @param array $entityform_revisions
 *   Array of entityform revision IDs in descending order.
 * @param integer $vid
 *   Version ID to look for.
 *
 * @return boolean|integer
 *   Returns FALSE if $vid is the first entry.
 */
function _entityform_revisions_diff_get_previous_vid($entityform_revisions, $vid) {
  $previous = NULL;
  foreach ($entityform_revisions as $revision) {
    if ($previous && $previous->vid == $vid) {
      return $revision->vid;
    }
    $previous = $revision;
  }
  return FALSE;
}

/**
 * Helper function to create default 'cols' array for diff table.
 */
function _entityform_revisions_diff_default_cols() {
  return array(
    array(
      array(
        'class' => 'diff-marker',
      ),
      array(
        'class' => 'diff-content',
      ),
      array(
        'class' => 'diff-marker',
      ),
      array(
        'class' => 'diff-content',
      ),
    ),
  );
}

/**
 * Helper function to create default 'header' array for diff table.
 */
function _entityform_revisions_diff_default_header($old_header = '', $new_header = '') {
  return array(
    array(
      'data' => $old_header,
      'colspan' => 2,
    ),
    array(
      'data' => $new_header,
      'colspan' => 2,
    ),
  );
}
