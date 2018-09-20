<?php

class I18nUnitStringController extends EntityDefaultI18nStringController {
  /**
   * Defines the menu base path used by self::hook_object_info().
   */
  protected function menuBasePath() {
    $path = parent::menuBasePath();

    $e = &$this->entityInfo;
    $bundle = isset($e['translation']['entity_translation']['bundle argument'])
      ? arg($e['translation']['entity_translation']['bundle argument'])
      : null;
    $bundles = array_keys($e['bundles']);
    $wildcard = '%units_measure_machine_name';

    if(isset($e['admin ui']['path bundle argument position']) && in_array($bundle, $bundles)) {
      $path = str_replace($wildcard, $bundle, $path);
    }

    return $path;
  }
}
