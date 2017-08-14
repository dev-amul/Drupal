// First test

const config = require('../includes/config.js');
const sum = require('../methods/sum');

test('adds 1 + 2 to equal 3', () => {
  expect(sum(1, 2)).toBe(3);
});
