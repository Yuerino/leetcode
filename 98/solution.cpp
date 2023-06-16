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
class Solution {
public:
    bool isValidBST(TreeNode *root) {
        return _isValidBST(root, {}, {});
    }

private:
    bool _isValidBST(TreeNode *node, std::optional<int> minValue, std::optional<int> maxValue) {
        if (node == nullptr) return true;
        if ((minValue && node->val <= minValue.value()) ||
            (maxValue && node->val >= maxValue.value()))
            return false;
        return _isValidBST(node->left, minValue, node->val) && _isValidBST(node->right, node->val, maxValue);
    }
};
