<?php

/**
 * Implements hook_drush_command().
 */
 function siasar_editorial_flow_drush_command(){
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
      ->propertyOrderBy('entityform_id', 'ASC')
      ->range(0,100);
    $result = $query->execute();

    if (isset($result['entityform'])) {
      $entities_list = $result['entityform'];
      $tamano = count($entities_list);
      //drupal_set_message(t('Tamaño de la consulta 2'. $tamano));
      foreach($entities_list as $entity_id => $item) {
          //drupal_set_message('id de la entidad '.  $entity_id);
          $entity = entity_load_single('entityform', $entity_id);
          $size = count($entity);
          drupal_set_message('valor entity '.  $entity->id. ' '. $size);
          if(isset($entity->field_cuestionario_validado) && !empty($entity->field_cuestionario_validado)) {
            $wrapper = entity_metadata_wrapper('entityform', $entity);
            if($wrapper->field_cuestionario_validado->value()){
                drupal_set_message('Cuestionario validado ***** ');
                //Acá va la asignación

            }
          }
          if(isset($entity->field_cuestionario_terminado) && !empty($entity->field_cuestionario_validado)){
                drupal_set_message('Cuestionario terminado ***** ');
                //Acá va la asignación
          }
          if(isset($entity->draft) && !empty($entity->draft)){
                drupal_set_message('borrador '.$wrapper->draft->value());
                //Acá va la asignación
          }

        }
    }

 }
