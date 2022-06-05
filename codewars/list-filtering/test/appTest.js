const assert = require('chai').assert;
const app = require('../app')

describe("Tests", () => {
    it("Strings should be removed and an array containing only numbers should be returned", () => {
        assert.deepEqual(app([1, 2, 'a', 'b']), [1, 2], 'For input [1,2,"a","b"]');
        assert.deepEqual(app([1, 'a', 'b', 0, 15]), [1, 0, 15], 'For input [1,"a","b",0,15]');
        assert.deepEqual(app([1, 2, 'aasf', '1', '123', 123]), [1, 2, 123], 'For input [1,2,"aasf","1","123",123]');
    });
});