<?php

/**.
 * Drush command declaration function
 * @return mixed
 *
 */
function siasar_entityform_drush_command() {

  $items['siasar-forms-processing'] = array(
    'description' => 'Process all the entityforms in the process queue.',
    'aliases' => array('sfp'),
    'callback' => 'siasar_forms_process_all',
    'arguments' => array(
      'items'        => "Number of items to process on each query. Default value: 30 items",
    ),
  );

  return $items;
}

/**
 * Callback for validate the pending elements in entityform processing table.
 */
function siasar_forms_process_all() {
  $items = variable_get('siasar_entityform_processing_items_amount', 30);

  while (siasar_process_pending_computable_entityforms($items) > 0) {
  }

}
