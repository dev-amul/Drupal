<?php

/**
 * Implements hook_drush_command().
 */
function siasar_editorial_flow_drush_command() {
  $items['siasar-update-editorial'] = array(
    'description' => 'It migrates survey status (draft/finished/validated) to a new system, powered by Workflow module.',
    'aliases' => array('siasar-ufe'),
    'callback' => 'drush_siasar_update_editorial',
    'arguments' => array(
      'form_type' => 'Form type',
      'offset' => 'Starting at result (zero indexed)',
      'length' => 'How many results should the script get'
    ),
    'required-arguments' => false,
    'examples' => array(
      'drush siasar-ufe sistema 100 50' => 'Gets legacy draft and validated values for all "sistema" forms, and converts all them to new, Workflow powered state. It gets 50 surveys, starting at the 100th one.',
      'drush siasar-ufe all 0 100' => 'Process first 100 forms, no matter their type.',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

function drush_siasar_update_editorial($form_type = 'all', $offset = 0, $length = null) {
  $statuses = siasar_editorial_flow_get_statuses();

  $bundles = ($form_type !== 'all')
    ? array($form_type)
    : array_keys(entity_get_info('entityform')['bundles']);

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'entityform')
    ->entityCondition('bundle', $bundles, 'IN')
    ->propertyOrderBy('entityform_id', 'ASC');
  if($length) {
    $query->range($offset, $length);
  }
  $result = $query->execute();

  if (empty($result['entityform'])) {
    drupal_set_message('No valid results to process, aborting.');
    return;
  }

  foreach ($result['entityform'] as $entity_id => $item) {
    $entity = entity_load_single('entityform', $entity_id);
    if (!isset($entity->field_status)) continue;

    drupal_set_message('Processing entityform ID '. $entity->entityform_id);

    $wrapper = entity_metadata_wrapper('entityform', $entity);

    $draft = (bool) $wrapper->draft->value();
    $validated = (bool) $wrapper->field_cuestionario_validado->value();

    if ($validated) {
      $wrapper->field_status->set($statuses['STATUS_VALIDATED']);
      $wrapper->draft->set('0');
    } elseif (!$validated && !$draft) {
      $wrapper->field_status->set($statuses['STATUS_FINISHED']);
    } elseif (!$validated && $draft) {
      $wrapper->field_status->set($statuses['STATUS_DRAFT']);
    }
    $wrapper->save();
  }
  drupal_set_message('Processed ' . count($result['entityform']) . ' entityforms.');

}

function siasar_editorial_flow_get_statuses() {
  return array(
    'STATUS_DRAFT' => '2',
    'STATUS_FINISHED' => '3',
    'STATUS_VALIDATED' => '4',
  );
}
