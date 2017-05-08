<?php
/**
 * @file
 * feature_siasar_measures.features.inc
 */

/**
 * Implements hook_default_units_measure().
 */
function feature_siasar_measures_default_units_measure() {
  $items = array();
  $items['area'] = entity_import('units_measure', '{
    "measure" : "area",
    "label" : "\\u00c1rea",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  $items['concentracion'] = entity_import('units_measure', '{
    "measure" : "concentracion",
    "label" : "Concentraci\\u00f3n",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  $items['diametro'] = entity_import('units_measure', '{
    "measure" : "diametro",
    "label" : "Di\\u00e1metro",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  $items['dotacion'] = entity_import('units_measure', '{
    "measure" : "dotacion",
    "label" : "Dotaci\\u00f3n",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  $items['electrical_conductivity'] = entity_import('units_measure', '{
    "measure" : "electrical_conductivity",
    "label" : "Electrical Conductivity",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  $items['flujo_caudal'] = entity_import('units_measure', '{
    "measure" : "flujo_caudal",
    "label" : "Flujo\\/caudal",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  $items['puntual_coordenada_'] = entity_import('units_measure', '{
    "measure" : "puntual_coordenada_",
    "label" : "Puntual(coordenada)",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  $items['temperature'] = entity_import('units_measure', '{
    "measure" : "temperature",
    "label" : "Temperature",
    "description" : "",
    "converter" : "temperature",
    "rdf_mapping" : []
  }');
  $items['temporalidad'] = entity_import('units_measure', '{
    "measure" : "temporalidad",
    "label" : "Temporalidad",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  $items['turbidity'] = entity_import('units_measure', '{
    "measure" : "turbidity",
    "label" : "Turbidity",
    "description" : "",
    "converter" : "linear",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_units_unit().
 */
function feature_siasar_measures_default_units_unit() {
  $items = array();
  $items['celcius'] = entity_import('units_unit', '{
    "measure" : "temperature",
    "machine_name" : "celcius",
    "label" : "celcius",
    "symbol" : "\\u00b0C",
    "description" : "",
    "factor" : "0",
    "rdf_mapping" : []
  }');
  $items['colony_forming_units_per_100ml'] = entity_import('units_unit', '{
    "measure" : "concentracion",
    "machine_name" : "colony_forming_units_per_100ml",
    "label" : "Colony Forming Units per 100ml",
    "symbol" : "CFU\\/100ml",
    "description" : "",
    "factor" : "0",
    "rdf_mapping" : []
  }');
  $items['micrograms_per_litre'] = entity_import('units_unit', '{
    "measure" : "concentracion",
    "machine_name" : "micrograms_per_litre",
    "label" : "Micrograms per Litre",
    "symbol" : "\\u00b5g\\/L",
    "description" : "",
    "factor" : "0",
    "rdf_mapping" : []
  }');
  $items['microsiemens_per_centimeter'] = entity_import('units_unit', '{
    "measure" : "electrical_conductivity",
    "machine_name" : "microsiemens_per_centimeter",
    "label" : "microsiemens per centimeter",
    "symbol" : "\\u03bcS\\/cm",
    "description" : "",
    "factor" : "0.0001",
    "rdf_mapping" : []
  }');
  $items['nephelometric_turbidity_units'] = entity_import('units_unit', '{
    "measure" : "turbidity",
    "machine_name" : "nephelometric_turbidity_units",
    "label" : "Nephelometric Turbidity Units",
    "symbol" : "NTU",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
