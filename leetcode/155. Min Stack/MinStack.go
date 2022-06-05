type MinStack struct {
	stack []int
	min   []int
}

func Constructor() MinStack {
	stack := make([]int, 0)
	min := make([]int, 0)
	minStack := MinStack{stack, min}
	return minStack
}

func (this *MinStack) Push(val int) {
	this.stack = append(this.stack, val)
	if len(this.min) == 0 {
		this.min = append(this.min, val)
	} else if val <= this.min[len(this.min)-1] {
		this.min = append(this.min, val)
	}
}

//2, 0, 3
//2, 0, 0

func (this *MinStack) Pop() {
	if this.stack[len(this.stack)-1] == this.min[len(this.min)-1] {
		this.stack = this.stack[:len(this.stack)-1]
		this.min = this.min[:len(this.min)-1]
		return
	}
	this.stack = this.stack[:len(this.stack)-1]
}

func (this *MinStack) Top() int {
	top := this.stack[len(this.stack)-1]
	return top
}

func (this *MinStack) GetMin() int {
	if len(this.min) > 0 {
		min := this.min[len(this.min)-1]
		return min
	}
	return 0
}

/**
 * Your MinStack object will be instantiated and called as such:
 * obj := Constructor();
 * obj.Push(val);
 * obj.Pop();
 * param_3 := obj.Top();
 * param_4 := obj.GetMin();
 */