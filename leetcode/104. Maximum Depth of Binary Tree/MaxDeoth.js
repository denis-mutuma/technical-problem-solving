/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var maxDepth = function (root) {
    let depth = 0;
    if (!root) return depth
    let q = [root];

    while (q.length) {
        let level = [];
        for (const node of q) {
            if (node.left !== null) {
                level.push(node.left)
            }
            if (node.right !== null) {
                level.push(node.right)
            }
            q = level
        }
        depth++
    }
    return depth

};