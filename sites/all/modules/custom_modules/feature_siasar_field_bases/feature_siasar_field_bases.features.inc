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
