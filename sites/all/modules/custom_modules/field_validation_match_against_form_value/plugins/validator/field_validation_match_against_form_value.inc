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
    $settings = $this->rule->settings;
    $value = $this->get_field_value($this->field['field_name']);
    $operator = $settings['operator'];
    $match_value = $this->get_target_value($settings['target_field_machine_name']);

    if (is_numeric($value) && is_numeric($match_value)) {
      $flag = $this->compare_values($value, $operator, $match_value);

      if (!$flag) {
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

    return $this->get_field_value($expression);
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
      $expression = str_replace($f, $value, $expression);
    }

    $result = eval('$out = ' . $expression . '; return $out;');
    return $result;
  }

  /**
   * Helper function to extract value from target field.
   */
  private function get_field_value($field) {
    $value = $this->wrapper->{$field}->value();

    if (is_array($value) && isset($value['value'])) {
      $value = $value['value'];
    }
    return $value;
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
      '#type' => 'textfield',
      '#size' => 125,
      '#default_value' => isset($default_settings['target_field_machine_name']) ? $default_settings['target_field_machine_name'] : '',
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
