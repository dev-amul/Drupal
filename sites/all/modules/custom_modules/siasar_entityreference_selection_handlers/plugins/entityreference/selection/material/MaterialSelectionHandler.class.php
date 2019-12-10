<?php

/**
 * Harmony Thread selection handler.
 */
class MaterialSelectionHandler extends EntityReference_SelectionHandler_Generic {

  /**
   * Implements EntityReferenceHandler::getInstance().
   */
  public static function getInstance($field, $instance = NULL, $entity_type = NULL, $entity = NULL) {
    return new MaterialSelectionHandler($field, $instance, $entity_type, $entity);
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

    $res = db_query(
      "SELECT entityform.entityform_id AS entityform_id, name.field_entity_name_value as value
      FROM {entityform}
      LEFT JOIN {field_data_field_pais} field_data_field_pais ON entityform.entityform_id = field_data_field_pais.entity_id AND (field_data_field_pais.entity_type = 'entityform' AND field_data_field_pais.deleted = '0')
      INNER JOIN {field_data_field_entity_name} name ON entityform.entityform_id = name.entity_id and entityform.type = name.bundle AND name.entity_type = 'entityform' AND name.deleted = '0'
      WHERE (( (field_data_field_pais.field_pais_iso2 = '" . $country_iso2 . "') )
      AND(( (entityform.type IN  ('sistema')) )))"
    );

    foreach ($res->fetchAll() as $item) {
      $options["sistema"][(int) $item->entityform_id] = $item->value;
    }

    return $options;
  }

}
