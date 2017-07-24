/**
 * @file
 * Contains helper functions to work with theme.
 */

(function ($) {
    "use strict"

    /**
     * Build a responsive menu merging links from .main-menu and .user-menu.
     */
    Drupal.behaviors.responsiveMenu = {
        attach: function (context) {
          var menuToggle = $('<span />')
          .addClass("responsive-menu-toggle")
          .html('&#8801;');
          var regionUserNav = $(".region-user-nav");
          menuToggle.prependTo(regionUserNav);
          $('.responsive-menu-toggle').click(function(e) {
            e.preventDefault();
            $(".main-menu, .user-menu").toggle();
          });
        }
    };
})(jQuery);
