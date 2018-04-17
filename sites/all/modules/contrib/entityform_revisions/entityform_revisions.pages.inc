<?php

/**
 * @file
 * Page callbacks for handling revisions
 */

/**
 * Page callback that displays an entity revision
 *
 * @param $entityform
 * @param $vid
 * @param string $view_mode
 *
 * @return mixed
 */
function entityform_revision_page_view($entityform, $vid, $view_mode = 'full') {

  $revision = entityform_get_revision($entityform, $vid);

  module_load_include('inc', 'entityform', 'entityform.admin');
  return entityform_page_view($revision, $view_mode);
}

/**
 * Form callback wrapper: create or edit a entityform.
 *
 * @param $entityform
 *   The entityform object being edited by this form.
 * @param $vid
 *   The revision being updated
 * @param $mode
 *     Current mode for this form
 *     Submit - user is submitting the form
 *     Edit - user with permission is editingform
 * @param $form_context
 *   How is form being used shown?
 *     'page' - on submit page
 *     'embedded' - called form EntityformTypeController->view()
 *     'preview' - Preview on Entityform type management
 *
 * @see entityform_edit_form()
 * @return array|mixed
 */
function entityform_revision_form_wrapper($entityform, $vid, $mode = 'submit', $form_context = 'page') {

  $revision = entityform_get_revision($entityform, $vid);

  module_load_include('inc', 'entityform', 'entityform.admin');
  return entityform_form_wrapper($revision, $mode, $form_context);
}

/**
 * Page callback that shows the delete entity revision form
 *
 * @param $entityform \Entityform
 * @param $vid
 *
 * @return array|mixed
 */
function entityform_revision_delete_form_wrapper($entityform, $vid) {

  $revision = entityform_get_revision($entityform, $vid);

  module_load_include('inc', 'entityform', 'entityform.admin');
  return entityform_delete_form_wrapper($revision);
}

/**
 * Generates an overview table of older revisions of an entityform.
 *
 * @param $entityform
 *   An entityform object.
 *
 * @return array
 *   A drupal render form or a renderable array.
 */
function entityform_revision_overview($entityform) {
  drupal_set_title(t('Entityform revisions', array()), PASS_THROUGH);
  if (module_exists('diff')) {
    module_load_include('inc', 'entityform_revisions', 'entityform_revisions.diff');
    $return = drupal_get_form('entityform_revision_overview_form', $entityform);
  } else {
    $return = entityform_revision_overview_navigate($entityform);
  }
  return $return;
}

/**
 * Generates an overview table of older revisions of an entityform.
 *
 * @param $entityform
 *   An entityform object.
 *
 * @return array
 *   An array structure to be render as drupal_render expects.
 */
function entityform_revision_overview_navigate($entityform) {

  $header = array(t('vid'), t('Revision'), array('data' => t('Operations'), 'colspan' => 2));

  $revisions = entityform_revision_list($entityform);

  $rows = array();
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
    $row = array();
    $operations = array();

    $row[] = $revision->vid;
    $revision_log = ($revision->log != '') ? '<p class="revision-log">' . filter_xss($revision->log, $allowed_tags) . '</p>' : '';
    if ($revision->current_vid > 0) {
      $row[] = array(
        'data' => t('!date by !username', array('!date' => l(format_date($revision->changed, 'short'), "entityform/" . $entityform->identifier()), '!username' => theme('username', array('account' => $revision))))
        . $revision_log,
        'class' => array('revision-current'));
      $operations[] = array('data' => drupal_placeholder(t('current revision')), 'class' => array('revision-current'), 'colspan' => 2);
    }
    else {
      $row[] = t('!date by !username', array('!date' => l(format_date($revision->changed, 'short'), "entityform/" . $entityform->identifier() . "/revisions/$revision->vid/view"), '!username' => theme('username', array('account' => $revision))))
        . $revision_log;
      if ($revert_permission) {
        $operations[] = l(t('revert'), "entityform/" . $entityform->identifier() . "/revisions/$revision->vid/revert");
      }
      if ($delete_permission) {
        $operations[] = l(t('delete'), "entityform/" . $entityform->identifier() . "/revisions/$revision->vid/delete");
      }
    }
    $rows[] = array_merge($row, $operations);
  }

  $build['entityform_revisions_table'] = array(
    '#theme' => 'table',
    '#rows' => $rows,
    '#header' => $header,
  );

  return $build;
}

