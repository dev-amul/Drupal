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

  $items['siasar-forms-reset-states'] = array(
    'description' => 'Reset the states of all the surveys and queue them for processing.',
    'aliases'     => array('sfrs'),
    'callback'    => 'siasar_forms_reset_states',
  );

  $items['siasar-forms-last-execution-time'] = array(
    'description' => 'Get the last time execution of elements in the queue.',
    'aliases'     => array('sflet'),
    'callback'    => 'siasar_forms_get_last_execution_time',
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

/**
 * Get if an specified survey has a computable version
 * @param $id int The entityform ID.
 *
 * @return string
 */
function siasar_forms_process_validate_survey($id) {
  if ($id) {
    $computable = _computable_revision($id);
    if ($computable) {
      return 'The valid revision for ' . $id . ' is ' . $computable;
    }
  }
  drush_print('No computable revision');
}

/**
 * Get the last execution time of elements in the queue.
 */
function siasar_forms_get_last_execution_time() {
  drush_print(variable_get('siasar_form_last_execution_time', 'No elements has been processed yet.'));
}

/**
 * Reset states and the processing queue.
 */
function siasar_forms_reset_states() {
  //Completely reset the states and the processing queue.
  reset_entityform_states();
}