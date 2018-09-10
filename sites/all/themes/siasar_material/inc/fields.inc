<?php


/**
 * Implementation of theme_field()
 *
 * @param array $variables
 * @return string
 */
function siasar_material_field($variables) {
  $output = '';

  // Render the label, if it's not hidden.
  if (!$variables['label_hidden']) {
    $output .= '<div class="field-label"' . $variables['title_attributes'] . '>' . $variables['label'] . ':&nbsp;</div>';
  }

  $items_tag = ($variables['element']['#field_type'] === 'field_collection')
    ? 'ol'
    : 'div';

  // Render the items.
  $output .= '<' . $items_tag . ' class="field-items"' . $variables['content_attributes'] . '>';

  if (count($variables['items']) > 1) {
    foreach ($variables['items'] as $delta => $item) {
      $classes = 'field-item ' . ($delta % 2 ? 'odd' : 'even');
      $output .= '<div class="' . $classes . '"' . $variables['item_attributes'][$delta] . '>' . drupal_render($item) . '</div>';
    }
  } else {
    $output .= drupal_render($variables['items'][0]);
  }
  $output .= '</' . $items_tag . '>';

  // Render the top-level DIV.
  $output = '<div class="' . $variables['classes'] . '"' . $variables['attributes'] . '>' . $output . '</div>';

  return $output;
}

/**
 * Implementation of hook_field_widget_form_alter()
 *
 * @param array $element
 * @param array $form_state
 * @param array $context
 * @return void
 */
function siasar_material_field_widget_form_alter(&$element, &$form_state, $context) {
  $fieldname = $context['field']['field_name'];
  $entity = $context['instance']['bundle'];
  $string = &$element['#title'];
  $string_context = "field:${fieldname}:${entity}:label";

  $translated_string = i18n_string_translate($string_context, $string);

  $targets = _siasar_material_field_widget_populate_label_targets($element);

  foreach($targets as &$t) {
    $t = $translated_string;
  }
}

/**
 * Helper function to populate the list of places where the field label can be.
 *
 * @param array $element
 * @return array
 */
function _siasar_material_field_widget_populate_label_targets(&$element) {
  $targets = array();
  if(isset($element['#title'])) {
    $targets[] = &$element['#title'];
  }
  if(isset($element['geom']['#title'])) {
    $targets[] = &$element['geom']['#title'];
  }
  if(isset($element['value']['#title'])) {
    $targets[] = &$element['value']['#title'];
  }
  if(isset($element[0]['#title'])) {
    $targets[] = &$element[0]['#title'];
  }

  return $targets;
}

/**
 * Add field status class to field_status field container tag
 */
function _siasar_material_add_state_class_to_workflow_field(&$variables) {
  if($variables['element']['#field_name'] !== 'field_status') return;

  $sid = $variables['element']['#items'][0]['value'];
  $current_status = workflow_state_load_single($sid);
  $variables['classes_array'][] = 'field-status-' . $current_status->name;
  $variables['items'][0]['#markup'] = t($variables['items'][0]['#markup']);
}
