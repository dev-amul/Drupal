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
  $items['a_o'] = entity_import('units_unit', '{
    "measure" : "temporalidad",
    "machine_name" : "a_o",
    "label" : "A\\u00f1os",
    "symbol" : "ano",
    "description" : "",
    "factor" : "365.242",
    "rdf_mapping" : []
  }');
  $items['celcius'] = entity_import('units_unit', '{
    "measure" : "temperature",
    "machine_name" : "celcius",
    "label" : "celcius",
    "symbol" : "\\u00b0C",
    "description" : "",
    "factor" : "0",
    "rdf_mapping" : []
  }');
  $items['cent_metro'] = entity_import('units_unit', '{
    "measure" : "diametro",
    "machine_name" : "cent_metro",
    "label" : "Cent\\u00edmetro",
    "symbol" : "cm",
    "description" : "",
    "factor" : "0.01",
    "rdf_mapping" : []
  }');
  $items['colony_forming_units_per_100ml'] = entity_import('units_unit', '{
    "measure" : "concentracion",
    "machine_name" : "colony_forming_units_per_100ml",
    "label" : "Colony Forming Units per 100ml",
    "symbol" : "CFU\\/100ml",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  $items['dia'] = entity_import('units_unit', '{
    "measure" : "temporalidad",
    "machine_name" : "dia",
    "label" : "D\\u00edas",
    "symbol" : "dia",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  $items['galones_por_minuto'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "galones_por_minuto",
    "label" : "Galones por minuto",
    "symbol" : "gln\\/min",
    "description" : "",
    "factor" : "0.2271",
    "rdf_mapping" : []
  }');
  $items['galones_por_persona_diario'] = entity_import('units_unit', '{
    "measure" : "dotacion",
    "machine_name" : "galones_por_persona_diario",
    "label" : "Galones por persona diario",
    "symbol" : "gppd",
    "description" : "",
    "factor" : "0.003785",
    "rdf_mapping" : []
  }');
  $items['litros_por_dia'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "litros_por_dia",
    "label" : "Litros por d\\u00eda",
    "symbol" : "l\\/d",
    "description" : "",
    "factor" : "24000",
    "rdf_mapping" : []
  }');
  $items['litros_por_hora'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "litros_por_hora",
    "label" : "Litros por hora",
    "symbol" : "l\\/h",
    "description" : "",
    "factor" : "1000",
    "rdf_mapping" : []
  }');
  $items['litros_por_minutos'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "litros_por_minutos",
    "label" : "Litros por minutos",
    "symbol" : "l\\/min",
    "description" : "",
    "factor" : "16.67",
    "rdf_mapping" : []
  }');
  $items['litros_por_persona_diario'] = entity_import('units_unit', '{
    "measure" : "dotacion",
    "machine_name" : "litros_por_persona_diario",
    "label" : "Litros por persona diario",
    "symbol" : "lppd",
    "description" : "",
    "factor" : "0.001",
    "rdf_mapping" : []
  }');
  $items['litros_por_segundo'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "litros_por_segundo",
    "label" : "Litros por segundo",
    "symbol" : "l\\/s",
    "description" : "",
    "factor" : "0.2778",
    "rdf_mapping" : []
  }');
  $items['mes'] = entity_import('units_unit', '{
    "measure" : "temporalidad",
    "machine_name" : "mes",
    "label" : "Meses",
    "symbol" : "mes",
    "description" : "",
    "factor" : "29.53",
    "rdf_mapping" : []
  }');
  $items['metro_c_bico_por_persona_diario'] = entity_import('units_unit', '{
    "measure" : "dotacion",
    "machine_name" : "metro_c_bico_por_persona_diario",
    "label" : "Metro c\\u00fabico por persona diario",
    "symbol" : "m\\u00b3\\/per-dia",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  $items['metros_cubicos'] = entity_import('units_unit', '{
    "measure" : "volume",
    "machine_name" : "metros_cubicos",
    "label" : "Metros c\\u00fabicos",
    "symbol" : "m\\u00b3",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  $items['metros_cubicos_por_dia'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "metros_cubicos_por_dia",
    "label" : "Metros c\\u00fabicos por d\\u00eda",
    "symbol" : "m\\u00b3\\/d",
    "description" : "",
    "factor" : "24",
    "rdf_mapping" : []
  }');
  $items['metros_cubicos_por_hora'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "metros_cubicos_por_hora",
    "label" : "Metros c\\u00fabicos por hora",
    "symbol" : "m\\u00b3\\/h",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  $items['metros_cubicos_por_minuto'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "metros_cubicos_por_minuto",
    "label" : "Metros c\\u00fabicos por minuto",
    "symbol" : "m\\u00b3\\/min",
    "description" : "",
    "factor" : "0.01667",
    "rdf_mapping" : []
  }');
  $items['metros_cubicos_por_segundo'] = entity_import('units_unit', '{
    "measure" : "flujo_caudal",
    "machine_name" : "metros_cubicos_por_segundo",
    "label" : "Metros c\\u00fabicos por segundo",
    "symbol" : "m\\u00b3\\/s",
    "description" : "",
    "factor" : "0.0002778",
    "rdf_mapping" : []
  }');
  $items['micrograms_per_litre'] = entity_import('units_unit', '{
    "measure" : "concentracion",
    "machine_name" : "micrograms_per_litre",
    "label" : "Micrograms per Litre",
    "symbol" : "\\u00b5g\\/L",
    "description" : "",
    "factor" : "0.001",
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
  $items['miligramos_por_litro'] = entity_import('units_unit', '{
    "measure" : "concentracion",
    "machine_name" : "miligramos_por_litro",
    "label" : "miligramos por litro",
    "symbol" : "mg\\/l",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  $items['milimetro'] = entity_import('units_unit', '{
    "measure" : "diametro",
    "machine_name" : "milimetro",
    "label" : "Mil\\u00edmetro",
    "symbol" : "mm",
    "description" : "",
    "factor" : "0.001",
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
  $items['partes_por_millon'] = entity_import('units_unit', '{
    "measure" : "concentracion",
    "machine_name" : "partes_por_millon",
    "label" : "partes por mill\\u00f3n",
    "symbol" : "ppm",
    "description" : "",
    "factor" : "1",
    "rdf_mapping" : []
  }');
  $items['pies_cubicos'] = entity_import('units_unit', '{
    "measure" : "volume",
    "machine_name" : "pies_cubicos",
    "label" : "Pies c\\u00fabicos",
    "symbol" : "pie\\u00b3",
    "description" : "",
    "factor" : "0.0283179",
    "rdf_mapping" : []
  }');
  $items['pulgada'] = entity_import('units_unit', '{
    "measure" : "diametro",
    "machine_name" : "pulgada",
    "label" : "Pulgada",
    "symbol" : "\\u0027\\u0027",
    "description" : "",
    "factor" : "0.3048",
    "rdf_mapping" : []
  }');
  $items['semana'] = entity_import('units_unit', '{
    "measure" : "temporalidad",
    "machine_name" : "semana",
    "label" : "Semanas",
    "symbol" : "sem",
    "description" : "",
    "factor" : "7",
    "rdf_mapping" : []
  }');
  $items['yardas'] = entity_import('units_unit', '{
    "measure" : "length",
    "machine_name" : "yardas",
    "label" : "Millas",
    "symbol" : "mi",
    "description" : "",
    "factor" : "1609.34",
    "rdf_mapping" : []
  }');
  return $items;
}
