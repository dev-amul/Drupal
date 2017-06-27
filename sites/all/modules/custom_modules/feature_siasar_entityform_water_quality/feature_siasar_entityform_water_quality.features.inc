<?php
/**
 * @file
 * feature_siasar_entityform_water_quality.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_siasar_entityform_water_quality_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function feature_siasar_entityform_water_quality_default_entityform_type() {
  $items = array();
  $items['waq'] = entity_import('entityform_type', '{
    "type" : "waq",
    "label" : "Water Quality",
    "data" : {
      "draftable" : 1,
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
      "user_submissions_view" : "draft_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "7" : "7",
        "8" : "8",
        "5" : "5",
        "9" : "9",
        "6" : "6",
        "10" : "10",
        "1" : 0,
        "2" : 0
      },
      "resubmit_action" : "new",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