/**
 * Asks for confirmation of the reversion to prevent against CSRF attacks.
 *
 * @param EntityForm $entityform
 *   The entityform.
 *
 * @param int $revision
 *   The entityform revision ID.
 *
 * @return array
 *   An array as expected by drupal_render().
 *
 * @ingroup forms
 */
function entityform_revision_revert_confirm($form, $form_state, $entityform, $revision) {
  $entityform_revision = entityform_get_revision($entityform, $revision);
  $form['#entityform_revision'] = $entityform_revision;
  return confirm_form($form, t('Are you sure you want to revert to the revision from %revision-date?', array('%revision-date' => format_date($entityform_revision->changed))), 'entityform/' . $entityform_revision->identifier() . '/revisions', '', t('Revert'), t('Cancel'));
}

/**
 * Form submission handler for entityform_revision_revert_confirm().
 */
function entityform_revision_revert_confirm_submit($form, &$form_state) {
  $entityform_revision = $form['#entityform_revision'];
  $entityform_revision->default_revision = TRUE;
  $entityform_revision->is_new_revision = FALSE;
  $entityform_revision->revision = TRUE;

  $entityform_revision->log = t('Copy of the revision from %date. - [vid: %vid]', array('%date' => format_date($entityform_revision->changed), '%vid' => $entityform_revision->vid)) . ' <br/>' . $entityform_revision->log;

  entity_save('entityform', $entityform_revision);

  watchdog('content', '@type: reverted %title revision %revision.', array('@type' => $entityform_revision->getTypeName(), '%revision' => $entityform_revision->vid));
  drupal_set_message(t('@type has been reverted back to the revision from %revision-date.', array('@type' => $entityform_revision->getTypeName(), '%revision-date' => format_date($entityform_revision->changed))));
  $form_state['redirect'] = 'entityform/' . $entityform_revision->identifier() . '/revisions';
}

/**
 * Form constructor for the revision deletion confirmation form.
 *
 * This form prevents against CSRF attacks.
 *
 * @param EntityForm $entityform
 *   The entityform.
 *
 * @param int $revision
 *   The entityform revision ID.
 *
 * @return
 *   An array as expected by drupal_render().
 *
 * @ingroup forms
 */
function entityform_revision_delete_confirm($form, $form_state, $entityform, $revision) {
  $entityform_revision = entityform_get_revision($entityform, $revision);
  $form['#entityform_revision'] = $entityform_revision;
  return confirm_form($form, t('Are you sure you want to delete the revision from %revision-date?', array('%revision-date' => format_date($entityform_revision->revision_changed))), 'entityform/' . $entityform_revision->identifier() . '/revisions', t('This action cannot be undone.'), t('Delete'), t('Cancel'));
}

/**
 * Form submission handler for entityform_revision_delete_confirm().
 */
function entityform_revision_delete_confirm_submit($form, &$form_state) {
  $entityform_revision = $form['#entityform_revision'];
  $id = $entityform_revision->identifier();
  entity_revision_delete('entityform', $entityform_revision->vid);

  watchdog('content', '@type: deleted revision %revision.', array('@type' => $entityform_revision->getTypeName(), '%revision' => $entityform_revision->vid));
  drupal_set_message(t('Revision from %revision-date of @type has been deleted.', array('%revision-date' => format_date($entityform_revision->changed), '@type' => $entityform_revision->getTypeName())));

  $form_state['redirect'] = 'entityform/' . $id;
  if (db_query('SELECT COUNT(vid) FROM {entityform_revision} WHERE entityform_id = :entityform_id', array(':entityform_id' => $entityform_revision->identifier()))->fetchField() > 1) {
    $form_state['redirect'] .= '/revisions';
  }
}
