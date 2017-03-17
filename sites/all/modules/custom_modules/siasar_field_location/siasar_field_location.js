(function ($) {
  'use strict';

  Drupal.behaviors.siasarFieldLocation = {
    attach: function (context, settings) {
      $('.field-widget-siasar-hierarchical-select, .views-exposed-form .form-item-field-entidad-local-tid', context).siasarHierarchicalSelect();
    }
  };

})(jQuery);


