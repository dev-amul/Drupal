(function ($) {
  'use strict';

  Drupal.behaviors.siasarFieldLocation = {
    attach: function (context, settings) {
      if (context !== document) return;

      var $locationWrapper = $('.field-name-field-entidad-local');
      var $locationField = $locationWrapper.find('.form-text');
      var initialValue = parseInt($locationField.val());
      var $initOptions = $locationField.find('option');
      var selected = $locationField.val();
      var noneSelected = {
        tid: '_none',
        name: Drupal.t('- Ninguno - '),
      }
      var userCountry = settings.user.country
        ? settings.user.country
        : 'all';
      var tidCache = {};
      var $locationTreeSelectorWrapper;

      init();

      function getAllTermsInChain() {
        if (initialValue == 0) return;

        var url = '/ajax/location/' + initialValue + '/' + userCountry + '/parents';

        $.get(url, null, function (data, status) {
          processParentData(data, status);
        }, 'json');
      }

      function processParentData(data, status) {
        var i = 0;
        for (var item in data) {
          if (data[item].length !== 0) {
            tidCache[item] = mapTermsFromRequestToArray(data[item]);
            $locationTreeSelectorWrapper.find('.location-tree-selector[data-level="' + i + '"]').val(item);
            buildSelectorLevel(item, i + 1);
            i++;
          }
        }
        $locationTreeSelectorWrapper.find('.location-tree-selector[data-level="' + i + '"]').val(initialValue);
      }

      function buildSelectorLevel(tid, level) {
        var html = '<select class="location-tree-selector" data-level="' + level + '"></select>';
        var $newSelector;

        $locationTreeSelectorWrapper.append(html);
        $newSelector = $locationTreeSelectorWrapper.find('.location-tree-selector[data-level="' + level + '"]');
        populateSelector(tidCache[tid], $newSelector);
        $newSelector.addClass('intro-animate');
        $newSelector.on('change', updateFormStructure);
      }

      function updateFormStructure() {
        var term = {
          tid: this.value,
          name: this.selectedOptions[0].textContent,
        }
        var level = parseInt($(this).data('level'));

        this.blur();
        cleanSelectorChain(level);
        $locationField.val('');

        if (tidCache[term.tid]) {
          buildSelectorLevel(term.tid, level + 1);
        } else if (term.tid !== '_none') {
          requestChildrenTerms(term);
        }
      }

      function cleanSelectorChain(level) {
        var $selectorChain = $('.location-tree-selector');

        $selectorChain.each(function () {
          var $this = $(this);
          var thisLevel = parseInt($this.data('level'));
          if (thisLevel > level) {
            $this.remove();
          }
        });
      }

      function populateSelector(options, $selector) {
        var html = '';
        options.forEach(function (element) {
          html += createOptionElement(element);
        }, this);

        $selector.html(html);
      }


      function createOptionElement(term) {
        return '<option value="' + term.tid + '">' + term.name + '</option>';
      }


      function requestChildrenTerms(term) {
        var url = '/ajax/location/' + term.tid + '/' + userCountry;

        addThrobber();

        $.get(url, null, function (data, status) {
          processResult(data, status, term);
        }, 'json');
      }


      function processResult(data, status, term) {
        removeThrobber();
        if (data.length == 0) {
          $locationField.val(term.tid);
          return;
        }
        var $lastSelectorInChain = $locationTreeSelectorWrapper.find('.location-tree-selector').last();
        var level = ($lastSelectorInChain.data('level') !== true) ? $lastSelectorInChain.data('level') : -1;

        tidCache[term.tid] = mapTermsFromRequestToArray(data);
        buildSelectorLevel(term.tid, level + 1);
      }

      function addThrobber() {
        $locationTreeSelectorWrapper.addClass('ajax-progress');
        $locationTreeSelectorWrapper.append('<div class="throbber"></div>');
      }

      function removeThrobber() {
        $locationTreeSelectorWrapper.removeClass('ajax-progress');
        $locationTreeSelectorWrapper.find('.throbber').remove();
      }


      function mapTermsFromRequestToArray(data) {
        var mapped = Object.keys(data).map(function (k) {
          return { tid: k, name: data[k] };
        });
        var output = [];

        output = output.concat(noneSelected, mapped);
        return output;
      }


      function init() {
        var hierarchicalSelectorWrapper = '<div class="location-tree-selector-wrapper"></div>';

        $locationWrapper.append(hierarchicalSelectorWrapper);
        $locationTreeSelectorWrapper = $locationWrapper.find('.location-tree-selector-wrapper');

        initialValue = isNaN(initialValue)
          ? 0
          : initialValue;
        if (initialValue > 0) {
          getAllTermsInChain();
        } else {
          requestChildrenTerms({ tid: 0 });
        }
      }

    }
  };

})(jQuery);


