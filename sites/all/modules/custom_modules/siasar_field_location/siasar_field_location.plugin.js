// SIASAR Hierarchical select
// Use example:
// $('.field-widget-siasar-hierarchical-select').siasarHierarchicalSelect();
//
// Notice we use wrapper DIV class name.

(function ($, Drupal) {
  'use strict';

  $.fn.siasarHierarchicalSelect = function () {
    var tidCache = {};

    return this.each(function () {

      var xhrChildren = new XMLHttpRequest();
      this.$locationWrapper = $(this);
      this.$locationField = this.$locationWrapper.find('.form-text');
      var fieldName = this.$locationField.attr('field-name');

      this.initialValue = parseInt(this.$locationField.val());
      var noneSelected = {
        tid: '_none',
        name: Drupal.t('- Ninguno - ')
      };

      var countryFieldName = Drupal.settings.siasarHierarchicalSelect[fieldName].countryFieldName;

      this.restrictions = Drupal.settings.siasarHierarchicalSelect[fieldName].restrictions;
      this.forceDeepest = (Drupal.settings.siasarHierarchicalSelect[fieldName].forceDeepest === 1);

      this.$countrySelector = false;
      this.country = false;

      if (countryFieldName) {
        this.$countrySelector = $('#edit-' + countryFieldName + '-und');
      }

      if (!this.$countrySelector || this.$countrySelector.length === 0) {
        this.$countrySelector = $('#edit-field-pais-und');
        this.$countrySelector = (this.$countrySelector.length > 0) ? this.$countrySelector : $('#edit-field-pais-iso2');
      }

      this.$locationTreeSelectorWrapper = false;

      this.getAllTermsInChain = function () {
        if (this.initialValue === 0) { return; }

        var url = '/ajax/location/' + this.initialValue + '/' + this.country + '/parents';

        $.get(url, null, this.processParentData.bind(this), 'json');
      };

      this.processParentData = function (data, status) {
        var i = 0;
        for (var item in data) {
          if (data[item].length !== 0) {
            tidCache[item] = mapTermsFromRequestToArray(data[item]);
            this.$locationTreeSelectorWrapper.find('.location-tree-selector[data-level="' + i + '"]').val(item);
            this.buildSelectorLevel(item, i + 1);
            i++;
          }
        }

        if (data[item].length === 0 && this.forceDeepest) { this.addOK(); }

        this.applyRestrictions();

        this.$locationTreeSelectorWrapper.find('.location-tree-selector[data-level="' + i + '"]').val(this.initialValue);
      };

      /**
       * It will disable all select boxes that the user shouldn't be modifying according to its configuration
       */
      this.applyRestrictions = function () {
        if (this.restrictions.country) {
          this.$countrySelector
            .attr('disabled', 'disabled');
        }

        var $max_level = this.$locationTreeSelectorWrapper
          .find('.location-tree-selector[data-level="' + this.restrictions.max_level + '"]');

        if ($max_level.length) {
          $max_level.prevAll('select').add($max_level).attr('disabled', 'disabled');
        }
      };

      this.buildSelectorLevel = function (tid, level) {
        if (!this.restrictions.can_change && level > this.restrictions.max_level) {
          return;
        }

        var html = '<select class="location-tree-selector" data-level="' + level + '"></select>';
        var $newSelector;

        this.$locationTreeSelectorWrapper.append(html);
        $newSelector = this.$locationTreeSelectorWrapper.find('.location-tree-selector[data-level="' + level + '"]');
        populateSelector(tidCache[tid], $newSelector);
        $newSelector.addClass('intro-animate');
        $newSelector.on('change', this.updateFormStructure.bind(this));
        $newSelector.on('focus', this.removeOK.bind(this));
      };

      this.updateFormStructure = function (e) {
        var $select = $(e.target);
        var term = {
          tid: $select.val(),
          name: $select.find('option:selected').text()
        };

        var level = parseInt($select.data('level'));

        $select.blur();
        this.$locationField.val('');
        this.cleanSelectorChain(level);
        this.setCanonicalValue(term.tid);

        if (tidCache[term.tid]) {
          this.buildSelectorLevel(term.tid, level + 1);
        } else if (term.tid !== '_none') {
          this.requestChildrenTerms(term, level + 1);
        }
      };

      this.setCanonicalValue = function (value) {
        var hasChildren = (typeof (tidCache[value]) === 'object' && tidCache[value].length > 1);

        if (value === 0 || (this.forceDeepest && hasChildren)) { return; }

        if (value === '_none') {
          var $selects = this.$locationWrapper.find('select');

          for (var i = 0; i <= $selects.length - 1; i++) {
            var $select = $($selects[i]);
            if ($select.val() !== 0 && $select.val() !== '_none') {
              value = $select.val();
            }
          }
        }
        this.$locationField.val(value);
        this.addOK();
      };

      this.cleanSelectorChain = function (level) {
        var $selectorChain = this.$locationWrapper.find('.location-tree-selector');

        $selectorChain.each(function () {
          var $this = $(this);
          var thisLevel = parseInt($this.data('level'));
          if (thisLevel > level) {
            $this.remove();
          }
        });
      };

      function populateSelector(options, $selector) {
        var html = '';
        options.forEach(function (element) {
          html += createOptionElement(element);
        });

        $selector.html(html);
      }

      function createOptionElement(term) {
        var label = term.name;

        if (typeof term.field_codigo_division_admin === 'string') {
          label += ' - ' + term.field_codigo_division_admin;
        }
        return '<option value="' + term.tid + '">' + label + '</option>';
      }

      this.requestChildrenTerms = function (term, level) {
        var url = '/ajax/location/' + term.tid + '/';

        url = term.tid === 0 ? url + this.country : url + 'all';

        this.removeThrobber();
        this.addThrobber();
        var self = this;
        xhrChildren.abort('new request');
        xhrChildren = $.get(url, null, function (data, status) {
          self.processResult.bind(self, data, status, term, level)();
        }, 'json');
      };

      this.processResult = function (data, status, term) {
        this.removeThrobber();
        tidCache[term.tid] = mapTermsFromRequestToArray(data);
        this.setCanonicalValue(term.tid);

        if (data.length === 0 && term.tid !== 0) { return; }

        this.$lastSelectorInChain = this.$locationTreeSelectorWrapper.find('.location-tree-selector').last();
        var levelDoesExist = !isNaN(parseInt(this.$lastSelectorInChain.data('level')));
        var level = levelDoesExist ? this.$lastSelectorInChain.data('level') : -1;

        this.buildSelectorLevel(term.tid, level + 1);
      };

      this.addThrobber = function () {
        this.$locationTreeSelectorWrapper.addClass('ajax-progress');
        this.$locationTreeSelectorWrapper.append('<div class="throbber"></div>');
      };

      this.removeThrobber = function () {
        this.$locationTreeSelectorWrapper.removeClass('ajax-progress');
        this.$locationTreeSelectorWrapper.find('.throbber').remove();
      };

      this.addOK = function () {
        if (this.forceDeepest) {
          this.$locationTreeSelectorWrapper.append('<div class="ok">&#x2705;</div>');
        }
      };

      this.removeOK = function () {
        if (this.forceDeepest) {
          this.$locationTreeSelectorWrapper.find('.ok').remove();
        }
      };

      function mapTermsFromRequestToArray(data) {
        var mapped = Object.keys(data).map(function (k) {
          var term = {
            tid: data[k].tid,
            name: data[k].name
          };
          if (typeof data[k].field_codigo_division_admin === 'string') {
            term.field_codigo_division_admin = data[k].field_codigo_division_admin;
          }
          return term;
        });
        var output = [];

        output = output.concat(noneSelected, mapped);
        return output;
      }

      this.getCountry = function () {
        var countryInForm = this.$countrySelector.val();

        if (countryInForm && countryInForm !== '_none') {
          return countryInForm.toUpperCase();
        }
        return 'all';
      };

      // INIT functions

      this.listenToCountrySelector = function () {
        this.$countrySelector.on('change', function (e) {
          this.$locationTreeSelectorWrapper.remove();
          this.initialValue = 0;
          this.$locationField.val('');
          this.init();
        }.bind(this));
      };

      this.init = function () {
        var hierarchicalSelectorWrapper = '<div class="location-tree-selector-wrapper"></div>';

        this.country = this.getCountry();

        this.$locationWrapper.append(hierarchicalSelectorWrapper);
        this.$locationTreeSelectorWrapper = this.$locationWrapper.find('.location-tree-selector-wrapper');

        this.initialValue = isNaN(this.initialValue) ? 0 : this.initialValue;

        if (this.initialValue > 0) {
          this.getAllTermsInChain();
        } else {
          this.requestChildrenTerms({ tid: 0 }, 0);
        }
      };

      this.init();
      this.listenToCountrySelector();

    });
  };

})(jQuery, Drupal);
