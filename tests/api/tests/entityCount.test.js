// Test checking wether SIASAR API is listing Entityforms properly

const config = require('../includes/config');
const request = require('../includes/request');


it('API is counting entities', async () => {
  expect.hasAssertions();
  var data = await request.getOutput('entity_count/entityform');
  data = JSON.parse(data);
  expect(data).toHaveProperty('comunidad');
  expect(data).toHaveProperty('sistema');
  expect(parseInt(data.comunidad)).toBeGreaterThan(0);
  expect(parseInt(data.sistema)).toBeGreaterThan(0);
});

