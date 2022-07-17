/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    int maxDepth(TreeNode *root)
    {

        int depth = 0;
        if (root == nullptr)
        {
            return depth;
        }

        queue<TreeNode *> q;

        q.push(root);
        while (!q.empty())
        {
            queue<TreeNode *> new_q;
            while (!q.empty())
            {
                TreeNode *node = q.front();
                if (node->right != nullptr)
                {
                    new_q.push(node->right);
                }
                if (node->left != nullptr)
                {
                    new_q.push(node->left);
                }
                q.pop();
            }
            q = new_q;
            depth++;
        }
        return depth;
    }
};

//*****************************************************

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == nullptr)
        {
            return 0;
        }

        return max(maxDepth(root->right), maxDepth(root->left)) + 1;
    }
};