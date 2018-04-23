<?php

/**
 * @file
 * Provides EntityformRevisions metadata integration.
 */

/**
 * Exposes the revision_changed and the revision_uid properties.
 */
class EntityformRevisionsMetadataController extends EntityformMetadataController {

  public function __construct($type) {
    parent::__construct($type);
  }

  public function entityPropertyInfo() {
    $info = parent::entityPropertyInfo();
    $properties = &$info[$this->type]['properties'];

    $properties['revision_changed'] = array(
      'label' => t("Date changed"),
      'type' => 'date',
      'getter callback' => 'entity_property_verbatim_get',
      'setter callback' => 'entity_property_verbatim_set',
      'schema field' => 'revision_changed',
      'description' => t("The date the form was most recently updated."),
    );

    $properties['revision_uid'] = array(
      'label' => t("Owner of the revision."),
      'type' => 'user',
      'description' => t("The user who created the form revision."),
      'getter callback' => 'entity_property_verbatim_get',
      'setter callback' => 'entity_property_verbatim_set',
      'setter permission' => 'administer entityform types',
      'required' => TRUE,
      'schema field' => 'revision_uid',
    );

    return $info;
  }
}
