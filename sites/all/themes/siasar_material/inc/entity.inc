<?php


/**
 * Adds template suggestion for entityreference
 *
 * @param array $variables
 * @return void
 */
function _siasar_material_suggest_template_for_entity_reference(&$variables) {
  $els = $variables['elements'];
  if ($els['#entity_type'] !== 'entityform' || $els['#view_mode'] !== 'entity_reference') return;

  $suggestions = &$variables['theme_hook_suggestions'];
  $ours = "entityform__entityreference";

  array_splice($suggestions, 1, 0, $ours);
}

function _siasar_material_create_title_and_id_string(&$variables) {
  $els = &$variables['elements'];
  if ($els['#entity_type'] !== 'entityform' || $els['#view_mode'] !== 'full') return;

  $entityform = &$els['#entity'];
  $entityform_type = entityform_type_load($entityform->type);
  $entityname_text = '';

  if(isset($entityform->field_entity_name[LANGUAGE_NONE][0]['safe_value'])) {
    $entityname_text = ' "' . $entityform->field_entity_name[LANGUAGE_NONE][0]['safe_value'] . '"';
  }
  $string = $entityform->entityform_id . ': ' . $entityform_type->getTranslation('label') . $entityname_text;

  return $string;
}

/**
 * Add changed date to info variables.
 *
 * @param $variables
 */
function _siasar_material_add_last_change_date(&$variables) {
  if (!empty($variables['entityform']->changed)) {
    // Format changed date.
    $formatted_changed_date = format_date($variables['entityform']->changed);
    // Build the translatable string.
    $changed_string = t("Last change on @date", ["@date" => $formatted_changed_date]);

    // Add data to info.
    $variables['content']['info']['user']['#markup'] = $variables['content']['info']['user']['#markup'] . ". " . $changed_string;
  }
}
