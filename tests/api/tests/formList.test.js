// Test checking wether SIASAR API is listing Entityforms properly

const config = require('../includes/config');
const request = require('../includes/request');


it('API is listing form types', async () => {
  expect.assertions(1);
  var data = await request.getOutput('forms');
  data = JSON.parse(data);
  expect(data).toHaveProperty('comunidad');
});

