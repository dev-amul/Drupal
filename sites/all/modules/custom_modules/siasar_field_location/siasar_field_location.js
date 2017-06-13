;(function ($, Drupal) {
  'use strict';

  Drupal.behaviors.siasarFieldLocation = {
    attach: function (context, settings) {
      $('.field-widget-siasar-hierarchical-select, .form-item-field-entidad-local-siasar-hierarchical-select', context)
          .once('siasar-widget', function() {
            $(this).siasarHierarchicalSelect();
          });
    }
  };

})(jQuery, Drupal);