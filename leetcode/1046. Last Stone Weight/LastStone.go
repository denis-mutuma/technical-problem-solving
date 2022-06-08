func lastStoneWeight(stones []int) int {
	h := &IntHeap{}
	for _, num := range stones {
		heap.Push(h, num*-1)
	}

	heap.Init(h)
	for h.Len() > 0 {
		x := heap.Pop(h).(int)
		x *= -1

		y := heap.Pop(h).(int)
		y *= -1

		if x != y {
			heap.Push(h, (x-y)*-1)
		}

		if len(*h) == 1 {
			res := heap.Pop(h).(int)
			res *= -1
			return res
		}
	}
	return 0
}

type IntHeap []int

func (h IntHeap) Len() int           { return len(h) }
func (h IntHeap) Less(i, j int) bool { return h[i] < h[j] }
func (h IntHeap) Swap(i, j int) {
	if len(h) > 0 {
		h[i], h[j] = h[j], h[i]
	}
}

func (h *IntHeap) Push(x interface{}) {
	*h = append(*h, x.(int))
}

func (h *IntHeap) Pop() interface{} {
	x := 0
	if len(*h) > 0 {
		old := *h
		n := len(old)
		x = old[n-1]
		*h = old[0 : n-1]
	}
	return x
}