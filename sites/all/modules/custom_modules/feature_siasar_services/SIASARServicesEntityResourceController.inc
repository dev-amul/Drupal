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
      if ($entity_type == 'entityform') {
        $return = $this->indexEntityform($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction);
      } else {
        $return = parent::index($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction);
      }

    } catch (ServicesException $e) {
      if ($e->getCode() === 404) {
        $return = array();
      } else {
        throw $e;
      }
    }
    return $return;
  }

  /**
   * We need to tag the query for limit the results to get all the computable entities.
   *
   * @param $entity_type
   * @param $fields
   * @param $parameters
   * @param $page
   * @param $pagesize
   * @param $sort
   * @param $direction
   *
   * @return array
   */
  public function indexEntityform($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction) {
    $property_info = entity_get_all_property_info($entity_type);
    $parameters = $this->transform_values($entity_type, $property_info, $parameters);
    $sort = (isset($property_info['field_' . $sort]))?'field_' . $sort:$sort;

    // Call the parent method, which takes care of access control.
    $entities = $this->servicesEntityFormControllerIndex($entity_type, '*', $parameters, $page, $pagesize, $sort, $direction);
    foreach($entities as $entity) {
      $return[] = $this->get_data(entity_metadata_wrapper($entity_type, $entity), $fields);
    }
    return $return;
  }

  /**
   * Copied from ServicesEntityFormController. We need a tag for this query.
   *
   * @param $entity_type
   * @param $fields
   * @param $parameters
   * @param $page
   * @param $pagesize
   * @param $sort
   * @param $direction
   *
   * @return array|mixed
   */
  public function servicesEntityFormControllerIndex($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction) {
    // Make sure the pagesize is not too large.
    $max_pagesize = variable_get('services_entity_max_pagesize', 100);
    $pagesize = ($max_pagesize < $pagesize) ? $max_pagesize : $pagesize;

    // Build an EFQ based on the arguments.
    $query = new EntityFieldQuery();
    $query
      ->entityCondition('entity_type', $entity_type)
      ->range($page * $pagesize, $pagesize)
      ->addTag('services_index_' . $entity_type
      );

    if (!empty($parameters)) {
      foreach ($parameters as $field => $value) {
        $this->propertyQueryOperation($entity_type, $query, 'Condition', $field, $value);
      }
    }
    if ($sort != '') {
      $direction = ($direction == 'DESC') ? 'DESC' : 'ASC'; // Ensure a valid direction
      $this->propertyQueryOperation($entity_type, $query, 'OrderBy', $sort, $direction);
    }

    $result = $query->execute();

    if (empty($result)) {
      return services_error(t('No entities found.'), 404);
    }
    // Convert to actual entities.
    $entities = entity_load($entity_type, array_keys($result[$entity_type]));

    foreach ($entities as $id => $entity) {
      if (entity_access('view', $entity_type, $entity)) {
        // Users get special treatment to remove sensitive data.
        if ($entity_type == 'user') {
          // Use the helper that Services module already has.
          services_remove_user_data($entity);
        }

        $return[] = $this->limit_fields($entity, $fields);
      }
    }

    // The access check may have resulted in there being no entities left.
    if (empty($return)) {
      return services_error(t('No entities found.'), 404);
    }

    return $return;
  }
}