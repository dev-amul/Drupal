(function ($) {
  'use strict';

  Drupal.behaviors.siasarFieldLocation = {
    attach: function (context, settings) {
      if (context !== document) return;

      var $locationWrapper = $('.field-name-field-entidad-local');
      var $locationField = $locationWrapper.find('.form-select');
      var $initOptions = $locationField.find('option');
      var initOptions = extractOptionsFromObject($initOptions);
      var selected = $locationField.val();
      var tidCache = {
        '0': initOptions,
      };
      var noneSelected = {
        tid: '_none',
        name: Drupal.t('- Ninguno - '),
      }

      // if selected != '_none', we are editing, not creating

      // Build first level
      if (selected === '_none') {
        buildSelectorLevel(0, 0);
      }

      function buildSelectorLevel(tid, level) {
        var html = '<select class="location-tree-selector" data-level="' + level + '"></select>';
        var $newSelector;

        $locationWrapper.append(html);
        $newSelector = $locationWrapper.find('.location-tree-selector[data-level="' + level + '"]');
        populateSelector(tidCache[tid], $newSelector);
        $newSelector.on('change', updateFormStructure);
      }

      function updateFormStructure(e) {
        var tid = this.value;
        var name = this.selectedOptions[0].textContent;
        var level = parseInt($(this).data('level'));

        setCanonicalValue(tid, name);
        cleanSelectorChain(this, level);

        if (tidCache[tid]) {
          buildSelectorLevel(tid, level + 1);
        } else if (tid !== '_none') {
          requestChildrenTerms(tid);
        }

      }

      function setCanonicalValue(tid, name) {
        $locationField.html(createOptionElement(tid, name));
        $locationField.val(tid);
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
        var html;
        options.forEach(function (element) {
          html += createOptionElement(element.tid, element.name);
        }, this);

        $selector.html(html);
      }

      function createOptionElement(tid, name) {
        return '<option value="' + tid + '">' + name + '</option>';
      }

      function requestChildrenTerms(tid) {
        var url = '/ajax/location/' + tid + '/all';

        $.get(url, null, function (data, status) {
          processResult(data, status, tid);
        }, 'json');
      }

      function processResult(data, status, tid) {
        if (data.length == 0) return;

        var $lastSelectorInChain = $locationWrapper.find('.location-tree-selector').last();
        var level = $lastSelectorInChain.data('level');
        var resultArr = Object.keys(data).map(function (k) {
          return { tid: k, name: data[k] };
        });
        var finalArr = [];

        finalArr = finalArr.concat(noneSelected, resultArr);
        tidCache[tid] = finalArr;

        buildSelectorLevel(tid, level + 1);
      }

      function extractOptionsFromObject($options) {
        var options = [];
        $options.each(function () {
          var opt = {
            'tid': this.value,
            'name': this.textContent,
          };
          options.push(opt);
        });
        return options;
      }

    }
  };

})(jQuery);


