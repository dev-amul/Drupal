<?php
/**
 * @file
 * feature_siasar_entityform_prestador_asistencia_tecnica.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_siasar_entityform_prestador_asistencia_tecnica_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function feature_siasar_entityform_prestador_asistencia_tecnica_default_entityform_type() {
  $items = array();
  $items['prestador_de_asistencia_t_cnica'] = entity_import('entityform_type', '{
    "type" : "prestador_de_asistencia_t_cnica",
    "label" : "Prestador de asistencia t\\u00e9cnica",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "Guardar",
      "draft_save_text" : { "value" : "", "format" : "filtered_html" },
      "draft_multiple" : 0,
      "submit_button_text" : "Enviar",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "Dato registrado",
      "submission_text" : { "value" : "El dato ha sido registrado.", "format" : "filtered_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "results_entityforms",
      "user_submissions_view" : "draft_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : {
        "2" : "2",
        "5" : "5",
        "9" : "9",
        "6" : "6",
        "10" : "10",
        "1" : 0,
        "7" : 0,
        "8" : 0
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
