// SIASAR Hierarchical select
// Use example:
// $('.field-widget-siasar-hierarchical-select').siasarHierarchicalSelect();
//
// Notice we use wrapper DIV class name.

(function ($) {
  'use strict';

  $.fn.siasarHierarchicalSelect = function () {
    var $countrySelector = $('#edit-field-pais-und');
    var tidCache = {};
    var country;

    $countrySelector = ($countrySelector.length > 0)
      ? $countrySelector
      : $('#edit-field-pais-iso2');

    return this.each(function () {
      var xhrChildren = new XMLHttpRequest;
      var $locationWrapper = $(this);
      var $locationField = $locationWrapper.find('.form-text');
      var fieldName = $locationField.attr('field-name');
      var initialValue = parseInt($locationField.val());
      var $initOptions = $locationField.find('option');
      var noneSelected = {
        tid: '_none',
        name: Drupal.t('- Ninguno - '),
      }
      var forceDeepest = Drupal.settings.siasarHierarchicalSelect[fieldName].forceDeepest;
      var $locationTreeSelectorWrapper;


      init();
      listenToCountrySelector();

      function getAllTermsInChain() {
        if (initialValue == 0) return;

        var url = '/ajax/location/' + initialValue + '/' + country + '/parents';

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
        if (data[item].length == 0 && forceDeepest) addOK();
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
        $newSelector.on('focus', removeOK);
      }

      function updateFormStructure() {
        var term = {
          tid: this.value,
          name: this.selectedOptions[0].textContent,
        }
        var level = parseInt($(this).data('level'));

        this.blur();
        $locationField.val('');
        cleanSelectorChain(level);

        if (tidCache[term.tid]) {
          setCanonicalValue(term.tid);
          buildSelectorLevel(term.tid, level + 1);
        } else if (term.tid !== '_none') {
          requestChildrenTerms(term);
        }
      }

      function setCanonicalValue(value) {
        var hasChildren = (typeof (tidCache[value]) === 'object' && tidCache[value].length > 1);

        if (value === 0 || (forceDeepest && hasChildren)) return;

        $locationField.val(value);
        addOK();
      }

      function cleanSelectorChain(level) {
        var $selectorChain = $locationWrapper.find('.location-tree-selector');

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
        var url = '/ajax/location/' + term.tid + '/';

        url = term.tid === 0
          ? url + country
          : url + 'all';

        removeThrobber();
        addThrobber();

        xhrChildren.abort('new request');
        xhrChildren = $.get(url, null, function (data, status) {
          processResult(data, status, term);
        }, 'json');
      }


      function processResult(data, status, term) {
        removeThrobber();
        tidCache[term.tid] = mapTermsFromRequestToArray(data);
        setCanonicalValue(term.tid);

        if (data.length == 0 && term.tid !== 0) return;

        var $lastSelectorInChain = $locationTreeSelectorWrapper.find('.location-tree-selector').last();
        var levelDoesExist = !isNaN(parseInt($lastSelectorInChain.data('level')));
        var level = levelDoesExist ? $lastSelectorInChain.data('level') : -1;

        buildSelectorLevel(term.tid, level + 1);
      }

      // TODO: refactor to object
      function addThrobber() {
        $locationTreeSelectorWrapper.addClass('ajax-progress');
        $locationTreeSelectorWrapper.append('<div class="throbber"></div>');
      }

      function removeThrobber() {
        $locationTreeSelectorWrapper.removeClass('ajax-progress');
        $locationTreeSelectorWrapper.find('.throbber').remove();
      }

      function addOK() {
        if (forceDeepest) {
          $locationTreeSelectorWrapper.append('<div class="ok">&#x2705;</div>');
        }
      }

      function removeOK() {
        if (forceDeepest) {
          $locationTreeSelectorWrapper.find('.ok').remove();
        }
      }


      function mapTermsFromRequestToArray(data) {
        var mapped = Object.keys(data).map(function (k) {
          return { tid: data[k].tid, name: data[k].name };
        });
        var output = [];

        output = output.concat(noneSelected, mapped);
        return output;
      }

      function getCountry() {
        var countryInForm = $countrySelector.val();

        if (countryInForm && countryInForm !== '_none') {
          return countryInForm.toUpperCase();
        }
        return 'all';
      }

      // INIT functions

      function listenToCountrySelector() {
        $countrySelector.on('change', function (e) {
          if (e.target.value.length !== 2) return;

          $locationTreeSelectorWrapper.remove();
          initialValue = 0;
          init();
        });
      }

      function init() {
        var hierarchicalSelectorWrapper = '<div class="location-tree-selector-wrapper"></div>';

        country = getCountry();

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

    });
  }

})(jQuery);
