<?php

const UNWANTED_CHARS = [
  'Š'=>'S', 'š'=>'s', 'Ž'=>'Z', 'ž'=>'z', 'À'=>'A', 'Á'=>'A', 'Â'=>'A', 'Ã'=>'A', 'Ä'=>'A', 'Å'=>'A', 'Æ'=>'A', 'Ç'=>'C', 'È'=>'E', 'É'=>'E',
  'Ê'=>'E', 'Ë'=>'E', 'Ì'=>'I', 'Í'=>'I', 'Î'=>'I', 'Ï'=>'I', 'Ñ'=>'N', 'Ò'=>'O', 'Ó'=>'O', 'Ô'=>'O', 'Õ'=>'O', 'Ö'=>'O', 'Ø'=>'O', 'Ù'=>'U',
  'Ú'=>'U', 'Û'=>'U', 'Ü'=>'U', 'Ý'=>'Y', 'Þ'=>'B', 'ß'=>'Ss', 'à'=>'a', 'á'=>'a', 'â'=>'a', 'ã'=>'a', 'ä'=>'a', 'å'=>'a', 'æ'=>'a', 'ç'=>'c',
  'è'=>'e', 'é'=>'e', 'ê'=>'e', 'ë'=>'e', 'ì'=>'i', 'í'=>'i', 'î'=>'i', 'ï'=>'i', 'ð'=>'o', 'ñ'=>'n', 'ò'=>'o', 'ó'=>'o', 'ô'=>'o', 'õ'=>'o',
  'ö'=>'o', 'ø'=>'o', 'ù'=>'u', 'ú'=>'u', 'û'=>'u', 'ý'=>'y', 'þ'=>'b', 'ÿ'=>'y'
];

function _siasar_updates_open_parse_csv($source, $absolute = FALSE) {
  if ($absolute) {
    $path = drupal_realpath($source);
  }
  else {
    $path = DRUPAL_ROOT . '/sites/all/modules/custom_modules/siasar_updates/files/' . $source;
  }

  $file = fopen($path, 'r');
  $entries = array();
  $entries_count;

  while ($entries[] = fgetcsv($file, 0, ",", '"'));

  $entries_count = count($entries);

  if (!$entries[$entries_count - 1]) {
    unset ($entries[$entries_count - 1]);
  }
  return $entries;
}

/**
 * Helper function to retrieve all forms with invalid users assigned.
 *
 * @return array
 *   Array with entityforms IDs.
 */
function _get_orphan_entityforms() {
  $anonymous_ef = _get_anonymous_entityforms();
  $orphan_ef = _get_user_orphan_entityforms();

  if (!empty($anonymous_ef) && !empty($orphan_ef)) {
    $results = array_merge($anonymous_ef, $orphan_ef);
  }
  elseif (!empty($anonymous_ef)) {
    $results = $anonymous_ef;
  }
  else {
    $results = $orphan_ef;
  }

  return $results;
}

/**
 * Extract all forms without user.
 *
 * @return mixed
 */
function _get_anonymous_entityforms() {
  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'entityform');
  $query->propertyCondition('uid', NULL, "IS NULL");

  $results = $query->execute();

  return $results['entityform'];
}

/**
 * Get all forms with invalid user ID.
 *
 * @return mixed
 */
function _get_user_orphan_entityforms() {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'user');
  $users = $query->execute()['user'];
  $users_ids = array_keys($users);

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'entityform');
  $query->propertyCondition('uid', $users_ids, 'NOT IN');

  $results = $query->execute()['entityform'];

  return $results;
}

/**
 * Get all field collection wrong in con_system_ wrong.
 *
 * @return mixed
 */
