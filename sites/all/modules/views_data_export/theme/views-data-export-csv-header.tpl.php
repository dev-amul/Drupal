<?php

// Begin file with UTF-8 BOM, if needed.
print $optional_utf8_bom;

// Print out header row, if option was selected.
if ($options['header']) {
  print implode($separator, $header) . "\r\n";
}
