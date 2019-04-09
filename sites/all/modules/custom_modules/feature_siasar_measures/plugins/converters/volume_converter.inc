<?php

/**
 * @file
 * Plugin definition for volume measures converter.
 */

$plugin = array(
  'title' => t('Volume converter'),
  'description' => t('Converter for volume measures.'),
  'convert callback' => 'volume_converter',
);

/**
 * Volume measures converter callback for measures logic.
 *
 * @param float $value
 *   Value in $from units that should be converted into $to units
 * @param Entity $from
 *   Units entity in which $value is represented
 * @param Entity $to
 *   Units entity into which $value should be converted
 *
 * @return float
 *   $value converted into $to units
 */
function volume_converter($value, $from, $to) {
  $si_value = $value / $from->factor;
  return $si_value * $to->factor;
}
