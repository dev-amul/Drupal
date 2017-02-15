/**
 * @file
 * Contains helper functions to work with theme.
 */

(function ($) {
  "use strict"

  /**
   * Changes caret icon for fieldset when it is being collapsed or expanded.
   */
  Drupal.behaviors.entityformResponsiveAccordion = {
    attach: function (context, settings) {
      if (context !== document) return;

      var $accordionElements = $('form.entityform .vertical-tabs-panes > fieldset.vertical-tabs-pane');
      $accordionElements.removeAttr('style');
      $accordionElements.first().addClass('open');
      $accordionElements.not(':first-child').removeAttr('style').addClass('closed');

      $accordionElements.on('click', openCloseAccordion);

      function openCloseAccordion(e) {
        var $target = $(e.currentTarget);

        if ($target.hasClass('open')) {
          $target.removeClass('open').addClass('closed');
        } else {
          $accordionElements.filter('.open').addClass('closed').removeClass('open');
          $target.removeClass('closed').addClass('open');
        }
        console.log("!");
      }
    }
  };

})(jQuery);
