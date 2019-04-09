# siasar_services_session
# README file for SIASAR Services Session


INTRODUCTION
------------
Extend Services (https://www.drupal.org/project/services) module authentication.

This module allows user authentication towards a web service like services and
drupal does, but without cookies.
Once login, requests to webservices should send csrf token and session token
each time they need to authenticate user.


REQUIREMENTS
------------
This module requires the following modules:
* Services (https://www.drupal.org/project/services)


INSTALLATION
------------
* Install as you would normally install a contributed drupal module.
  See: https://drupal.org/documentation/install/modules-themes/modules-7
  for further information.


CONFIGURATION
-------------
* Enable "SIASAR Session Token authentication" for a Service Endpoint.
* Disable "Services session Authentication" for the Service Endpoint to be sure
to only be able to connect thanks to session id, and no cookies.
* By default, all calls which are not resqueted by GET, HEAD, OPTIONS or TRACE
methods need to send CSRF token. If you don't want this CSRF validation, add
"csrf validation" to false in your resource definition controller.

HOW IT WORKS
------------
First time login webservice is called, be sure to give session_token and
session_id back to consumer, so it can make calls with this sessions datas in
headers. See helper function services_session_token_auth_get_tokens().
Consumer will have to send session_token as X-CSRF-TOKEN and session_id as
X-USER-SESSION-TOKEN to authenticate a user for this request.
If not authentication is made, or sessions are wrong, anonymous user will be
loaded.


