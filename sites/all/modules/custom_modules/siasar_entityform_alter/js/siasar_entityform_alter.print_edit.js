(function($) {
  Drupal.behaviors.siasar_entityform_edit = {

    $form: null,

    $singleSelects: [],

    specialSelectCases: [
        '.date-clear',
        '.location-tree-selector',
        '.field-name-field-user-reference select',
        '.field-name-field-system-ref select'
    ],

    convertToCheckboxes: [
        '.field-name-field-pais',
    ],

    replaceForInput: [
        '.date-clear',
        '.field-name-field-user-reference select',
        '.field-name-field-system-ref select'
    ],

    hideElements: [
        '.field-multiple-drag',
        '.tabledrag-toggle-weight-wrapper',
        '.btn',
    ],

    $newPrintableElements: [],

    attach: function() {
      this.$form = $('form.entityform');
    },

    getElements: function(selectors) {
      return selectors.reduce(function(selectors, selector) {
        return selectors.concat($(selector).toArray());
      }, []);
    },

    init: function() {
      this.specialSelectCases = this.getElements(this.specialSelectCases);
      this.replaceForInput = this.getElements(this.replaceForInput);

      var self = this;
      $('.location-tree-selector').each(function() {
        if ($(this).val() === '_none' || $(this).val() === '') {
          self.replaceForInput.push(this);
        }
      });
    },

    processSingleSelects: function() {
      this.$singleSelects = this.$form
          .find('select:not([multiple="multiple"])')
          .not(this.specialSelectCases);

      var self = this;
      this.$singleSelects.each(function() {
        var $this = $(this);
        var $wrapper = $('<div class="print-checkboxes"></div>');

        $this.find('option').each(function() {
          var $this = $(this);
          if ($this.val() !== '_none' && $this.val() !== '') {
            $wrapper.append($('<div class="option"><input type="checkbox"><label>' + $this.text() + '</label></div>'));
          }
        });

        self.$newPrintableElements.push($wrapper);
        $wrapper.insertBefore($this);
      });

    },

    undoNewPrintableElements: function() {
      if (this.$newPrintableElements.length) {
        $(this.$newPrintableElements).each(function() {
          $(this).remove();
        });
      }
    },

    processReplaceForInput: function() {
      var self = this;
      $.each(this.replaceForInput, function() {
        var $this = $(this);
        var $textfield = $('<input type="text" class="text-full form-text print-textfield">');
        self.$newPrintableElements.push($textfield);
        $textfield.insertBefore($this);
      });
    },

    processHideElements: function() {
      $(this.hideElements.join(', ')).addClass('print-hide');
    },

    undoHideElements: function() {
      $(this.hideElements.join(', ')).removeClass('print-hide');
    },

    processImages: function() {
      var self = this;
      $('.field-widget-image-image').each(function() {
        var $this = $(this);
        $this.find('.description, .image-widget').addClass('print-hide');
        var $notification = $('<span>Recuerde que deberá introducir una imagen.</span>');
        self.$newPrintableElements.push($notification);
        $notification.appendTo($this);
      });
    },

    processMultipleTable: function() {
      var self = this;
      var $multipleElements = $('.field-multiple-table');
      $multipleElements.each(function() {
        var $this = $(this);
        var $lastChild = $this.find('> tbody > tr:last-child');

        for (var i = 0; i < 3; i++) {
          var $newElement = $lastChild.clone(true);
          $newElement.find('input, textarea').val('');
          $newElement.find('input[type="checkbox"], input[type="radio"]').prop('checked', '');
          $newElement.insertAfter($lastChild);
          self.$newPrintableElements.push($newElement);
        }
      });
    },

    processRemoveDefaultValues: function() {
      if ($('body.page-eform-submit').length) {
        $('input[type="text"]').each(function() {
          var $this = $(this);
          $this.data('data-default', $this.val());
          $this.val('');
        });
        $('input[type="checkbox"], input[type="radio"]').each(function() {
          var $this = $(this);
          $this.data('data-default', $this.prop('checked'));
          $this.prop('checked', '');
        });
      }
    },

    undoDefaultValues: function() {
      if ($('body.page-eform-submit').length) {
        $('input[type="text"]').each(function() {
          var $this = $(this);
          $this.val($this.data('default'));
        });

        $('input[type="checkbox"], input[type="radio"]').each(function() {
          var $this = $(this);
          $this.prop('checked', $this.data('default'));
        });
      }
    },

    handlePageSize: function() {
      $('body').addClass('print-page');
    },

    undoPageSize: function() {
      $('body').removeClass('print-page');
    },

    beforePrint: function () {
      this.init();
      this.processSingleSelects();
      this.processReplaceForInput();
      this.processHideElements();
      this.processImages();
      // this.processMultipleTable();
      this.processRemoveDefaultValues();

      this.handlePageSize();
    },

    afterPrint: function () {
      this.undoNewPrintableElements();
      this.undoHideElements();
      this.undoDefaultValues();

      this.undoPageSize();
    }

  };
})(jQuery);