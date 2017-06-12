<?php
/**
 * @file
 * feature_siasar_testing_form_workflow.features.inc
 */

/**
 * Implements hook_default_Workflow().
 */
function feature_siasar_testing_form_workflow_default_Workflow() {
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
      "validated" : {"weight":"-18","sysid":"0","state":"Validated","status":"1","name":"validated"}
    },
    "transitions" : {
      "_creation_to_draft" : {"roles":{"-1":-1,"9":9,"6":6,"10":10},"name":"_creation_to_draft","label":"Save draft","rdf_mapping":[],"start_state":"(creation)","end_state":"draft"},
      "_creation_to_finished" : {"roles":{"-1":-1,"9":9,"6":6,"10":10},"name":"_creation_to_finished","label":"Finish","rdf_mapping":[],"start_state":"(creation)","end_state":"finished"},
      "_creation_to_validated" : {"roles":{"9":9,"6":6,"10":10},"name":"_creation_to_validated","label":"Validate","rdf_mapping":[],"start_state":"(creation)","end_state":"validated"},
      "draft_to_draft" : {"roles":{"-1":-1,"7":7,"8":8,"5":5,"9":9,"6":6,"10":10},"name":"draft_to_draft","label":"Save draft","rdf_mapping":[],"start_state":"draft","end_state":"draft"},
      "draft_to_finished" : {"roles":{"-1":-1,"9":9,"6":6,"10":10},"name":"draft_to_finished","label":"Finish","rdf_mapping":[],"start_state":"draft","end_state":"finished"},
      "draft_to_validated" : {"roles":{"9":9,"6":6,"10":10},"name":"draft_to_validated","label":"Validate","rdf_mapping":[],"start_state":"draft","end_state":"validated"},
      "finished_to_draft" : {"roles":{"9":9,"6":6,"10":10},"name":"finished_to_draft","label":"Return to draft","rdf_mapping":[],"start_state":"finished","end_state":"draft"},
      "finished_to_finished" : {"roles":{"-1":-1,"7":7,"8":8,"5":5,"9":9,"6":6,"10":10},"name":"finished_to_finished","label":"Save as finished","rdf_mapping":[],"start_state":"finished","end_state":"finished"},
      "finished_to_validated" : {"roles":{"5":5,"9":9,"6":6,"10":10},"name":"finished_to_validated","label":"Validate","rdf_mapping":[],"start_state":"finished","end_state":"validated"},
      "validated_to_draft" : {"roles":{"9":9,"6":6,"10":10},"name":"validated_to_draft","label":"Update and save as draft","rdf_mapping":[],"start_state":"validated","end_state":"draft"},
      "validated_to_finished" : {"roles":{"9":9,"6":6,"10":10},"name":"validated_to_finished","label":"Update and save as finished","rdf_mapping":[],"start_state":"validated","end_state":"finished"},
      "validated_to_validated" : {"roles":{"-1":-1,"7":7,"8":8,"5":5,"9":9,"6":6,"10":10},"name":"validated_to_validated","label":"Save as validated","rdf_mapping":[],"start_state":"validated","end_state":"validated"}
    },
    "label" : "entityforms",
    "typeMap" : [],
    "rdf_mapping" : [],
    "system_roles" : {
      "-1" : "(autor)",
      "7" : "Encuestador",
      "8" : "Digitador",
      "5" : "Validador",
      "9" : "Administrador Local",
      "6" : "Administrador Regional",
      "10" : "administrador"
    }
  }');

  return $workflows;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_siasar_testing_form_workflow_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function feature_siasar_testing_form_workflow_default_entityform_type() {
  $items = array();
  $items['testingpurposes'] = entity_import('entityform_type', '{
    "type" : "testingpurposes",
    "label" : "Formulario de Pruebas",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "draft_multiple" : 0,
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 1,
      "submissions_view" : "results_entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "2" : "2",
        "7" : "7",
        "8" : "8",
        "5" : "5",
        "9" : "9",
        "6" : "6",
        "10" : "10",
        "1" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "resultados",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
