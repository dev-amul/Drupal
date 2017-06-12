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
      ->entityCondition('bundle', 'testingpurposes')
      ->propertyOrderBy('entityform_id', 'ASC');
      //->range(0,20000);
    $result = $query->execute();

    if (isset($result['entityform'])) {
      $entities_list = $result['entityform'];
      foreach($entities_list as $entity_id => $item) {

          $entity = entity_load_single('entityform', $entity_id);
          dpm($entity);
          drupal_set_message('Nombre del formulario '. $entity->type);
          if(isset($entity->field_cuestionario_validado) && !empty($entity->field_cuestionario_validado)) {
            $wrapper = entity_metadata_wrapper('entityform', $entity);


                if($wrapper->field_cuestionario_validado->value()){
                    drupal_set_message('Cuestionario validado ***** ');
                    drupal_set_message("Tiene el campo asignado 1 validado" . $entity->field_status);
                    drupal_set_message("Tiene el campo asignado 2 validado" . $wrapper->field_status);
                    if(isset($wrapper->field_status)){
                        var_dump($wrapper->field_status->value());
                        $wrapper->field_status->set('4');
                    }
                    //var_dump($entity->field_status);

            }
        }

        if(isset($entity->draft) && !empty($entity->draft)){
                drupal_set_message('borrador '. $entity->draft);
                if($entity->draft){
                    if(isset($entity->field_status)){
                        drupal_set_message("Tiene el campo asignado 1 borrador" . $entity->field_status[0]);
                        if(isset($wrapper->field_status)){
                            var_dump($wrapper->field_status->value());
                            $wrapper->field_status->set('2');
                        }

                    }
                }
                else{
                    drupal_set_message('Cuestionario terminado ***** ');
                    //$wrapper->field_status->set(3);
                    //if(isset($entity->field_status))
                            //$wrapper->field_status->set(2);
                    if(isset($entity->field_status)){
                        drupal_set_message("Tiene el campo asignado 1 terminado" . $entity->field_status[0]);
                        var_dump($entity->field_status);
                        if(isset($wrapper->field_status)){
                            var_dump($wrapper->field_status->value());
                            $wrapper->field_status->set('3');
                        }
                    }


         }
        }
                //$wrapper->save();
    }
   }
  }
