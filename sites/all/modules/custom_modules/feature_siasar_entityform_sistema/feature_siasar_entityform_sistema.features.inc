<?php
/**
 * @file
 * feature_siasar_entityform_sistema.features.inc
 */

/**
 * Implements hook_default_entityform_type().
 */
function feature_siasar_entityform_sistema_default_entityform_type() {
  $items = array();
  $items['sistema'] = entity_import('entityform_type', '{
    "type" : "sistema",
    "label" : "Sistema",
    "data" : {
      "draftable" : 1,
      "draft_redirect_path" : "",
      "draft_button_text" : "Salvar",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "draft_multiple" : 1,
      "submit_button_text" : "Enviar",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "2" : "2",
        "5" : "5",
        "1" : 0,
        "7" : 0,
        "8" : 0,
        "9" : 0,
        "6" : 0,
        "10" : 0
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
