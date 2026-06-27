class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int diameter = 0;
        longestPath(root, diameter);
        return diameter;
    }
private:
    int longestPath(TreeNode* node, int& diameter) {
        if (!node) return 0;
        int leftPath = longestPath(node->left, diameter);
        int rightPath = longestPath(node->right, diameter);
        diameter = max(diameter, leftPath + rightPath);
        return 1 + max(leftPath, rightPath);
    }
};
