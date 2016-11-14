(function ($) {
  'use strict';

  Drupal.behaviors.siasarFieldLocation = {
    attach: function (context, settings) {

      $('.field-widget-siasar-hierarchical-select').siasarHierarchicalSelect();

    }
  };

})(jQuery);


