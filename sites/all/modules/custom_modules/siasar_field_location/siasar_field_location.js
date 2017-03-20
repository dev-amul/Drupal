(function ($) {
  'use strict';

  Drupal.behaviors.siasarFieldLocation = {
    attach: function (context, settings) {
      $('.field-widget-siasar-hierarchical-select, .form-item-field-entidad-local-siasar-hierarchical-select', context).siasarHierarchicalSelect();
    }
  };

})(jQuery);


