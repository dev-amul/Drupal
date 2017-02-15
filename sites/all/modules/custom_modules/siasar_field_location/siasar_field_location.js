(function ($) {
  'use strict';

  Drupal.behaviors.siasarFieldLocation = {
    attach: function (context, settings) {
      if (context !== document) return;

      $('.field-widget-siasar-hierarchical-select', context).siasarHierarchicalSelect();
    }
  };

})(jQuery);


