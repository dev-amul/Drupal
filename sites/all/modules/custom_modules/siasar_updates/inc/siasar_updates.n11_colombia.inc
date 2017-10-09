<?php

function siasar_updates_load_n11_colombia_from_csv($source){


  module_load_include('inc', 'siasar_updates', 'inc/siasar_updates.helpers');

  $vid = taxonomy_vocabulary_machine_name_load('division_administrativa')->vid;
  $data = _siasar_updates_open_parse_csv($source);
  $codes_depto = load_geographical_codes($data, 1);
  $codes_depto_unique = super_unique($codes_depto);
  $codes_mun = load_geographical_codes($data, 2);
  $codes_mun_unique = super_unique($codes_mun);
  //$codes_ver = load_geographical_codes($data, 3);
  $deptos_parents = save_depto($codes_depto_unique,$vid);
  //print_r(sizeof($deptos_parents)."\n");
  //dpm($deptos_parents);
  //dpm($codes_mun_unique);
  //dpm($deptos_parents);
  save_municipio($codes_mun_unique,$deptos_parents);
  //

}

function save_depto($array,$vid){
  $parent_id_array = array();
  foreach($array as $key => $val){
    foreach ($val as $key => $value) {
      $parent_id_array[] = array(custom_create_taxonomy_term($value, $vid, 0,$key));
    }
  }
  return $parent_id_array;
}

  function save_municipio($codes_mun_unique,$deptos_parents){
    dpm($codes_mun_unique);
    dpm($deptos_parents);

    foreach ($deptos_parents  as $key){
      print_r($key[0]->tid);
      foreach ($codes_mun_unique as $key){
            print_r("Resumen de la jornada " . $key[1]."\n");


          }
      }
      //print_r($key[0]->tid."\n");

    }


/*$parent_id_mpio =custom_create_taxonomy_term($key[2], $vid, $parent_id_depto);
$parent_id_vereda = custom_create_taxonomy_term($key[3], $vid, $parent_id_mpio);
$parent_id_dane_code = custom_create_taxonomy_term($key[4], $vid, $parent_id_dane_code);*/


//custom_create_taxonomy_term();

function load_geographical_codes($data,  $num){
  $codes =array();

  foreach ($data as $key) {
    if($num == 1){
      if($key[1] != null && $key[1] != ''){
        $codes[] = array($key[1] => $key[4]);
      }
      //}
    }
    if($num == 2){
      if($key[2] != null && $key[2] != ''){
        $codes[] = array($key[2],$key[1],$key[5]);
      }
      //}
    }
  }
  return $codes;
}

function super_unique($array){
  $result = array_map("unserialize", array_unique(array_map("serialize", $array)));
  return $result;
}

/*function set_data_wraper($term, $country, $key){
  $wrapper = entity_metadata_wrapper('taxonomy_term', $entity);
  $wrapper->field_pais->set($country);
  $wrapper->field_codigo_division_admin->set($key);
  $wrapper->save();
}*/


function custom_create_taxonomy_term($name, $vid, $parent_id = 0, $key) {
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  $term->description = $key;
  $term->parent = array($parent_id);
  taxonomy_term_save($term);
  /*$wrapper = entity_metadata_wrapper('taxonomy_term', $term);
  $wrapper->field_pais->set($country);
  $wrapper->field_codigo_division_admin->set($key);
  $wrapper->save();*/
  return $term;
}
