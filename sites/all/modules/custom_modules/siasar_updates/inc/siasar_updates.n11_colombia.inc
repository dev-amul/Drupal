<?php

// This function is to be used ONLY for N11 Colombia.

function siasar_updates_load_n11_colombia_from_csv($source, $test = true) {
  module_load_include('inc', 'siasar_updates', 'inc/siasar_updates.helpers');

  $vid = $test
    ? taxonomy_vocabulary_machine_name_load('prueba')->vid
    : taxonomy_vocabulary_machine_name_load('division_administrativa')->vid;

  $data = _siasar_updates_open_parse_csv($source);
  $codes_depto = load_geographical_codes($data, 1);
  $codes_depto_unique = super_unique($codes_depto);
  $codes_mun = load_geographical_codes($data, 2);
  $codes_mun_unique = super_unique($codes_mun);
  $codes_ver = load_geographical_codes($data, 3);
  $codes_ver_unique = super_unique($codes_ver);
  $deptos_parents = save_depto($codes_depto_unique,$vid);
  $municipio_parents = save_municipio($codes_mun_unique,$deptos_parents,$vid);
  $veredas_parents = save_veredas($codes_ver_unique,$municipio_parents,$vid);

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

  function save_municipio($codes_mun_unique,$deptos_parents,$vid){
    $parent_id_municipios = array();
    foreach ($deptos_parents  as $term){
      $count = 0;
      foreach ($codes_mun_unique as $municipio){
        if($term[$count]->description == $municipio[1]){
            $parent_id_municipios[] =
            array(custom_create_taxonomy_term($municipio[2],$vid,$term[$count]->tid,$municipio[0]));
        }
      }
      $count++;
    }
    return $parent_id_municipios;
  }

  function save_veredas($codes_ver_unique, $municipio_parents, $vid){
    $parent_id_veredas = array();
    foreach ($municipio_parents  as $term){
      $count = 0;
      foreach ($codes_ver_unique as $veredas){
        if($term[$count]->description == $veredas[1]){
            $parent_id_veredas[] =
            array(custom_create_taxonomy_term($veredas[2],$vid,$term[$count]->tid,$veredas[0]));
        }
      }
      $count++;
    }
    return $parent_id_veredas;
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
    if($num == 3){
      if($key[3] != null && $key[3] != ''){
        $codes[] = array($key[3],$key[2],$key[6]);
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

function custom_create_taxonomy_term($name, $vid, $parent_id = 0, $key) {
  //print_r("Key$$$$$$ ". $key."\n");
  $term = new stdClass();
  $term->name = $name;
  $term->vid = $vid;
  $term->description = $key;
  $term->parent = array($parent_id);
  taxonomy_term_save($term);


  if (empty($term->field_pais)) {
    $country = country_load('CO');
    drupal_set_message('Country missing in term id : '.$term->tid . ', name: ' . $term->name. '+++++'.$key);
    $wrapper = entity_metadata_wrapper('taxonomy_term', $term);
    $wrapper->field_pais->set($country);
    $wrapper->field_codigo_division_admin->set($key);
    $wrapper->save();
  }

  return $term;
}
