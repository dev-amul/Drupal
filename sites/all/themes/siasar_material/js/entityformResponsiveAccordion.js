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

      var $entityform = $('form.entityform');
      var $accordionElements = $('.vertical-tabs-panes > fieldset.vertical-tabs-pane', $entityform);
      var $accordionElementsLabels = $('> legend', $accordionElements);
      var $verticalTabs = $('.vertical-tabs-list', $entityform);
      var $window = $(window);
      var smallBreakpoint = 600;
      var mobile = ($window.innerWidth() >= smallBreakpoint)
        ? false
        : true;

      cleanUp();
      $accordionElementsLabels.on('click', openCloseAccordion);
      $window.on('resize', cleanUp);

      function cleanUp() {
        if ($window.innerWidth() < smallBreakpoint && mobile == true) {
          mobile = false;
          $accordionElements.removeAttr('style');
          $accordionElements.first().addClass('open');
          $accordionElements.not(':first-child').addClass('closed');
        } else if ($window.innerWidth() >= smallBreakpoint && mobile == false) {
          mobile = true;
          $verticalTabs.removeClass('selected');
          $verticalTabs.first().addClass('selected');
          $accordionElements.not(':first-child').hide();
        }
      }

      function openCloseAccordion(e) {
        var $clicked = $(e.currentTarget);
        var $target = $clicked.parent();

        if ($target.hasClass('open')) {
          $target.removeClass('open').addClass('closed');
        } else {
          $accordionElements.filter('.open').addClass('closed').removeClass('open');
          $target.removeClass('closed').addClass('open');
        }
      }
    }
  };

})(jQuery);
