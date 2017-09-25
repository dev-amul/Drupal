<?php

function siasar_updates_load_n11_colombia_from_csv($source){
  echo $source;
  module_load_include('inc', 'siasar_updates', 'inc/siasar_updates.helpers');
  $data = _siasar_updates_open_parse_csv($source);
  var_dump($data);
}

function custom_create_taxonomy_term($name, $vid, $parent_id = 0) {$term->parent = array($parent_id)
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  $term->parent = array($parent_id);
  taxonomy_term_save($term);
  $term->name = $encanto;
  $term->vid = $vid;
  $term->parent = array($parent_id)
  return $term->tid;
}
