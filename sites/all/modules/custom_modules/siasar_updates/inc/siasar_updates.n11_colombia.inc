<?php

function siasar_updates_load_n11_colombia_from_csv($source){


  module_load_include('inc', 'siasar_updates', 'inc/siasar_updates.helpers');
  $vid = taxonomy_vocabulary_machine_name_load('division_administrativa')->vid;
  $data = _siasar_updates_open_parse_csv($source);
  dpm($data);
  custom_create_taxonomy_term();
}


function custom_create_taxonomy_term() {/*$name, $vid, $parent_id = 0 $term->parent = array($parent_id)
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  $term->parent = array($parent_id);
  taxonomy_term_save($term);
  $term->name = $encanto;
  $term->vid = $vid;
  $term->parent = array($parent_id)
  return $term->tid;*/
  print_r("Entró al metodo de creacion de taxonomía");
  $vid = taxonomy_vocabulary_machine_name_load('division_administrativa')->vid;
  echo "<h1>".$vid."</h1>";

}
