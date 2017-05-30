<?php
/**
 * @file
 * Field validation "match against form value" validator.
 *
 */
$plugin = array(
  'label' => t('Match against form value'),
  'description' => t('Verifies that user-entered values fulfill certain criteria when compared to another field\'s value in the form. It currently processes numeric and date fields.'),
  'handler' => array(
    'class' => 'field_validation_match_against_form_value',
  ),
);

class field_validation_match_against_form_value extends field_validation_validator {

  /**
   * Validate field.
   */
  public function validate() {
    $this->wrapper = entity_metadata_wrapper($this->entity_type, $this->entity);
    $this->validation_status = $this->generate_validation_status_object();
    $settings = $this->rule->settings;
    $value = $this->get_field_value($this->field['field_name']);
    $operator = $settings['operator'];
    $match_value = $this->get_target_value($settings['target_field_machine_name']);

    if ($this->validation_status->error) {
      drupal_set_message($this->validation_status->message, $this->validation_status->type);
    } elseif (is_numeric($value) && is_numeric($match_value)) {
      $is_a_match = $this->compare_values($value, $operator, $match_value);

      if (!$is_a_match) {
        $token = array(
          '[target_field_machine_name]' => isset($settings['target_field_machine_name']) ? $settings['target_field_machine_name'] : '',
          '[operator]' => isset($settings['operator']) ? $settings['operator'] : '',
        );
        $this->set_error($token);
      }
    }
  }

  /**
   * Helper function that makes all possible comparisons
   */
  private function compare_values($value, $operator, $match_value) {
    switch ($operator) {
      case 'same':
        $flag = ($value == $match_value);
        break;
      case 'different':
        $flag = ($value <> $match_value);
        break;
      case 'greater':
        $flag = ($value > $match_value);
        break;
      case 'lower':
        $flag = ($value < $match_value);
        break;
      case 'greater_equal':
        $flag = ($value >= $match_value);
        break;
      case 'lower_equal':
        $flag = ($value <= $match_value);
        break;
    }
    return $flag;
  }


  /**
   * Helper function to parse target expression and pass it to the computer function for a result.
   */
  private function get_target_value($expression) {
    $expression = trim(preg_replace('/\t+/', '', $expression));
    $pattern = '/[a-zA-Z0-9_.]+/';
    $result = preg_match_all($pattern, $expression, $split);

    if ($result > 0) {
      return $this->process_math_expression($expression, $split[0]);
    } else {
      $this->set_error();
      return false;
    }
  }

  /**
   * Helper function to process the mathematical expression and return a value
   */
  private function process_math_expression($expression, $fields) {
    foreach ($fields as $f) {
      $value = $this->get_field_value($f);
      $value = ($value == (int) $value)
        ? (int) $value
        : (float) $value;
      $expression = preg_replace('/\b' . $f . '\b/', $value, $expression);
    }

    $result = eval('$out = ' . $expression . '; return $out;');
    return $result;
  }

  /**
   * Helper function to extract value from target field.
   */
  private function get_field_value($field) {
    $value = $this->wrapper->{$field}->value();
    $ignore_if_blank = isset($this->rule->settings['ignore_rule_if_blank_value'])
      ? (bool) $this->rule->settings['ignore_rule_if_blank_value']
      : false;

    if (is_array($value) && isset($value['value'])) {
      $value = $value['value'];
    }
    return $value;
  }

  /**
   * Helper function to generate initial validation_status object
   */
  private function generate_validation_status_object() {
    $object = new StdClass();
    $object->error = false;
    $object->type = null;
    $object->message = null;
    return $object;
  }

  /**
   * Provide settings option
   */
  function settings_form(&$form, &$form_state) {
    $default_settings = $this->get_default_settings($form, $form_state);
    $operator_options = array(
      'same' => t('same as'),
      'different' => t('different to'),
      'greater' => t('greater than'),
      'lower' => t('lower than'),
      'greater_equal' => t('greater or equal to'),
      'lower_equal' => t('lower or equal to'),
    );

    $form['settings']['operator'] = array(
      '#title' => t('Operator'),
      '#description' => t("Current value should be ... target value"),
      '#options' => $operator_options,
      '#type' => 'select',
      '#default_value' => isset($default_settings['operator']) ? $default_settings['operator'] : '',
    );
    $form['settings']['target_field_machine_name'] = array(
      '#title' => t('Target field or math rule'),
      '#description' => t("Field or fields whose value you want to compare to. You can write the name of a single field, or you can write a math expression, such as [field1 + field2 + field3]"),
      '#type' => 'textarea',
      '#default_value' => isset($default_settings['target_field_machine_name']) ? $default_settings['target_field_machine_name'] : '',
    );
    $form['settings']['ignore_rule_if_blank_value'] = array(
      '#title' => t('Ignore the whole rule if any of the target values is blank'),
      '#type' => 'checkbox',
      '#default_value' => isset($default_settings['ignore_rule_if_blank_value']) ? $default_settings['ignore_rule_if_blank_value'] : 0,
    );

    parent::settings_form($form, $form_state);
  }

  /**
   * Provide token help info for error message.
   */
  public function token_help() {
    $token_help = parent::token_help();
    $token_help += array(
      '[target-field]' => t('target field'),
      '[operator]' => t('Operator'),
    );
    return $token_help;
  }
}
