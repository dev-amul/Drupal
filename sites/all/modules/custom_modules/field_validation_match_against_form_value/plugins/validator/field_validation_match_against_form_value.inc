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
    $value = $this->extract_value_to_match($this->field['field_name']);
    $operator = $settings['operator'];
    $field_type = $this->field['type'];
    $match_value = $this->extract_value_to_match($settings['target_field_machine_name']);

    if (is_numeric($value) && is_numeric($match_value)) {
      $flag = $this->compare_values($value, $operator, $match_value, $field_type);

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
   * Helper function to extract value from target field.
   */
  private function extract_value_to_match($field_to_match) {
    $wrapper = &$this->wrapper;
    $match_value = $wrapper->{$field_to_match}->value();

    if (is_array($match_value) && isset($match_value['value'])) {
      $match_value = $match_value['value'];
    }
    return $match_value;
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
      '#title' => t('Target field machine name'),
      '#description' => t("Field whose value you want to compare to."),
      '#type' => 'textfield',
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
