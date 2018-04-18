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
   * Implements resourceInfo
   *
   * @see ServicesResourceControllerInterface::resourceInfo()
   */
  public function resourceInfo($entity_type) {
    $info = parent::resourceInfo($entity_type);

    if ($entity_type == 'entityform') {

      $info['index']['args'][] = array(
        'name' => 'computable',
        'optional' => TRUE,
        'type' => 'string',
        'description' => 'Whether to deliver only computable entities (1), not computable (0), or both (all). Applies only to entityforms.',
        'default value' => '1',
        'source' => array('param' => 'computable'),
      );
      $info['index']['args'][] = array(
        'name' => 'changed_from',
        'optional' => TRUE,
        'type' => 'string',
        'description' => 'Delivers only entities that were changed from a timestamp. Applies only to entityforms.',
        'default value' => '',
        'source' => array('param' => 'changed_from'),
      );
      $info['index']['args'][] = array(
        'name' => 'changed_to',
        'optional' => TRUE,
        'type' => 'string',
        'description' => 'Delivers only entities that were changed until a timestamp. Applies only to entityforms.',
        'default value' => '',
        'source' => array('param' => 'changed_to'),
      );
    }

    return $info;
  }

  /**
   * Implements ServicesResourceControllerInterface::index().
   */
  public function index($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction) {
    try {
      if ($entity_type == 'entityform') {
        $args = func_get_args();
        $return = call_user_func_array(array($this, 'indexEntityform'), $args);
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
   * @param $computable
   * @param $changed_from
   * @param $changed_to
   *
   * @return array
   */
  public function indexEntityform($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction, $computable, $changed_from, $changed_to) {
    $property_info = entity_get_all_property_info($entity_type);
    $parameters = $this->transform_values($entity_type, $property_info, $parameters);
    $sort = (isset($property_info['field_' . $sort]))
      ? 'field_' . $sort
      : $sort;

    // Call the parent method, which takes care of access control.
    $entities = $this->servicesEntityFormControllerIndex($entity_type, '*', $parameters, $page, $pagesize, $sort, $direction, $computable, $changed_from, $changed_to);
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
   * @param $computable
   * @param $changed_from
   * @param $changed_to
   *
   * @return array|mixed
   * @throws \ServicesException
   */
  public function servicesEntityFormControllerIndex($entity_type, $fields, $parameters, $page, $pagesize, $sort, $direction, $computable, $changed_from, $changed_to) {
    // Make sure the pagesize is not too large.
    $max_pagesize = variable_get('services_entity_max_pagesize', 100);
    $pagesize = ($max_pagesize < $pagesize) ? $max_pagesize : $pagesize;

    // Build an EFQ based on the arguments.
    $query = new EntityFieldQuery();
    $query
      ->entityCondition('entity_type', $entity_type)
      ->range($page * $pagesize, $pagesize)
      ->addTag('services_index_' . $entity_type);

    if (!empty($parameters)) {
      foreach ($parameters as $field => $value) {
        $this->propertyQueryOperation($entity_type, $query, 'Condition', $field, $value);
      }
    }
    if ($sort != '') {
      $direction = ($direction == 'DESC') ? 'DESC' : 'ASC'; // Ensure a valid direction
      $this->propertyQueryOperation($entity_type, $query, 'OrderBy', $sort, $direction);
    }

    if ($changed_from) {
      $query->propertyCondition('changed', $changed_from, '>=');
    }
    if ($changed_to) {
      $query->propertyCondition('changed', $changed_to, '<=');
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