function _get_a5_wrong_field_collection() {

  // Get values to exclude from the update.
  $excluded_results = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                                        LEFT OUTER JOIN field_data_field_com_viv_con_sistnva ON field_collection_item.item_id = field_data_field_com_viv_con_sistnva.entity_id
                                        LEFT OUTER JOIN field_data_field_system_ref ON field_collection_item.item_id = field_data_field_system_ref.entity_id
                                        LEFT OUTER JOIN field_data_field_prestador_servicio ON field_collection_item.item_id = field_data_field_prestador_servicio.entity_id
                                        WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                                        AND field_data_field_com_viv_con_sistnva.field_com_viv_con_sistnva_value=0
                                        AND field_data_field_system_ref.field_system_ref_target_id ISNULL
                                        AND field_data_field_prestador_servicio.field_prestador_servicio_target_id ISNULL");

  $excluded_results = $excluded_results->fetchAllKeyed(0, 0);

  // Find all values that are invalid for A5 field.
  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                LEFT OUTER JOIN field_data_field_prestador_servicio ON field_collection_item.item_id = field_data_field_prestador_servicio.entity_id
                WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                AND field_data_field_prestador_servicio.entity_id ISNULL
                AND field_collection_item.item_id NOT IN (:eforms_excluded)", [':eforms_excluded' => $excluded_results]);

  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                LEFT OUTER JOIN field_data_field_system_ref ON field_collection_item.item_id = field_data_field_system_ref.entity_id
                WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                AND field_data_field_system_ref.entity_id ISNULL
                AND field_collection_item.item_id NOT IN (:eforms_excluded)", [':eforms_excluded' => $excluded_results]);

  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                LEFT OUTER JOIN field_data_field_com_viv_con_sistnva ON field_collection_item.item_id = field_data_field_com_viv_con_sistnva.entity_id
                WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                AND field_data_field_com_viv_con_sistnva.entity_id ISNULL
                AND field_collection_item.item_id NOT IN (:eforms_excluded)", [':eforms_excluded' => $excluded_results]);

  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                                 LEFT OUTER JOIN field_data_field_com_viv_con_sistnva ON field_collection_item.item_id = field_data_field_com_viv_con_sistnva.entity_id
                                 LEFT OUTER JOIN field_data_field_system_ref ON field_collection_item.item_id = field_data_field_system_ref.entity_id
                                 LEFT OUTER JOIN field_data_field_prestador_servicio ON field_collection_item.item_id = field_data_field_prestador_servicio.entity_id
                                 WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                                 AND field_data_field_com_viv_con_sistnva.field_com_viv_con_sistnva_value=0
                                 AND field_data_field_system_ref.field_system_ref_target_id NOTNULL
                                 AND field_data_field_prestador_servicio.field_prestador_servicio_target_id ISNULL");

  $queries[] = db_query("SELECT field_collection_item.item_id FROM field_collection_item
                                 LEFT OUTER JOIN field_data_field_com_viv_con_sistnva ON field_collection_item.item_id = field_data_field_com_viv_con_sistnva.entity_id
                                 LEFT OUTER JOIN field_data_field_system_ref ON field_collection_item.item_id = field_data_field_system_ref.entity_id
                                 LEFT OUTER JOIN field_data_field_prestador_servicio ON field_collection_item.item_id = field_data_field_prestador_servicio.entity_id
                                 WHERE field_collection_item.field_name = 'field_com_viv_con_sistema'
                                 AND field_data_field_com_viv_con_sistnva.field_com_viv_con_sistnva_value=0
                                 AND field_data_field_system_ref.field_system_ref_target_id ISNULL
                                 AND field_data_field_prestador_servicio.field_prestador_servicio_target_id NOTNULL");

  $field_collections = [];

  foreach ($queries as $query) {
    $aux = $field_collections;
    $field_collections = array_merge($query->fetchAllAssoc('item_id'), $aux);
  }

  $field_collections = array_map(function ($o) {
    return $o->item_id;
  }, $field_collections);

  // Remove possible duplicate values.
  $field_collections = array_unique($field_collections);

  return $field_collections;
}

/**
 * Get entities with A5 field wrong
 *
 * @return mixed
 */
function _get_entities_with_a5_field_wrong() {
  $field_collections = _get_a5_wrong_field_collection();
  $migrate_users = [522, 526, 523, 528, 521];

  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', 'entityform')
    ->propertyCondition('type', 'comunidad', '=')
    ->propertyCondition('uid', $migrate_users, 'NOT IN')
    ->fieldCondition('field_status', 'value', '4', '=')
    ->fieldCondition('field_com_viv_con_sistema', 'value', $field_collections, 'IN');

  $results = $query->execute();

  return $results['entityform'];
}

/**
 * Find N11 item filtered by all level names.
 *
 * @param $level1
 *   Level 1 admin name.
 * @param $level2
 *   Level 2 admin name.
 * @param $level3
 *   Level 3 admin name.
 *
 * @return
 */
function _get_n11_item_by_name($level1, $level2, $level3) {
  $query = "SELECT c3.tid, namel3.field_transliterated_name_value
            FROM taxonomy_term_data AS parent
            INNER JOIN taxonomy_term_hierarchy l1 on parent.tid = l1.tid and l1.parent = 0
            LEFT JOIN taxonomy_term_hierarchy l2 on l2.parent = l1.tid
            LEFT JOIN taxonomy_term_data c2 on c2.tid = l2.tid
            LEFT JOIN field_data_field_transliterated_name AS namel2 ON namel2.entity_id = c2.tid
            LEFT JOIN taxonomy_term_hierarchy l3 on l3.parent = l2.tid
            LEFT JOIN taxonomy_term_data c3 on c3.tid = l3.tid
            LEFT JOIN field_data_field_transliterated_name AS namel3 ON namel3.entity_id = c3.tid
            INNER JOIN field_data_field_pais AS pais ON pais.entity_id = parent.tid
            LEFT JOIN field_data_field_transliterated_name AS transliterated ON transliterated.entity_id = parent.tid
            WHERE pais.field_pais_iso2 = 'CO'
            AND parent.vid = 2
            AND UPPER(transliterated.field_transliterated_name_value) = :level1
            AND UPPER(namel2.field_transliterated_name_value) = :level2
            AND UPPER(namel3.field_transliterated_name_value) = :level3";

  $dbquery = db_query($query, array(':level1' => $level1, ':level2' => $level2, ':level3' => $level3));

  return $dbquery->fetchAll();
}

/**
 * Write csv on a given path with given rows.
 *
 * @param $path
 *   File path to create.
 * @param $rows
 *   Rows to write in csv file.
 */
function _write_csv($path, $rows) {
  // Open file.
  $file = fopen(drupal_realpath($path), 'w');

  // Write all rows as csv.
  foreach ($rows as $row) {
    fputcsv($file, $row);
  }

  // Close file.
  fclose($file);

  // Set message with url to download the final file.
  drupal_set_message('Download csv ' . l(t('here'), file_create_url($path)));
}

/**
 * @param $country_code
 * @param int $init
 * @param int $limit
 * @param bool $count
 *
 * @return mixed
 */
function _get_n11_terms($country_code, $count = FALSE, $init = NULL, $limit = NULL) {
  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'taxonomy_term');
  $query->propertyCondition('vid', 2);
  $query->fieldCondition('field_pais', 'iso2', $country_code, '=');

  if (!empty($init) && !empty($limit)) {
    $query->range($init, $limit);
  }
  elseif (!empty($init) && empty($limit)) {
    $query->range($init);
  }
  elseif (empty($init) && !empty($limit)) {
    $query->range(0, $limit);
  }

  if ($count) {
    $query->count();
  }

  $query->entityOrderBy('entity_id');

  return $query->execute();
}

