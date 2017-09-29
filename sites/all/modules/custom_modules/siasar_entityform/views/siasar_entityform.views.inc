<?php

/**
 * @file
 * Views definitions for siasar_entityform module.
 */

/**
 * Implements hook_views_data().
 */
function siasar_entityform_views_data() {
  $data = [];

  $data['entityform_computable_states']['table']['group'] = 'Entityform Computable states';

  $data['entityform_computable_states']['table']['base'] = array(
    'field' => 'entityform_id',
    'title' => 'Entity form ID',
  );

  $data['entityform_computable_states']['table']['join'] = array(
    'entityform' => array(
      'left_field' => 'entityform_id',
      'field' => 'entityform_id',
    )
  );

  $data['entityform_computable_states']['entity_id'] =array(
    'title' => 'Computable entityform ID',
    'help' => 'Computable entityform',
    'relationship' => array(
      'base' => 'entityform', // The name of the table to join with.
      'base field' => 'entityform_id', // The name of the field on the joined table.
      // 'field' => 'nid' -- see hook_views_data_alter(); not needed here.
      'handler' => 'views_handler_relationship',
      'label' => t('Default label for the relationship'),
      'title' => t('Title shown when adding the relationship'),
      'help' => t('More information on this relationship'),
    ),
  );

  $data['entityform_computable_states']['computable'] =array(
    'title' => 'Computable entityform',
    'help' => 'Computable entityform',
    'filter' => array(
      'handler' => 'views_handler_filter',
    ),
    'field' => array(
      'handler' => 'siasar_entityform_computable_handler',
      'click sortable' => TRUE
    ),
    'sort' => array(
      'handler' => 'siasar_entityform_computable_handler',
    ),
  );

  $data['entityform_computable_states']['entityform_revision'] =array(
    'title' => 'Processable',
    'help' => 'This survey can be processed by the BI',
    'filter' => array(
      'handler' => 'siasar_entityform_revision_filter_handler',
    ),
    'field' => array(
      'handler' => 'siasar_entityform_revision_handler',
      'click sortable' => TRUE
    ),
    'sort' => array(
      'handler' => 'siasar_entityform_revision_handler',
    ),
  );

  return $data;
}