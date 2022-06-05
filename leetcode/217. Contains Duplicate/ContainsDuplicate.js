/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function (nums) {
    const m = new Map();
    for (let i of nums) {
        if (m.has(i)) {
            return true
        } else {
            m.set(i);
        }
    }
    return false;
};