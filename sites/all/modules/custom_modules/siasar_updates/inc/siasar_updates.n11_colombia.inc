<?php

// This function is to be used ONLY for N11 Colombia.

function siasar_updates_load_n11_colombia_from_csv($source, $test = true) {
  module_load_include('inc', 'siasar_updates', 'inc/siasar_updates.helpers');

  $vid = $test
    ? taxonomy_vocabulary_machine_name_load('prueba')->vid
    : taxonomy_vocabulary_machine_name_load('division_administrativa')->vid;

  $data = _siasar_updates_open_parse_csv($source);
  $codes_depto = _siasar_updates_load_geographical_codes($data, 1);
  $codes_depto_unique = _siasar_updates_super_unique($codes_depto);
  $codes_mun = _siasar_updates_load_geographical_codes($data, 2);
  $codes_mun_unique = _siasar_updates_super_unique($codes_mun);
  $codes_ver = _siasar_updates_load_geographical_codes($data, 3);
  $codes_ver_unique = _siasar_updates_super_unique($codes_ver);

  $deptos_parents = _siasar_updates_save_depto($codes_depto_unique,$vid);
  $municipio_parents = _siasar_updates_save_municipio($codes_mun_unique,$deptos_parents,$vid);
  $veredas_parents = _siasar_updates_save_veredas($codes_ver_unique,$municipio_parents,$vid);

  $total_terms = count($deptos_parents) + count($municipio_parents) + count($veredas_parents);
  drupal_set_message($total_terms . ' terms saved.');

}

function _siasar_updates_save_depto($array, $vid) {
  $parent_id_array = array();
  foreach ($array as $values) {
    foreach ($values as $key => $value) {
      $parent_id_array[] = array(
        custom_create_taxonomy_term($value, $vid, 0, $key)
      );
    }
  }
  return $parent_id_array;
}

function _siasar_updates_save_municipio($codes_mun_unique,$deptos_parents,$vid) {
  $parent_id_municipios = array();

  foreach ($deptos_parents as $term) {
    $count = 0;
    foreach ($codes_mun_unique as $municipio) {
      if ($term[$count]->field_codigo_division_admin[LANGUAGE_NONE]['0']['value'] == $municipio[1]) {
        $parent_id_municipios[] = array(
          custom_create_taxonomy_term($municipio[2], $vid, $term[$count]->tid, $municipio[0])
        );
      }
    }
    $count++;
  }
  return $parent_id_municipios;
}

function _siasar_updates_save_veredas($codes_ver_unique, $municipio_parents, $vid) {
  $parent_id_veredas = array();
  foreach ($municipio_parents as $term) {
    $count = 0;
    foreach ($codes_ver_unique as $veredas) {
      if ($term[$count]->field_codigo_division_admin[LANGUAGE_NONE]['0']['value'] == $veredas[1]) {
        $parent_id_veredas[] = array(
          custom_create_taxonomy_term($veredas[2], $vid, $term[$count]->tid, $veredas[0])
        );
      }
    }
    $count++;
  }
  return $parent_id_veredas;
}


function _siasar_updates_load_geographical_codes($data, $num){
  $codes = array();

  foreach ($data as $key) {
    switch ($num) {
      case 1:
        if ($key[1] != null && $key[1] != '') {
          $codes[] = array($key[1] => $key[4]);
        }
        break;
      case 2:
      case 3:
        if ($key[$num] != null && $key[$num] != '') {
          $codes[] = array($key[$num], $key[$num - 1], $key[$num + 3]);
        }
        break;
    }
  }
  return $codes;
}

function _siasar_updates_super_unique($array){
  $result = array_map("unserialize", array_unique(array_map("serialize", $array)));
  return $result;
}

function custom_create_taxonomy_term($name, $vid, $parent_id = 0, $key) {

    static $country = null;

    $country = $country
      ? $country
      : country_load('CO');

    $term = new stdClass();
    $term->name = $name;
    $term->vid = $vid;
    $term->parent = array($parent_id);
    $term->field_pais[LANGUAGE_NONE]['0']['value'] = $country;
    $term->field_codigo_division_admin[LANGUAGE_NONE]['0']['value'] = $key;
    taxonomy_term_save($term);

    return $term;
  }
