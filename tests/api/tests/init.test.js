// Test checking wether SIASAR API is responding or not

const config = require('../includes/config');
const request = require('../includes/request');


// The assertion for a promise must be returned.
it('works with async/await', async () => {
  expect.assertions(1);
  const data = await request.getOutput();
  expect(data).toEqual('Services Endpoint "api_v1" has been setup successfully.');
});
