<?php

/**.
 * Drush command declaration function.
 * @return mixed
 */
function siasar_entityform_drush_command() {

  $items['siasar-forms-process-all'] = array(
    'description' => 'Process all the entityforms in the process queue.',
    'aliases'     => array('sfpa'),
    'callback'    => 'siasar_forms_process_all',
  );

  $items['siasar-forms-process-items'] = array(
    'description' => 'Process a certain number of entityforms in the process queue.',
    'aliases'     => array('sfpi'),
    'callback'    => 'siasar_forms_process_items',
    'arguments'   => array(
      'items' => "Number of items to process on each query. Default value: 30 items",
    ),
  );

  $items['siasar-forms-process-pending'] = array(
    'description' => 'Get the amount of elements pending.',
    'aliases'     => array('sfpp'),
    'callback'    => 'siasar_forms_process_pending',
  );

  $items['siasar-forms-process-survey'] = array(
    'description' => 'Process a given survey.',
    'aliases'     => array('sfps'),
    'callback'    => 'siasar_forms_process_validate_survey',
    'arguments'   => array(
      'item' => "Survey ID",
    ),
  );


  return $items;
}

/**
 * Process certain number of forms.
 *
 * @param $items integer Amount of item to process.
 */
function siasar_forms_process_items($items) {

  if ($items) {
    $elemnts = siasar_process_pending_computable_entityforms($items);
    drush_print('Processed ' . $elemnts . ' elements');
  }

}

/**
 * Process all the pending forms in the system.
 */
function siasar_forms_process_all() {

  while (siasar_process_pending_computable_entityforms() > 0) {
  }

}

/**
 * Get the number of pending forms in the system.
 */
function siasar_forms_process_pending() {
  $result = db_query("select count(*) from  entityform_computable_processing");

  $items = reset($result->fetchAll());

  drush_print('Pending elements: ' . $items->count);
}

function siasar_forms_process_validate_survey($id) {
  if ($id) {
    $computable = _computable_revision($id);
    if ($computable) {
      return 'The valid revision for ' . $id . ' is ' . $computable;
    }
  }
  drush_print('No computable revision');
}