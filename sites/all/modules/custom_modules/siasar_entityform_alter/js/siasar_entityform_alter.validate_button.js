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
      var statusValue = ($validateButton.attr('status') === 'validated')
        ? 1
        : 0;
      var statusString, statusLabel;

      if (statusValue === 1) {
        statusValue = 0;
        statusString = 'not-validated';
        statusLabel = Drupal.t('Validate');
      } else {
        statusValue = 1;
        statusString = 'validated';
        statusLabel = Drupal.t('Validated');
      }

      $validateButton.attr('status', statusString);
      $validateButton.attr('value', statusLabel);
      $validateField.val(statusValue);

    }

  });
})(jQuery, Drupal);
