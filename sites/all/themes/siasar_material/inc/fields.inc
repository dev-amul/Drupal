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
 * Add field status class to field_status field container tag
 */
function _siasar_material_add_state_class_to_workflow_field(&$variables) {
  if($variables['element']['#field_name'] !== 'field_status') return;

  $sid = $variables['element']['#items'][0]['value'];
  $current_status = workflow_state_load_single($sid);
  $variables['classes_array'][] = 'field-status-' . $current_status->name;
  $variables['items'][0]['#markup'] = t($variables['items'][0]['#markup']);
}


/**
 * Alters field_closed_revisions render to include link and date.
 */
function _siasar_material_field_closed_revisions_render(&$variables) {
  if ($variables['element']['#field_name'] != 'field_closed_revisions')
    return;

  $entityform_id = $variables['element']['#object']->entityform_id;

  foreach ($variables['items'] as &$v) {
    $path = base_path() . 'entityform/'. $entityform_id . '/revisions/' . $v['vid'] . '/view';

    $v['#markup'] = l($v['vid'], $path) . ' <span class="date">' . format_date($v['timestamp'], 'short') . '</span>';
  }
}
