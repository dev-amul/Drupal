# services_session_token_auth
# README file for Services Session Token Authentication

CONTENTS OF THIS FILE
---------------------
* Introduction
* Requirements
* Installation
* Configuration
* How it works
* Troubleshooting
* Maintainers

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
* Enable "Services session Token Authentication" for a Service Endpoint.
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


TROUBLESHOOTING
---------------
* If you have troubles with cookies (if webservice consumer send cookie), add
this code to your settings.php, replacing condition by the one matching to your
service path or checking service domain.
```php
// Remove Cookies if we are in api path.
if (arg(0) == 'api') {
  ini_set('session.use_cookies', 0);         // Disable cookies
  ini_set('session.use_only_cookies', 0);    // Really disable cookies
  ini_set('session.use_trans_sid', 1);
  // Add user session token to url to preserve cache and etag.
  if (!empty($_SERVER['HTTP_X_USER_SESSION_TOKEN'])) {
    $_SERVER['REQUEST_URI'] .= (strpos($_SERVER['REQUEST_URI'], '?') !== FALSE ? '&' : '?') . 'HTTP_X_USER_SESSION_TOKEN=' . $_SERVER['HTTP_X_USER_SESSION_TOKEN'];
  }
}
```


MAINTAINERS
-----------
Current maintainers:
* Fabien Clément (goz) - https://www.drupal.org/u/goz

This project has been developed by:
* Commerce Guys
  Commerce Guys are the creators of and experts in Drupal Commerce,
  the eCommerce solution that capitalizes on the virtues and power of Drupal,
  the premier open-source content management system.
  We focus our knowledge and expertise on providing online merchants with
  the powerful, responsive, innovative eCommerce solutions they need to thrive.
  Visit https://commerceguys.com/ for more information.
