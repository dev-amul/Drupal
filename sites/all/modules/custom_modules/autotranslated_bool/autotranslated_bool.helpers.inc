<?php

// Helper functions for Autotranslated Bool module


/**
 * Helper function to return array of option strings from type.
 *
 * @param string $type
 * @return array
 */
function _autotranslated_bool_string_list($type = 'yesno') {
    switch($type) {
      case 'onoff':
        $options = array('Off', 'On');
        break;
      case 'truefalse':
        $options = array('False', 'True');
        break;
      case 'yesno':
      default:
        $options = array('No', 'Yes');
  
    }
    return $options;
  }
  
  /**
   * Helper function to get list of options for Autotranslate strings (used by Form API)
   *
   * @param boolean $include_none
   * @return void
   */
  function _autotranslated_bool_get_options_for_form($include_none = false) {
    $options = array();
    if ($include_none) {
      $options['none'] = t('- None -');
    }
    $options['yesno'] = t(AUTOTRANSLATED_BOOL_YESNO);
    $options['truefalse'] = t(AUTOTRANSLATED_BOOL_TRUEFALSE);
    $options['onoff'] = t(AUTOTRANSLATED_BOOL_ONOFF);
  
    return $options;
  }

  /**
   * Helper function to alter form element description to make more sense when Autotranslated Bool is active.
   *
   * @param array $element
   * @return void
   */
  function _autotranslated_bool_adapt_allowed_values_element(array &$element) {
    $notice = t('This value only works if Autotranslated String is set to "None".');
    $element['on']['#description'] = $notice . ' ' . $element['on']['#description'];
    $element['off']['#description'] = $notice . ' ' . $element['off']['#description'];
  }
