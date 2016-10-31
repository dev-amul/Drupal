(function ($) {
  'use strict';

  Drupal.behaviors.siasarFieldLocation = {
    attach: function (context, settings) {
      if (context !== document) return;

      var $locationWrapper = $('.field-name-field-entidad-local');
      var $locationField = $locationWrapper.find('.form-text');
      var $initOptions = $locationField.find('option');
      var selected = $locationField.val();
      var noneSelected = {
        tid: '_none',
        name: Drupal.t('- Ninguno - '),
      }
      var tidCache = {};

      init();


      function buildSelectorLevel(tid, level) {
        var html = '<select class="location-tree-selector" data-level="' + level + '"></select>';
        var $newSelector;

        $locationWrapper.append(html);
        $newSelector = $locationWrapper.find('.location-tree-selector[data-level="' + level + '"]');
        populateSelector(tidCache[tid], $newSelector);
        $newSelector.on('change', updateFormStructure);
      }

      function updateFormStructure() {
        var term = {
          tid: this.value,
          name: this.selectedOptions[0].textContent,
        }
        var level = parseInt($(this).data('level'));

        cleanSelectorChain(this, level);
        $locationField.val('');

        if (tidCache[term.tid]) {
          buildSelectorLevel(term.tid, level + 1);
        } else if (term.tid !== '_none') {
          requestChildrenTerms(term);
        }

      }

      function setCanonicalValue(term) {
        $locationField.val(term.tid);
        $locationField.trigger('change');
      }

      function cleanSelectorChain(target, level) {
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
        var url = '/ajax/location/' + term.tid + '/all';

        $.get(url, null, function (data, status) {
          processResult(data, status, term);
        }, 'json');
      }

      function processResult(data, status, term) {
        if (data.length == 0) {
          setCanonicalValue(term);
          return;
        }

        var $lastSelectorInChain = $locationWrapper.find('.location-tree-selector').last();
        var level = ($lastSelectorInChain.data('level') !== true) ? $lastSelectorInChain.data('level') : -1;
        var resultArr = Object.keys(data).map(function (k) {
          return { tid: k, name: data[k] };
        });
        var finalArr = [];

        finalArr = finalArr.concat(noneSelected, resultArr);
        tidCache[term.tid] = finalArr;

        buildSelectorLevel(term.tid, level + 1);
      }

      function init() {
        tidCache[0] = requestChildrenTerms({ tid: 0 });
      }

    }
  };

})(jQuery);


