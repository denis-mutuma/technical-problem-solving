module.exports = function filter_list(l) {
    // Return a new array with the strings filtered out
    let nums = []
    for (let elem of l) {
        if (typeof (elem) === 'number') {
            nums.push(elem)
        }
    }
    return nums
}