// Request engine

// request.js
const http = require('http');
const config = require('../includes/config');

var request = {
  make: function (host, endpoint) {
    return new Promise(resolve => {
      var options = {
        protocol: 'http:',
        host: host,
        path: endpoint

      }
      http.get(options, response => {
        let data = '';
        response.on('data', _data => data += _data);
        response.on('end', () => resolve(data));
      });
    });
  },
  getOutput: function (path) {
    var full_path = config.api + path;
    return this.make(config.host, full_path).then(output => output);
  }
}

module.exports = request;
