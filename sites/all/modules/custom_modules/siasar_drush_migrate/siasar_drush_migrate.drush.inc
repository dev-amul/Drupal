<?php

/**
 * Implements hook_drush_command().
 */
function siasar_drush_migrate_drush_command() {

  $items['siasar-migrate-entityforms'] = array(
    'description' => 'It helps migrate legacy content to Drupal using the API by taking JSON objects and saving them as entityforms with their field collections.',
    'aliases' => array('siasar-me'),
    'callback' => 'siasar_drush_migrate_create_entityforms',
    'arguments' => array(
      'entityforms' => 'Source for entityforms',
      'field_collections' => 'Source for Field collections',
    ),
    'required-arguments' => true,
    'examples' => array(
      'drush siasar-me entityforms field_collections' => 'Takes all entityforms found in source as JSON and creates new entityforms',
    ),
    'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
  );

  return $items;
}

// Drush siasar_drush_migrate_drush_command
/*
It can be run from Devel PHP console using this:

module_load_include('inc', 'siasar_drush_migrate', 'siasar_drush_migrate.drush');
siasar_drush_migrate_create_entityforms();
*/
function siasar_drush_migrate_create_entityforms($entityforms = null, $field_collections = null) {
  set_time_limit(0);

  module_load_include('inc', 'services', '/includes/services.runtime');

  //drupal_set_message('Old is ' . $old);

  $method = 'create';
  $entity_type = 'entityform';
  $controller = _services_entity_get_controller($entity_type);

  // Loop to load all entityforms should start here ---
  $entityform = _siasar_drush_migrate_demo_entityform();
  if (isset($entityform['field_pais'])) {
    $entityform['field_pais'] = country_load($entityform['field_pais']);
  }

  $args = array('entityform', $entityform);
  $result = call_user_func_array(array($controller, $method), $args);

  // Loop should end here. Result ID can be found at: $result['entityform_id']
  $result = $result;
}

// delivers a demo entityform for testing purposes
function _siasar_drush_migrate_demo_entityform() {
  $demo_entityform = '{
    "field_rating_s1": "426715",
    "field_reforestacion": 32036,
    "field_proteccion_terreno": 32036,
    "field_revision_estado_obra": 32036,
    "field_proteccion_suelos": 32037,
    "field_sumatoria_gastos_reales": {
      "value": 0,
      "target_id": 609
    },
    "field_gasto_real_ambientales": {
      "value": 0,
      "target_id": 609
    },
    "field_gasto_real_mantenimiento": {
      "value": 0,
      "target_id": 609
    },
    "field_gasto_real_operacion": {
      "value": 0,
      "target_id": 609
    },
    "field_gasto_promedio_admin": {
      "value": 0,
      "target_id": 609
    },
    "field_fecha_aplicacion": 1392073200,
    "field_tipo_de_tarifa": 32019,
    "field_entity_name": "Banana Banana",
    "field_fecha_creacion": 1300575600,
    "field_fecha_eleccion": 1297638000,
    "field_miembros_nombrados": 1,
    "field_numero_reuniones": 1,
    "field_tarifa_media_mensual": {
      "value": 25,
      "target_id": 609
    },
    "field_facturacion_promedio": {
      "value": 0,
      "target_id": 609
    },
    "field_ingresos_reales": {
      "value": 0,
      "target_id": 609
    },
    "field__cuenta_con_fondos_disponi": 1,
    "field_balance_contable": 1,
    "field_cuenta_banco": 1,
    "field_usuarios_al_dia": 0,
    "field_rinde_cuentas": 1,
    "field_acta_rendicion_cuentas": 1,
    "field_higiene_comunitaria": 1,
    "field_reglamento_servicios": 32033,
    "field_apoyo_gob_otros": 1,
    "field_libro_ingresos_egresos": 1,
    "field_comentarios": null,
    "field_pais": "DO",
    "field_clase_de_prestador": 32015,
    "field_user_reference": 514,
    "user": 514,
    "field_ingresos_extra": 0,
    "field__aportaciones_extras": 0,
    "field_inf_medicion_agua": 0,
    "field_proteccion_zona_fuente": 0,
    "created": 1392073200,
    "type": "prestador_de_servicio",
    "field_imagenps": null,
    "field_entidad_local": "494162",
    "field_estado_legal": "32017",
    "field_atencion_del_prestador": 32049,
    "field_personal_prestador": 1,
    "field_latitud": {
      "lat": "18.56728333333",
      "lon": "-69.23853333333"
    }
  }';
  return json_decode($demo_entityform, true);
}

// delivers a demo field collecction for testing purposes
function _siasar_drush_migrate_demo_field_collection() {
  $demo_field_collection = '{
    "name": "field_tecnicos",
    "host_entity": {
      "id": null,
      "resource": "entityform"
    },
    "field_cargo_tecnico": "222303",
    "field_nombre_tecnico": "Luis Manuel Contreras",
    "field_genero_tecnico": 32039,
    "field_telef": "849-248-6209"
  }';
  return json_decode($demo_field_collection, true);
}