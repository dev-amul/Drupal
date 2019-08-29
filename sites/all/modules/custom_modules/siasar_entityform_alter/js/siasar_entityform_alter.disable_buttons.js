(function ($) {
  Drupal.behaviors.hideSubmitButton = {
    attach: function(context) {
      $("form.entityform", context).once("hideSubmitButton", function () {
        var $form = $(this);
        $form.find("input.form-submit").click(function (e) {
          var el = $(this);
          el.after('<input type="hidden" name="' + el.attr("name") + '" value="' + el.attr("value") + '" />');
          return true;
        });
        $form.submit(function (e) {
          if (!e.isPropagationStopped()) {
            $("input.form-submit", $(this)).attr("disabled", "disabled");
            return true;
          }
        });
      });
    }
  };
}(jQuery));
