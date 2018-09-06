<?php

require_once dirname(__FILE__) . '/inc/html.inc';
require_once dirname(__FILE__) . '/inc/page.inc';
require_once dirname(__FILE__) . '/inc/menu.inc';
require_once dirname(__FILE__) . '/inc/form.inc';
require_once dirname(__FILE__) . '/inc/entity.inc';
require_once dirname(__FILE__) . '/inc/fields.inc';

/**
 * Implements hook_html_head_alter().
 */
function siasar_material_html_head_alter(&$head_elements) {

}

/**
 * Implements hook_css_alter().
 */
function siasar_material_css_alter(&$css) {
  $css['sites/all/themes/siasar_material/css/style.css']['group'] = 200;
  $css['sites/all/themes/siasar_material/css/print.css']['group'] = 1000;
}

/**
 * Implements hook_preprocess_html().
 */
function siasar_material_preprocess_html(&$vars) {
  _siasar_material_add_meta_viewport();
  _siasar_material_add_http_status_classes_to_body($vars);
  _siasar_material_add_class_to_entityform_view($vars);
  _siasar_material_add_workflow_status_class_to_entityform_edit($vars);
}

/**
 * Implements hook_preprocess_page().
 */
function siasar_material_preprocess_page(&$vars) {
  _siasar_material_process_password_request_page($vars);
  _siasar_material_process_tabs($vars);
}

/**
 * Implementation of hook_preprocess_entity()
 */
function siasar_material_preprocess_entity(&$variables) {
  _siasar_material_suggest_template_for_entity_reference($variables);

  $variables['type_id'] = _siasar_material_create_title_and_id_string($variables);
}


/**
 * Implementation of hook_preprocess_field()
 */
function siasar_material_preprocess_field(&$variables) {
  _siasar_material_add_state_class_to_workflow_field($variables);
}

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
 * Clean up Password form
 */
function siasar_material_form_user_pass_alter(&$form, &$form_state, &$form_id) {
  $class_list = &$form['#attributes']['class'];
  $pos = array_search('card-panel', $class_list);

  if ($pos !== false) {
    unset($class_list[$pos]);
  }
}

/**
 * Theme entire workflow history table.
 */
function siasar_material_workflow_history_table($variables) {
  $header = $variables['header'];
  $rows = $variables['rows'];
  $footer = $variables['footer'];
  $entity = $variables['entity'];
  $entity_type = $variables['entity_type'];
  $column_field_name = 1;
  $column_operations = 6;

  // Remove the Operations column if none are added.
  $empty = TRUE;
  foreach ($rows as $row) {
    $empty &= empty($row['data'][$column_operations]);
  }
  if ($empty) {
    foreach ($rows as &$row) {
      unset($row['data'][$column_operations]);
      unset($header[$column_operations]);
    }
  }

  // Remove the Field name column if only 1 workflow_field exists.
  if (count(_workflow_info_fields($entity, $entity_type)) < 2) {
    foreach ($rows as &$row) {
      unset($row['data'][$column_field_name]);
      unset($header[$column_field_name]);
    }

  }

  $output = '<h2>' . t('Workflow History') . '</h2>';
  $output .= theme('table', array('header' => $header, 'rows' => $rows));
  if ($footer) {
    $output .= MARK_STATE_IS_DELETED . ' ' . t('State is no longer available.');
  }
  return $output;
}
