INTRODUCTION
------------
The Entityform Structure Web Service module provides a service resource which
exposes Drupal's entityform fields structure to the Service API. It provides
formatted field information such as label, widget, options (select fields), and
whether they are required or not. This is necessary for mobiles apps and other
ends to understand the fields structure and their types before accessing their
values.

It has an index resource which exposes a list of existing entityforms and a
retrieve resource for filtering by single entityform type (not ID).

It also supports the TableField module.

Required modules
Services
Services Entity


REQUIREMENTS
------------
This module requires the following modules:
 * Services (https://www.drupal.org/project/services)

 * Services Entity (https://www.drupal.org/project/services_entity)
