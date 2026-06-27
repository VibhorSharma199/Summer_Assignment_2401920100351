class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validate(root, nullptr, nullptr);
    }
private:
    bool validate(TreeNode* node, TreeNode* min_node, TreeNode* max_node) {
        if (!node) return true;
        if ((min_node && node->val <= min_node->val) || (max_node && node->val >= max_node->val)) {
            return false;
        }
        return validate(node->left, min_node, node) && validate(node->right, node, max_node);
    }
};
