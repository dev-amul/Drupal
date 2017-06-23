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

      /**
       * Returns the fieldset that should be displayed to the user
       *
       * The fieldset returned will be either (in this order):
       * - the one with errors
       * - the already opened
       * - the first fieldset
       *
       * @returns {*}
       */
      function getOpenFieldset() {
        var $fieldset = null;
        var position = null;

        $accordionElements.each(function(key) {
          var $this = $(this);
          if ($this.is('.open') || $('.error', $this).length) {
            $fieldset = $this;
            position = key;
            return;
          }
        });

        if ($fieldset) {
          return {
            fieldset: $fieldset,
            position: position
          };
        }

        return {
          fieldset: $accordionElements.first(),
          position: 0
        };
      }

      function cleanUp() {
        var info = getOpenFieldset();
        var $fieldset = info.fieldset;
        var position = info.position;

        if ($window.innerWidth() < smallBreakpoint && mobile) {
          mobile = false;
          $accordionElements.removeAttr('style');
          $fieldset.addClass('open');
          $accordionElements.addClass('closed');
          $($accordionElements[position]).removeClass('closed');

        } else if ($window.innerWidth() >= smallBreakpoint && !mobile) {
          mobile = true;
          $verticalTabs.removeClass('selected');
          $($verticalTabs[position]).addClass('selected');
          $accordionElements.hide();
          $($accordionElements[position]).show();
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
