(function ($, Drupal) {

  $(document).ready(function () {

    var $form = $('form.entityform');
    var $validateButton = $form.find('.btn.form-validate');
    var $submitButton = $form.find('.btn.form-submit');
    var $validateField = $form.find('[name="field_cuestionario_validado[und]"]');

    $validateButton.on('click', function (e) {
      e.preventDefault();
      toggleValidateStatus();
      //$submitButton.trigger('click');
    });

    function toggleValidateStatus() {
      var currentStatus = $validateButton.attr('status');
      var statusLabel;

      if (currentStatus === 'validated') {
        $validateField.attr('checked', false);
        $validateButton.attr('status', 'not-validated');
        statusLabel = Drupal.t('Validate');
      } else {
        $validateField.attr('checked', true);
        $validateButton.attr('status', 'validated');
        statusLabel = Drupal.t('Validated');
      }

      statusLabel = 'Legacy: ' + statusLabel;
      $validateButton.attr('value', statusLabel);
    }

  });
})(jQuery, Drupal);
