<?php

function siasar_updates_load_n11_colombia_from_csv($source){


  module_load_include('inc', 'siasar_updates', 'inc/siasar_updates.helpers');
  $vid = taxonomy_vocabulary_machine_name_load('division_administrativa')->vid;
  $data = _siasar_updates_open_parse_csv($source);
  $codes = load_geographical_codes($data);
  dpm($codes);
  foreach($data as $key){

    $parent_id_depto = custom_create_taxonomy_term($key[1], $vid, null);
    $parent_id_mpio =custom_create_taxonomy_term($key[2], $vid, $parent_id_depto);
    $parent_id_vereda = custom_create_taxonomy_term($key[3], $vid, $parent_id_mpio);
    $parent_id_dane_code = custom_create_taxonomy_term($key[4], $vid, $parent_id_dane_code);

  }

  dpm("VOCABULARY ID ".$vid);
  //custom_create_taxonomy_term();
}

function load_geographical_codes($data){

  foreach ($data as $key) {
    //taxonomy_term_load($id);
    //$codes = array();
    //dpm($key[1], $key[4]);
    //$codes[] = array("id_depto"=>$key[1],"nombre"=>$key[4]);
    $codes[] = array("id"=>$key[1],"nombre"=>$key[4]);
    $lista_simple = array_values(array_unique($codes));
    //codes_mun = array($key[2] => $key[5]);
    //$codes_ver = array($key[3] => $key[6]);
    //$codes = array_unique($codes);
  }
  return $lista_simple;
}

function custom_create_taxonomy_term($name, $vid, $parent_id = 0) {

  $term->parent = array($parent_id);
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  $term->parent = array($parent_id);
  taxonomy_term_save($term);
  return $term->tid;
}
