(function() {
  var beforePrint = function() {
    Drupal.behaviors.printBehaviors('before');
  };
  var afterPrint = function() {
    Drupal.behaviors.printBehaviors('after');
  };

  if (window.matchMedia) {
    var mediaQueryList = window.matchMedia('print');
    mediaQueryList.addListener(function(mql) {
      if (mql.matches) {
        beforePrint();
      } else {
        afterPrint();
      }
    });
  }

  // IE5+ Support!
  window.onbeforeprint = beforePrint;
  window.onafterprint = afterPrint;
}());

(function ($){

  /**
   * Print behavior is a new kind of event that can be handled by modules so
   * each module can improve the way each element will be printed in the browser
   *
   * It supports any operation, but this library provides the following two:
   * - before: Triggered before opening the Print Dialog
   * - after: Triggered after opening the Print Dialog
   *
   * Handlers will need to define a behavior such as:
   *
   * Drupal.behaviors.my_custom_module = {
   *    beforePrint: function() {
   *       // My custom code
   *    },
   *
   *    afterPrint: function() {
   *       // My custom code
   *    },
   * }
   *
   * @param operation
   */
  Drupal.behaviors.printBehaviors = function(operation) {
  // Execute all of them.
  $.each(Drupal.behaviors, function () {

    var operationMethod = 'print';

    if (operation) {
      operationMethod = operation + 'Print';
    }

    if ($.isFunction(this[operationMethod])) {
      this[operationMethod](operation);
    }
  });
};

})(jQuery);
