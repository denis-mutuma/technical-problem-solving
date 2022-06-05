
var MinStack = function () {
    this.stack = [];
    this.minStack = [];

};

/** 
 * @param {number} val
 * @return {void}
 */
MinStack.prototype.push = function (val) {
    this.stack.push(val);
    if (this.minStack.length) {
        if (val < this.minStack[this.minStack.length - 1]) {
            this.minStack.push(val);
        } else {
            this.minStack.push(this.minStack[this.minStack.length - 1]);
        }
    } else {
        this.minStack.push(val);
    }
};

/**
 * @return {void}
 */
MinStack.prototype.pop = function () {
    if (this.stack.length && this.minStack.length) {
        this.minStack.pop();
        return this.stack.pop();
    } else {
        return null
    }
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
    if (this.stack.length) {
        return this.stack[this.stack.length - 1]
    } else {
        return null;
    }
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function () {
    if (this.stack.length && this.minStack.length) {
        return this.minStack[this.minStack.length - 1]
    } else {
        return null
    }
};

/** 
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(val)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */