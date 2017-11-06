<?php

/**
 * Views filter handler for Entityforms revision field.
 *
 * Class siasar_entityform_revision_filter_handler
 */
class siasar_entityform_revision_filter_handler extends  views_handler_filter {
  /**
   * Override exposed_form().
   * @param $form
   * @param $form_state
   *
   * @return mixed
   */
  function exposed_form(&$form, &$form_state) {
    parent::exposed_form($form, $form_state);

    if (!empty($form_state['exposed'])) {
      $identifier = $this->options['expose']['identifier'];

      $form[$identifier] = array(
        '#type'    => 'select',
        '#title'   => t('Computable'),
        '#options' => array(
          0 => t('Not computable'),
          1 => t('Computable'),
          2 => t('All'),
        ),
        '#default_value' => 2,
      );
    }
    return $form;
  }

  /**
   * Override query().
   */
  function query() {
    $value = (int) reset($this->value);
    //Do not add where clause for option "All"
    if ($value == 2) return;

    $this->ensure_my_table();
    $field = "$this->table_alias.$this->real_field";

    if ($value === 0) {
      $op = 'IS NULL';
    } else {
      $op = 'IS NOT NULL';
    }
    $this->query->add_where($this->options['group'], $field, NULL, $op);

  }

}
