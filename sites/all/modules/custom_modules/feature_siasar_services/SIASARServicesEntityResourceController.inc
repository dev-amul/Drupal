<?php

/**
 * @file Class SIASARServicesEntityResourceController
 */

/**
 * Class SIASARServicesEntityResourceController
 *
 * Controller that handles empty endpoints without retrieving a 404
 */
class SIASARServicesEntityResourceController extends ServicesEntityResourceControllerClean {

  /**
   * Implements ServicesResourceControllerInterface::index().
   */
  public function index($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction) {
    try {
      $return =  parent::index($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction);
    } catch (ServicesException $e) {
      if ($e->getCode() === 404) {
        $return = array();
      } else {
        throw $e;
      }
    }
    return $return;
  }
}