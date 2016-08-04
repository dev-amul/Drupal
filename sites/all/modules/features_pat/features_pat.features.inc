<?php
/**
 * @file
 * features_pat.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_pat_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function features_pat_default_entityform_type() {
  $items = array();
  $items['prestador_de_asistencia_t_cnica'] = entity_import('entityform_type', '{
    "type" : "prestador_de_asistencia_t_cnica",
    "label" : "Prestador de Asistencia T\\u00e9cnica",
    "data" : {
      "draftable" : 1,
      "draft_button_text" : "Guardar",
      "draft_save_text" : {
        "value" : "Guardar una copia para modificar luego",
        "format" : "filtered_html"
      },
      "submission_rules" : [],
      "validation_rules" : [],
      "submit_button_text" : "Enviar",
      "submission_page_title" : "Dato registrado",
      "submission_text" : { "value" : "El dato ha sido registrado.", "format" : "filtered_html" },
      "submission_show_submitted" : 1,
      "submissions_view" : "entityforms",
      "user_submissions_view" : "user_entityforms",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "2" : "2", "3" : "3", "1" : 0 },
      "resubmit_action" : "new",
      "access_rules" : [],
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "filtered_html" }
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : []
  }');
  return $items;
}
