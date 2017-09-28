<?php

function siasar_updates_load_n11_colombia_from_csv($source){


  module_load_include('inc', 'siasar_updates', 'inc/siasar_updates.helpers');
  $vid = taxonomy_vocabulary_machine_name_load('division_administrativa')->vid;

  $data = _siasar_updates_open_parse_csv($source);
  $codes_depto = load_geographical_codes($data, 1);
  $codes_depto_unique = array_unique(array_column($codes_depto, 'id','nombre'));
  $parent_id_array = array();
  dpm("Primer posición");
  //print_r($codes_depto_unique[$key[4]]);
  $codes_mun = load_geographical_codes($data, 2);
  $codes_ver = load_geographical_codes($data, 3);

  $counter = 0;
  foreach($data as $key){
    print_r((string)$key[4]);

    if($key[1] != $codes_depto_unique[(string)$key[4]]){
        $parent_id_array[] = custom_create_taxonomy_term($key[1], $vid, 0);
      }

  //dpm($parent_id_array);

  }

}

    /*$parent_id_mpio =custom_create_taxonomy_term($key[2], $vid, $parent_id_depto);
    $parent_id_vereda = custom_create_taxonomy_term($key[3], $vid, $parent_id_mpio);
    $parent_id_dane_code = custom_create_taxonomy_term($key[4], $vid, $parent_id_dane_code);*/


  //custom_create_taxonomy_term();


function load_geographical_codes($data,  $num){
  $codes = array();
  foreach ($data as $key) {

    if($num == 1){
      if($key[1] != null && $key[1] != '' || $key[4] != null && $key[4] != ''){
        $codes[] = array("id"=>$key[1],"nombre"=>$key[4]);
      }
    }
    if($num == 2){
      //if($key[2] != null && $key[5] != '' && key[2] != null && key[5] != ''){
        $codes[] = array("id"=>$key[2],"nombre"=>$key[5]);
      //}
    }

    if($num == 3){
      //if($key[3] != null && $key[6] != '' && key[3] != null && key[6] != ''){
        $codes[] = array("id"=>$key[3],"nombre"=>$key[6]);
      //}
    }
  }
  return $codes;
}

function custom_create_taxonomy_term($name, $vid, $parent_id = 0) {

  $term->parent = array($parent_id);
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  $term->parent = array($parent_id);
  $term->country = 'CO';
  taxonomy_term_save($term);
  return $term->tid;
}
