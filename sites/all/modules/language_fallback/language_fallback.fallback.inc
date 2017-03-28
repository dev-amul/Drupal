<?php

/**
 * @file
 * Definition of localeWithFallback and localeContextWithFallback.
 */
class localeWithFallback implements ArrayAccess {

  private $langcode;
  private $cache = array();
  private $fallback;

  public function __construct($langcode, $fallback = '') {
    $languages = language_list();
    $this->langcode = isset($languages[$langcode]) ? $langcode : language_default('language');
    $this->cache = array();
    $this->fallback = isset($languages[$fallback]) ? $fallback : language_default('langauge');
  }

  public function offsetExists($offset) {
    return (isset($this->cache[$offset]));
  }

  public function &offsetGet($offset) {
    if (!isset($this->cache[$offset])) {
      $this->cache[$offset] = new localeContextWithFallback($this->langcode, $this->fallback, $offset);
    }
    return $this->cache[$offset];
  }

  /**
   * There is no use in setting or unsetting an offset. Whether or not an offset
   * is set is determined by whether or not a translation for this string exists
   * in the database, which is ultimatly resolved by the Drupal translation
   * system and the locale() function.
   * See also localeContextWithFallback::offsetGet() and
   * localeContextWithFallback::offsetExists().
   */
  public function offsetSet($offset, $value) {
    return;
  }

  public function offsetUnset($offset) {
    return;
  }

}

class localeContextWithFallback implements ArrayAccess {

  private $first_language;
  private $second_language;
  private $context = '';
  private $fallback;

  public function __construct($langcode, $fallback, $context) {
    $languages = language_list();
    $this->first_language = isset($languages[$langcode]) ? $langcode : language_default('language');
    $this->second_language = isset($languages[$fallback]) ? $fallback : language_default('language');
    $this->context = $context;
    $second_lang_obj = $languages[$this->second_language];
    // If the fallback is the default language, we don't need a
    // localeContextWithFallback since the default language does not have a
    // fallback. Otherwise we use a localeContextWithFallback so we gradually
    // fall back to the default language (cascading fallbacks, see
    // http://drupal.org/node/1877880 for more info.
    if ($this->second_language != language_default('language')) {
      $this->fallback = new localeContextWithFallback($this->second_language, isset($languages[$second_lang_obj->fallback]) ? $second_lang_obj->fallback : language_default('language'), $context);
    }
  }

  public function offsetGet($offset) {
    $translation = $offset;
    if (function_exists('locale')) {
      $locale_t = &drupal_static('locale');
      $translation = locale($offset, $this->context, $this->first_language);
      // Check whether string returned was a translation or the untranslated
      // original. Have to check locale()'s static variable, because just
      // comparing the strings might be misleading.
      // (Stupid example: (en) village == (fr) village.).
      // Locale sets the value to TRUE if the string is not found (if it is found
      // it sets the value to that string. So if the value === TRUE we know there
      // was no translation found for this language and we can check the fallback.
      if ($locale_t[$this->first_language][$this->context][$offset] === TRUE) {
        $translation = $this->fallback[$offset];
      }
    }
    return $translation;
  }

  public function offsetExists($offset) {
    if (function_exists('locale')) {
      $locale_t = &drupal_static('locale');
      $translation = locale($offset, $this->context, $this->first_language);
      if ($locale_t[$this->first_language][$this->context][$offset] !== TRUE) {
        return TRUE;
      }
      else {
        return isset($this->fallback[$offset]);
      }
    }
    else {
      return isset($this->fallback[$offset]);
    }
  }

  /**
   * There is no use in setting or unsetting an offset. Whether or not an offset
   * is set is determined by whether or not a translation for this string exists
   * in the database, which is ultimatly resolved by the Drupal translation
   * system and the locale() function.
   * See also localeContextWithFallback::offsetGet() and
   * localeContextWithFallback::offsetExists().
   */
  public function offsetSet($offset, $value) {
    return;
  }

  public function offsetUnset($offset) {
    return;
  }

}
