/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function (nums, target) {
    const m = new Map();
    for (let i in nums) {
        if (m.has(target - nums[i])) {
            return [i, m.get(target - nums[i])];
        } else {
            m.set(nums[i], i);
        }
    }
    return -1;
};