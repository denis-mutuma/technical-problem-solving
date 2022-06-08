type MinHeap []int

func (h MinHeap) Len() int           { return len(h) }
func (h MinHeap) Less(i, j int) bool { return h[i] < h[j] }
func (h MinHeap) Swap(i, j int)      { h[i], h[j] = h[j], h[i] }

func (h *MinHeap) Push(x interface{}) { *h = append(*h, x.(int)) }
func (h *MinHeap) Pop() interface{} {
	old := *h
	n := len(old)
	x := old[n-1]
	*h = old[0 : n-1]
	return x
}

type KthLargest struct {
	k    int
	nums *MinHeap
}

func Constructor(k int, nums []int) KthLargest {
	minHeap := MinHeap(nums)
	hp := KthLargest{k: k, nums: &minHeap}
	heap.Init(hp.nums)
	for hp.nums.Len() > k {
		heap.Pop(hp.nums)
	}
	return hp
}

func (this *KthLargest) Add(val int) int {
	heap.Push(this.nums, val)
	for this.nums.Len() > this.k {
		heap.Pop(this.nums)
	}
	return (*this.nums)[0]
}

/**
 * Your KthLargest object will be instantiated and called as such:
 * obj := Constructor(k, nums);
 * param_1 := obj.Add(val);
 */