<?php

/**
 * Implements hook_drush_command().
 * We define a new Drush command here.
 */
function siasar_drush_migrate_drush_command() {

  $items['siasar-migrate-entityforms'] = array(
    'description'        => 'It helps migrate legacy content to Drupal using the API by taking JSON objects and saving them as entityforms with their field collections.',
    'aliases'            => array('siasar-me'),
    'callback'           => 'siasar_drush_migrate_create_entityforms',
    'arguments'          => array(
      '$path' => 'Path to read source files and store log files'
    ),
    'required-arguments' => TRUE,
    'examples'           => array(
      'drush siasar-me entityforms field_collections' => 'Takes all entityforms found in source as JSON and creates new entityforms',
    ),
    'bootstrap'          => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  $items['siasar-delete-entityforms'] = array(
    'description'        => 'It helps to delete Drupal content stored as entityforms using the API',
    'aliases'            => array('siasar-de'),
    'callback'           => 'siasar_drush_delete_entityforms',
    'arguments'          => array(
      '$path' => 'Path of source file'
    ),
    'required-arguments' => TRUE,
    'examples'           => array(
      'drush siasar-de entityforms_ids' => 'Takes all entityform ids found in source as JSON and deletes them',
    ),
    'bootstrap'          => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  $items['siasar-delete-field-collections'] = array(
    'description'        => 'It deletes field collections attached to an specified entity',
    'aliases'            => array('siasar-dfc'),
    'callback'           => 'siasar_drush_migrate_delete_field_collections',
    'arguments'          => array(
      'entity_type' => 'Entity type machine name',
      'field'       => 'Machine name of the field containing reference to field collections',
      'entity_id'   => 'Entity ID'
    ),
    'required-arguments' => TRUE,
    'examples'           => array(
      'drush siasar-dfc entityform field_banana 140' => 'Deletes all "field_banana" field collections from entityform ID 140',
    ),
    'bootstrap'          => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  $items['siasar-delete-field-collections-json'] = array(
    'description'        => 'It deletes field collections attached to an specified entity. Input in JSON format.',
    'aliases'            => array('siasar-dfcj'),
    'callback'           => 'siasar_drush_migrate_delete_field_collections_json',
    'arguments'          => array(
      'dir' => 'Resources directory',
    ),
    'required-arguments' => TRUE,
    'examples'           => array(
      'drush siasar-dfc /path/to/resources/directory' => 'Deletes all field collections specified in a json file inside "/path/to/resources/directory" called collections_info.json',
    ),
    'bootstrap'          => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

/**
 * The function deletes entityforms provided by a static JSON file.
 */
function siasar_drush_delete_entityforms($path) {
  $entityforms_ids = json_decode(file_get_contents($path), TRUE);

  set_time_limit(0);
  module_load_include('inc', 'services', '/includes/services.runtime');

  _print_log('Deleting entities...');
  _print_log('Forms to be deleted: ' . count($entityforms_ids));
  entityform_delete_multiple($entityforms_ids);
  _print_log('Finishing deleting process...');

}

/**
 * This function creates entityforms from JSON file provided as a text file.
 */
function siasar_drush_migrate_create_entityforms($path) {
  module_load_include('inc', 'siasar_drush_migrate', 'inc/siasar_drush_migrate.helpers');

  $start = new DateTime('now');

  set_time_limit(0);
  module_load_include('inc', 'services', '/includes/services.runtime');

  $controller_entityform            = _services_entity_get_controller('entityform');
  $controller_field_collection_item = _services_entity_get_controller('field_collection_item');

  _print_log('Reading files...');

  $communities_file = $path . '/communities.json';
  $systems_file     = $path . '/systems.json';
  $providers_file   = $path . '/providers.json';

  $community_collections_file = $path . '/community_collections.json';
  $system_collections_file    = $path . '/system_collections.json';
  $provider_collections_file  = $path . '/provider_collections.json';

  $loader = function (&$array, $key, $file) {
    $content = @file_get_contents($file);

    if ($content) {
      $array[$key] = json_decode($content, TRUE);
    }
  };

  $entities = array();

  $loader($entities, 'systems', $systems_file);
  $loader($entities, 'providers', $providers_file);
  $loader($entities, 'communities', $communities_file);

  $collections = array();

  $loader($collections, 'systems', $system_collections_file);
  $loader($collections, 'providers', $provider_collections_file);
  $loader($collections, 'communities', $community_collections_file);

  $result = array(
    'summary'     => array(
      'start' => $start->format("Y-m-d H:i:s")
    ),
    'entities'    => array(
      'communities' => array(
        'success' => [],
        'errors'  => []
      ),
      'systems'     => array(
        'success' => [],
        'errors'  => []
      ),
      'providers'   => array(
        'success' => [],
        'errors'  => []
      )
    ),
    'collections' => array(
      'communities' => [],
      'systems'     => [],
      'providers'   => []
    )
  );

  _print_log('Processing entities...');

  foreach ($entities as $entity_type => $items) {
    _print_log('Processing ' . $entity_type . '...');
    foreach ($items as $key => $entity) {
      try {
        $entity_id                                                          = _siasar_drush_migrate_save_entityform_from_json(array_diff_key(
          $entity, ['id_siasar1' => NULL]), $controller_entityform);
        $result['entities'][$entity_type]['success'][$entity['id_siasar1']] = $entity_id;
      } catch (Exception $e) {
        $result['entities'][$entity_type]['errors'][] = array(
          'id'    => $entity['id_siasar1'],
          'name'  => $entity['field_entity_name'],
          'error' => $e->getMessage()
        );
      }
      if ($key !== 0 && $key % 100 === 0) {
        _print_log($key . ' ' . $entity_type . ' entities proccesed.');
      }
    }
    _print_log($key . ' ' . $entity_type . ' entities proccesed.');
  }

  _print_log('Processing collections...');

  foreach ($collections as $entity_type => $items) {
    _print_log('Processing ' . $entity_type . ' collections...');
    foreach ($items as $key => $collection) {
      $collection_name = $collection['name'];
      if (!isset($result['collections'][$entity_type][$collection_name])) {
        $result['collections'][$entity_type][$collection_name] = array(
          'success' => [],
          'errors'  => []
        );
      }

      $old_id = $collection['host_entity']['id'];
      try {
        // Find new entity id
        $entity_id = $result['entities'][$entity_type]['success'][$old_id];
        if (!$entity_id) {
          throw new Exception('Entity ID not found: ' . $old_id);
        }
        $collection['host_entity']['id'] = $entity_id;

        // Find new system parent id
        if ($collection['field_system_ref']) {
          $parent_id = $collection['field_system_ref'];
          if (!$parent_id) {
            throw new Exception('System parent ID not found: ' . $parent_id);
          }
          $collection['field_system_ref'] = $result['entities']['systems']['success'][$parent_id];
        }

        // Find new provider parent id
        if ($collection['field_prestador_servicio']) {
          $parent_id = $collection['field_prestador_servicio'];
          if (!$parent_id) {
            throw new Exception('Provider parent ID not found: ' . $parent_id);
          }
          $collection['field_prestador_servicio'] = $result['entities']['providers']['success'][$parent_id];
        }

        // Insert collection
        $collection_id = _siasar_drush_migrate_save_field_collection_item_from_json(
          $collection, $controller_field_collection_item);

        // Log result
        $result['collections'][$entity_type][$collection_name]['success'][$collection_id] = $entity_id;
      } catch (Exception $e) {
        $result['collections'][$entity_type][$collection_name]['errors'][] = array(
          'entity_id' => $old_id,
          'error'     => $e->getMessage()
        );
      }
      if ($key !== 0 && $key % 100 === 0) {
        _print_log($key . ' ' . $entity_type . ' collections proccesed.');
      }
    }
    _print_log($key . ' ' . $entity_type . ' collections proccesed.');
  }

  _print_log('Writing logs...');

  $end = new DateTime('now');

  $result['summary']['end']  = $end->format('Y-m-d H:i:s');
  $result['summary']['time'] = $start->diff($end)->format('%H:%I:%S');

  foreach ($result['entities'] as $entity_type => $items) {
    $result['summary']['entities'][$entity_type] = array(
      'success' => count($items['success']),
      'errors'  => count($items['errors'])
    );
  }

  foreach ($result['collections'] as $entity_type => $entity_collections) {
    foreach ($entity_collections as $collection_name => $items) {
      $result['summary']['collections'][$entity_type][$collection_name] = array(
        'success' => count($items['success']),
        'errors'  => count($items['errors'])
      );
    }
  }

  file_put_contents($path . '/log_summary.json', json_encode($result['summary']));
  file_put_contents($path . '/log_entities.json', json_encode($result['entities']));
  file_put_contents($path . '/log_collections.json', json_encode($result['collections']));
}


function siasar_drush_migrate_delete_field_collections($entity_name, $entity_field, $entity_id) {
  $entityform = entity_load_single($entity_name, $entity_id);
  $wrapper    = entity_metadata_wrapper($entity_name, $entityform);

  $field_collections = $wrapper->${entity_field}->value();

  if (!$field_collections) {
    drupal_set_message('Nothing to do, aborting');
    return;
  }

  foreach ($field_collections as $target) {
    if (get_class($target) != 'FieldCollectionItemEntity') {
      continue;
    }

    $target->delete();
  }

  $wrapper->${entity_field}->set(NULL);
  $wrapper->save();

  drupal_set_message('Removed ' . count($field_collections) . ' items from field ' . $entity_field . ' for entity ' . $entity_name . ' ID: ' . $entity_id);

  return TRUE;
}

/**
 * Read a file and decode it. Foreach form_id try to delete all its field
 * collections associated to a certain field.
 *
 * @param $directory
 */
function siasar_drush_migrate_delete_field_collections_json($directory) {
  $file          = $directory . '/collections_info.json';
  $response_json = array();
  $content       = @file_get_contents($file);

  $response_json = array();

  if ($content) {
    $arry_json = json_decode($content, TRUE);
    foreach ($arry_json as $id => $element) {
      $deletion           = siasar_drush_migrate_delete_field_collections('entityform', $element, $id);
      $response_json[$id] = $deletion ? 'ok' : 'Error';
    }
  }

  file_put_contents($directory . '/collections_output.json', json_encode($response_json));
}