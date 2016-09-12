<?php

function _services_fc_set_entity_wrapper_field_values(&$wrapper, $field_collection) {
  foreach($field_collection as $key => $value) {
    if(strpos($key, 'field_') === 0 && $key !== 'field_name') {
      $wrapper->{$key}->set($value);
    }
  }
}