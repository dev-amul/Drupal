<?php

/**
 * Harmony Thread selection handler.
 */
class PrestadorDeServicioSelectionHandler extends EntityReference_SelectionHandler_Generic {

  /**
   * Implements EntityReferenceHandler::getInstance().
   */
  public static function getInstance($field, $instance = NULL, $entity_type = NULL, $entity = NULL) {
    return new PrestadorDeServicioSelectionHandler($field, $instance, $entity_type, $entity);
  }

  /**
   * Implements EntityReferenceHandler::settingsForm().
   */
  public static function settingsForm($field, $instance) {
    $entity_info = entity_get_info($field['settings']['target_type']);

    // Merge-in default values.
    $field['settings']['handler_settings'] += [
      'target_bundles' => [],
      'sort' => [
        'type' => 'none',
      ],
    ];


    if ($entity_info["entity class"] !== 'Entityform') {
      $form['warning'] = [
        '#type' => 'markup',
        '#markup' => t('This entity selector only works for "Entity submission"'),
      ];
    }

    $form['target_bundles'] = [
      '#type' => 'value',
      '#value' => [],
    ];


    $form['target_bundles'] = [
      '#type' => 'value',
      '#value' => [],
    ];


    return $form;
  }


  /**
   * Implements EntityReferenceHandler::getReferencableEntities().
   */
  public function getReferencableEntities($match = NULL, $match_operator = 'CONTAINS', $limit = 0) {
    $options = [];
    global $user;
    $account = user_load($user->uid);
    $country_iso2 = $account->field_pais['und'][0]['iso2'];

    // Get user division terms to filter the query.
    if (!empty($account->field_entidad_local)) {
      $division = $account->field_entidad_local['und'][0]['tid'];
      $terms = taxonomy_get_tree(2, $division);
      $child = array_map(function ($item) { return $item->tid; }, $terms);
      $child[] = $division;
    }

    // If the user has an administrative division assigned, filter by it value.
    if (empty($child)) {
      $query = "SELECT entityform.entityform_id AS entityform_id, name.field_entity_name_value as value
      FROM {entityform}
      LEFT JOIN {field_data_field_pais} field_data_field_pais ON entityform.entityform_id = field_data_field_pais.entity_id AND (field_data_field_pais.entity_type = 'entityform' AND field_data_field_pais.deleted = '0')
      INNER JOIN {field_data_field_entity_name} name ON entityform.entityform_id = name.entity_id and entityform.type = name.bundle AND name.entity_type = 'entityform' AND name.deleted = '0'
      WHERE field_data_field_pais.field_pais_iso2 = :country
      AND entityform.type IN  ('prestador_de_servicio')";
    }
    else {
      $query = "SELECT entityform.entityform_id AS entityform_id, name.field_entity_name_value as value
      FROM {entityform}
      LEFT JOIN {field_data_field_pais} field_data_field_pais ON entityform.entityform_id = field_data_field_pais.entity_id AND (field_data_field_pais.entity_type = 'entityform' AND field_data_field_pais.deleted = '0')
      LEFT JOIN {field_data_field_entidad_local} field_data_field_entidad_local ON entityform.entityform_id = field_data_field_entidad_local.entity_id AND (field_data_field_entidad_local.entity_type = 'entityform' AND field_data_field_entidad_local.deleted = '0')
      INNER JOIN {field_data_field_entity_name} name ON entityform.entityform_id = name.entity_id and entityform.type = name.bundle AND name.entity_type = 'entityform' AND name.deleted = '0'
      WHERE field_data_field_pais.field_pais_iso2 = :country
      AND field_data_field_entidad_local.field_entidad_local_tid IN (:terms)
      AND entityform.type IN  ('prestador_de_servicio')";
    }

    $res = db_query($query, [':country' => $country_iso2, ':terms' => (!empty($child)) ? $child : []]);

    foreach ($res->fetchAll() as $item) {
      $options["prestador_de_servicio"][(int) $item->entityform_id] = $item->value;
    }

    return $options;
  }

}
