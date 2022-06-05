/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func maxDepth(root *TreeNode) int {
	if root == nil {
		return 0
	}

	depth := 0
	q := make([]*TreeNode, 0)
	q = append(q, root)

	for len(q) > 0 {
		level := make([]*TreeNode, 0)
		for _, node := range q {
			if node.Left != nil {
				level = append(level, node.Left)
			}
			if node.Right != nil {
				level = append(level, node.Right)
			}
			q = level
		}
		depth++
	}
	return depth
}