<?php
/**
 * @file
 * feature_siasar_field_bases.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_siasar_field_bases_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_units_unit().
 */
function feature_siasar_field_bases_default_units_unit() {
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
  $items['cent_metro'] = entity_import('units_unit', '{
    "measure" : "diametro",
    "machine_name" : "cent_metro",
    "label" : "Cent\\u00edmetro",
    "symbol" : "cm",
    "description" : "",
    "factor" : "0.01",
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
  $items['miligramos_por_litro'] = entity_import('units_unit', '{
    "measure" : "concentracion",
    "machine_name" : "miligramos_por_litro",
    "label" : "miligramos por litro",
    "symbol" : "mg\\/l",
    "description" : "",
    "factor" : "6",
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
  $items['partes_por_millon'] = entity_import('units_unit', '{
    "measure" : "concentracion",
    "machine_name" : "partes_por_millon",
    "label" : "partes por mill\\u00f3n",
    "symbol" : "ppm",
    "description" : "",
    "factor" : "6",
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
