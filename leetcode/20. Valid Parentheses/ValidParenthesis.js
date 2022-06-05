/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function (s) {
    // stack = []
    // loop through the string
    // push opening to stack
    // check for closing or if stack is empty
    // if stack is not empty after looping, return false

    let stack = [];
    for (let bracket of s) {
        if (bracket === '{' || bracket === '(' || bracket === '[') {
            stack.push(bracket);
        }

        else if (bracket === '}') {
            if (stack.length === 0 || stack.pop() !== '{') {
                return false;
            }
        } else if (bracket === ')') {
            if (stack.length === 0 || stack.pop() !== '(') {
                return false;
            }
        } else if (bracket === ']') {
            if (stack.length === 0 || stack.pop() !== '[') {
                return false;
            }
        }
    }
    if (stack.length) {
        return false;
    } else {
        return true;
    }
};