<?php

/**
 * @file EntityformRevisionsUIController
 */

/**
 * UI Controller extension
 */
class EntityformRevisionsUIController extends EntityformUIController {

  /**
   * Overrides hook_menu() defaults. Adds support for revisions
   */
  public function hook_menu() {
    $items = parent::hook_menu();

    $wildcard = isset($this->entityInfo['admin ui']['menu wildcard']) ? $this->entityInfo['admin ui']['menu wildcard'] : '%' . $this->entityType;

    $base = array(
      'file' => 'entityform_revisions.pages.inc',
      'file path' => drupal_get_path('module', 'entityform_revisions'),
    );

    $items['entityform/' . $wildcard . '/revisions'] = array(
      'title' => 'Revisions',
      'page callback' => 'entityform_revision_overview',
      'page arguments' => array(1),
      'access callback' => 'entityform_revisions_access',
      'access arguments' => array('edit', 1),
      'weight' => 2,
      'type' => MENU_LOCAL_TASK,
    ) + $base;

    // Loading and editing entityform revisions.
    $items['entityform/' . $wildcard . '/revisions/%'] = array(
      'page callback' => 'entityform_revision_form_wrapper',
      'page arguments' => array(1, 3),
      'access callback' => 'entityform_revisions_access',
      'access arguments' => array('edit', 1),
      'weight' => 0,
      'context' => MENU_CONTEXT_PAGE | MENU_CONTEXT_INLINE,
    ) + $base;

    $items['entityform/' . $wildcard . '/revisions/%/edit'] = array(
      'title' => 'Edit revision',
      'page callback' => 'entityform_revision_form_wrapper',
      'page arguments' => array(1, 3, 'edit'),
      'access callback' => 'entityform_access',
      'access arguments' => array('edit', 1),
      'weight' => 0,
      'type' => MENU_LOCAL_TASK,
      'context' => MENU_CONTEXT_PAGE | MENU_CONTEXT_INLINE,
    ) + $base;

    $items['entityform/' . $wildcard . '/revisions/%/delete'] = array(
      'title' => 'Delete revision',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('entityform_revision_delete_confirm', 1, 3),
      'access callback' => 'entityform_revisions_access',
      'access arguments' => array('delete', 1),
      'type' => MENU_LOCAL_TASK,
      'context' => MENU_CONTEXT_PAGE | MENU_CONTEXT_INLINE,
      'weight' => 10,
    ) + $base;

    $items['entityform/' . $wildcard . '/revisions/%/revert'] = array(
      'title' => 'Delete revision',
      'page callback' => 'drupal_get_form',
      'page arguments' => array('entityform_revision_revert_confirm', 1, 3),
      'access callback' => 'entityform_revisions_access',
      'access arguments' => array('revert', 1),
      'type' => MENU_LOCAL_TASK,
      'context' => MENU_CONTEXT_PAGE | MENU_CONTEXT_INLINE,
      'weight' => 10,
    ) + $base;

    // Menu item for viewing entityforms revisions.
    $items['entityform/' . $wildcard . '/revisions/%'] = array(
      //'title' => 'Title',
      'title callback' => 'entityform_page_title',
      'title arguments' => array(1),
      'page callback' => 'entityform_revision_page_view',
      'page arguments' => array(1, 3),
      'access callback' => 'entityform_revisions_access',
      'access arguments' => array('view', 1),
      'type' => MENU_CALLBACK,
    ) + $base;

    $items['entityform/' . $wildcard . '/revisions/%/view'] = array(
      'title' => 'View revision',
      'type' => MENU_DEFAULT_LOCAL_TASK,
      'weight' => -10,
    );

    if (module_exists('diff')) {
      $items['entityform/' . $wildcard . '/revisions/view'] = array(
        'title' => 'Compare revisions',
        'page callback' => 'entityform_revisions_diff_diffs_show',
        'page arguments' => array(1, 4, 5, 6),
        'type' => MENU_LOCAL_TASK,
        'access callback' => 'entityform_revisions_access',
        'access arguments' => array('view', 1),
        'tab_parent' => 'entityform/' . $wildcard . '/revisions/list',
        'file' => 'entityform_revisions.diff.inc',
        'file path' => drupal_get_path('module', 'entityform_revisions'),
      );
    }

    return $items;
  }
}