function _sanitize_division_name($name) {
  $name = strtoupper(strtr($name, UNWANTED_CHARS));
  $name = str_replace(['EL', 'LA', 'LOS', 'LAS', 'VEREDA', 'VEREDAS'], '', $name);
  $name = trim($name);
  $name = str_replace(' ', '_', $name);

  return $name;
}

/**
 * Get all terms that are used in some entityform.
 *
 * @param array $countries
 *   Optional array to filter the query.
 *
 * @return array
 */
function _get_used_divisions($countries = []) {
  if (empty($countries)) {
    $query = db_query("SELECT DISTINCT field_entidad_local_tid FROM field_data_field_entidad_local da
              WHERE da.entity_type = 'entityform';");
  }
  else {
    $query = db_query("SELECT DISTINCT field_entidad_local_tid FROM field_data_field_entidad_local da
              INNER JOIN field_data_field_pais pais ON da.entity_id = pais.entity_id
              WHERE da.entity_type = 'entityform'
              AND pais.field_pais_iso2 IN (:countries);", [':countries' => $countries]);
  }

  $results = $query->fetchAll();

  if (!empty($results)) {
    $results = array_map(
      function ($item) { return $item->field_entidad_local_tid; },
      $results
    );
  }

  $used_terms = [];

  // Find all parents of the returned terms and add it to the final array.
  foreach ($results as $term_id) {
    $parents = taxonomy_get_parents_all($term_id);
    if (!empty($parents)) {
      $parents = array_map(
        function ($item) { return $item->tid; },
        $parents
      );

      foreach ($parents as $parent) {
        if (!in_array($parent, $used_terms)) {
          $used_terms[] = $parent;
        }
      }
    }
  }

  return $used_terms;
}

/**
 * Add new terms to N11 taxonomy.
 *
 * @param $data
 *   Array with data to add. The structure is:
 *   [[COUNTRY, Level 1, Level 2, Level N, Division code]]
 * @param bool $ignore_division_code
 *   Flag to ignore division code and dont add it.
 *
 * @return int
 *   Number of new terms created.
 */
function _insert_n11_divisions($data, $ignore_division_code = FALSE) {
  $created_terms = 0;
  foreach ($data as $division) {
    $country = array_shift($division);
    if (!$ignore_division_code) {
      $division_code = array_pop($division);
    }

    // Get the last index.
    $last = count($division) - 1;
    // Process division hierarchy. Create terms if not exists.
    $parent = 0;
    foreach ($division as $index => $level) {
      // Sanitize level name.
      $level_sanitized = _sanitize_division_name($level);
      // Find level in database.
      $tid = _get_n11_term_by_transliterated_name($country, $level_sanitized, $parent);

      if (empty($tid)) {
        // Create term.
        $term = new stdClass();
        $term->name = $level;
        $term->vid = 2;
        $term->parent = array($parent);
        $term->field_pais[LANGUAGE_NONE][0]['iso2'] = $country;
        $term->field_transliterated_name[LANGUAGE_NONE][0]['value'] = $level_sanitized;
        // If this is the last item, and we have a division code, assign it to
        // the division level.
        if (!$ignore_division_code && $index === $last) {
          $term->field_codigo_division_admin[LANGUAGE_NONE][0]['value'] = $division_code;
        }

        taxonomy_term_save($term);
        $created_terms++;

        $tid = $term->tid;
      }
      else {
        $tid = current($tid);
      }

      $parent = $tid;
    }
  }

  return $created_terms;
}

/**
 * Find division by it transliterated name.
 *
 * @param $country
 *   Country code.
 * @param $name
 *   Division name.
 * @param $parent
 *   Division parent.
 *
 * @return array
 *   TID of the division, empty array if not exist.
 */
function _get_n11_term_by_transliterated_name($country, $name, $parent) {
  $query = "SELECT ttd.tid FROM taxonomy_term_data ttd
            JOIN taxonomy_term_hierarchy tth ON tth.tid = ttd.tid
            LEFT JOIN field_data_field_transliterated_name tn ON tn.entity_id = ttd.tid AND tn.entity_type = 'taxonomy_term' AND tn.bundle = 'division_administrativa'
            LEFT JOIN field_data_field_pais fp ON fp.entity_id = ttd.tid AND fp.entity_type = 'taxonomy_term' AND fp.bundle = 'division_administrativa'
            WHERE fp.field_pais_iso2 = :country
            AND tn.field_transliterated_name_value = :name
            AND tth.parent = :parent;";

  $select = db_query($query,[
    ':country' => $country,
    ':name' => $name,
    ':parent' => $parent,
  ]);

  $results = $select->fetchAll();
  $results = array_map(function ($item) {
    return $item->tid;
  }, $results);

  return $results;
}
