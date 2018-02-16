(function ($) {
  Drupal.behaviors.waitAjaxResponses = {
    attach: function (context, settings) {
      $( document ).ajaxStart(function() {
        $('#edit-submit').attr('disabled','disabled');
        $('#edit-submit').addClass('disabled');
      });
        $( document ).ajaxStop(function() {
          $('#edit-submit').removeAttr('disabled');
          $('#edit-submit').removeClass('disabled');
        });
    }
  };
}(jQuery));