<?php

/**
 * Implements hook_drush_command().
 */
 function siasar_update_flujo_editorial_drush_command(){
     $items['siasar-update-editorial']=array(
         'description' => 'It update field status in the workflow module',
         'aliases' => 'siasar-ufe',
         'callback' => 'drush_siasar_update_editorial',
         'arguments' => array('form' => 'Form name'),
         'required-arguments' => false,
         'examples' => array(
           'drush siasar-ru field_location 42 56' => 'Remaps all occurrences of Unit 42 to unit 56 on field_location, no matter the entity it belongs to.',
         ),
         'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_DATABASE,
       );

       return $items;
 }

 function drush_siasar_update_editorial($form){
    drupal_set_message(t('Processing ' .$form. ' form to update field_status in workflow module if possible.'), 'status');

    $bundles = array_keys(entity_get_info('entityform')['bundles']);
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'entityform')
      ->entityCondition('bundle', $bundles, 'IN')
      ->propertyOrderBy('entityform_id', 'ASC');
    $result = $query->execute();

    if (isset($result['entityform'])) {
      $entities_list = $result['entityform'];
      drupal_set_message(t('There are %entities entityforms to process', array('%entities' => count($entities_list))), 'status');

      foreach($entities_list as $entity_id => $item) {
        $entity = entity_load_single('entityform', $entity_id);
        drupal_set_message(t('imprimiendo valores ' .$entity->field_cuestionario_validado. ' '.$entity_id ), 'status');
        /*if (isset($entity->field_pais) && empty($entity->field_pais)) {
          $wrapper = entity_metadata_wrapper('entityform', $entity);



        }*/
      }
    }

 }
