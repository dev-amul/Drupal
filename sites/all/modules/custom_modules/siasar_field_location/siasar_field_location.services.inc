<?php


/**
 * Callback for 'location_hierarchy' endpoint.
 * Delivers te number of saved entities by type and bundle.
 *
 * @param string $op
 *   Operation.
 *   'children' => get all children
 *   'ancestors' => get all ancestors (with all children)
 *
 * @param integer $tid
 *   Taxonomy term ID. Defaults to 0 for top level hierarchy.
 *
 * @param string $country
 *   Country ISO2 code. Defaults to 'all'.
 *
 * @return array
 *   Keyed array [bundle_machine_name] => int
 */
function _siasar_field_location_api_children($op, $tid, $country) {
  $tid = (int) $tid;
  $country = ($country == 'all')
    ? 'all'
    : strtoupper($country);

  if ($op == 'children') {
    $result = _siasar_field_location_get_term_list_from_view($tid, $country);
  } elseif ($op == 'ancestors') {
    $result = _siasar_field_location_get_term_ancestors($tid, $country);
  }
  return $result;
}