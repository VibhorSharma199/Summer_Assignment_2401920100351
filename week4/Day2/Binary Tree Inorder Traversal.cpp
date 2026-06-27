class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        return ans;
    }
private:
    void inorder(TreeNode* node, vector<int>& ans) {
        if (!node) return;
        inorder(node->left, ans);
        ans.push_back(node->val);
        inorder(node->right, ans);
    }
};
