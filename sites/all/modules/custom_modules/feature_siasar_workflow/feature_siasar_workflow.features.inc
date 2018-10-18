<?php
/**
 * @file
 * feature_siasar_workflow.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function feature_siasar_workflow_default_Workflow() {
  $workflows = array();

  // Exported workflow: 'entityforms'
  $workflows['entityforms'] = entity_import('Workflow', '{
    "name" : "entityforms",
    "tab_roles" : [],
    "options" : [],
    "states" : {
      "(creation)" : {"weight":"-50","sysid":"1","state":"(creation)","status":"1","name":"(creation)"},
      "draft" : {"weight":"-20","sysid":"0","state":"Draft","status":"1","name":"draft"},
      "finished" : {"weight":"-19","sysid":"0","state":"Finished","status":"1","name":"finished"},
      "removed" : {"weight":"-17","sysid":"0","state":"Removed","status":"1","name":"removed"},
      "validated" : {"weight":"-18","sysid":"0","state":"Validated","status":"1","name":"validated"}
    },
    "transitions" : {
      "_creation_to_draft" : {"roles":{"-1":-1,"7":7,"8":8,"9":9,"6":6},"name":"_creation_to_draft","label":"Save draft","rdf_mapping":[],"start_state":"(creation)","end_state":"draft"},
      "_creation_to_finished" : {"roles":{"-1":-1,"8":8,"9":9,"6":6},"name":"_creation_to_finished","label":"Finish","rdf_mapping":[],"start_state":"(creation)","end_state":"finished"},
      "_creation_to_validated" : {"roles":{"9":9,"6":6},"name":"_creation_to_validated","label":"Validate","rdf_mapping":[],"start_state":"(creation)","end_state":"validated"},
      "draft_to_draft" : {"roles":{"-1":-1,"7":7,"8":8,"9":9,"6":6},"name":"draft_to_draft","label":"Save draft","rdf_mapping":[],"start_state":"draft","end_state":"draft"},
      "draft_to_finished" : {"roles":{"-1":-1,"8":8,"9":9,"6":6},"name":"draft_to_finished","label":"Finish","rdf_mapping":[],"start_state":"draft","end_state":"finished"},
      "draft_to_removed" : {"roles":{"8":8,"9":9,"6":6},"name":"draft_to_removed","label":"","rdf_mapping":[],"start_state":"draft","end_state":"removed"},
      "draft_to_validated" : {"roles":{"9":9,"6":6},"name":"draft_to_validated","label":"Validate","rdf_mapping":[],"start_state":"draft","end_state":"validated"},
      "finished_to_draft" : {"roles":{"8":8,"9":9,"6":6},"name":"finished_to_draft","label":"Return to draft","rdf_mapping":[],"start_state":"finished","end_state":"draft"},
      "finished_to_finished" : {"roles":{"-1":-1,"7":7,"8":8,"9":9,"6":6},"name":"finished_to_finished","label":"Save as finished","rdf_mapping":[],"start_state":"finished","end_state":"finished"},
      "finished_to_removed" : {"roles":{"9":9,"6":6},"name":"finished_to_removed","label":"","rdf_mapping":[],"start_state":"finished","end_state":"removed"},
      "finished_to_validated" : {"roles":{"9":9,"6":6},"name":"finished_to_validated","label":"Validate","rdf_mapping":[],"start_state":"finished","end_state":"validated"},
      "removed_to_draft" : {"roles":{"9":9,"6":6},"name":"removed_to_draft","label":"","rdf_mapping":[],"start_state":"removed","end_state":"draft"},
      "removed_to_finished" : {"roles":{"9":9,"6":6},"name":"removed_to_finished","label":"","rdf_mapping":[],"start_state":"removed","end_state":"finished"},
      "removed_to_removed" : {"roles":{"-1":-1,"7":7,"8":8,"9":9,"6":6},"name":"removed_to_removed","label":"","rdf_mapping":[],"start_state":"removed","end_state":"removed"},
      "removed_to_validated" : {"roles":{"9":9,"6":6},"name":"removed_to_validated","label":"","rdf_mapping":[],"start_state":"removed","end_state":"validated"},
      "validated_to_draft" : {"roles":{"9":9,"6":6},"name":"validated_to_draft","label":"Prepare this survey for updating","rdf_mapping":[],"start_state":"validated","end_state":"draft"},
      "validated_to_finished" : {"roles":{"9":9,"6":6},"name":"validated_to_finished","label":"","rdf_mapping":[],"start_state":"validated","end_state":"finished"},
      "validated_to_removed" : {"roles":{"9":9,"6":6},"name":"validated_to_removed","label":"","rdf_mapping":[],"start_state":"validated","end_state":"removed"},
      "validated_to_validated" : {"roles":{"-1":-1,"7":7,"8":8,"9":9,"6":6},"name":"validated_to_validated","label":"Save as validated","rdf_mapping":[],"start_state":"validated","end_state":"validated"}
    },
    "label" : "entityforms",
    "typeMap" : [],
    "rdf_mapping" : [],
    "system_roles" : {
      "-1" : "(author)",
      "7" : "Encuestador",
      "8" : "Digitador",
      "9" : "Administrador Local",
      "6" : "Administrador Regional"
    }
  }');

  return $workflows;
}
