// Configuration options for all tests, such as URL for the SIASAR API, SIASAR user, etc.
//
//

function getHostNameFromEnv() {
  var env = process.env.NODE_ENV;
  var api;

  switch (env) {
    case 'local':
      api = 'local.siasar.org';
      break;
    case 'dev':
      api = 'dev.siasar.org';
    default:
      api = 'staging.siasar.org';
  }

  return api;
}

var config = {
  host: getHostNameFromEnv(),
  api: '/rest/',
  user: 'api_test',
  pass: 'api_test'

}

module.exports = config;
