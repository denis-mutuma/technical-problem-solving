type MinStack struct {
	stack    []int
	minStack []int
}

func Constructor() MinStack {
	min := make([]int, 0)
	stack := make([]int, 0)
	minStack := MinStack{stack, min}
	return minStack
}

func (this *MinStack) Push(val int) {
	this.stack = append(this.stack, val)
	if len(this.minStack) == 0 {
		this.minStack = append(this.minStack, val)
	} else if val < this.minStack[len(this.minStack)-1] {
		this.minStack = append(this.minStack, val)
	} else {
		this.minStack = append(this.minStack, this.minStack[len(this.minStack)-1])
	}
}

func (this *MinStack) Pop() {
	this.stack = this.stack[:len(this.stack)-1]
	this.minStack = this.minStack[:len(this.minStack)-1]
}

func (this *MinStack) Top() int {
	top := this.stack[len(this.stack)-1]
	return top
}

func (this *MinStack) GetMin() int {
	min := this.minStack[len(this.minStack)-1]
	return min
}

/**
 * Your MinStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(val);
 * obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.GetMin();
 */