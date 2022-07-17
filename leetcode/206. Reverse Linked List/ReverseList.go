/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func reverseList(head *ListNode) *ListNode {
	if head == nil {
		return nil
	}

	prev := &ListNode{head.Val, nil}
	head = head.Next
	for head != nil {
		temp := head.Next
		head.Next = prev
		prev = head
		head = temp
	}
	return prev
}

//***************************************

func reverseList(head *ListNode) *ListNode {
	if head == nil {
		return nil
	}

	next := head.Next
	prev := head
	head.Next = nil
	head = next

	for head != nil {
		next := head.Next
		head.Next = prev
		prev = head
		head = next
	}
	return prev
}

