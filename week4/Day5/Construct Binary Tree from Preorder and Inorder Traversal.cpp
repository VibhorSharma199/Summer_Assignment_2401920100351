class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preorderIdx = 0;
        unordered_map<int, int> inorderIdxMap;
        for (int i = 0; i < inorder.size(); ++i) {
            inorderIdxMap[inorder[i]] = i;
        }
        return arrayToTree(preorder, preorderIdx, inorderIdxMap, 0, preorder.size() - 1);
    }
private:
    TreeNode* arrayToTree(vector<int>& preorder, int& preorderIdx, unordered_map<int, int>& inorderIdxMap, int left, int right) {
        if (left > right) return nullptr;
        int rootValue = preorder[preorderIdx++];
        TreeNode* root = new TreeNode(rootValue);
        root->left = arrayToTree(preorder, preorderIdx, inorderIdxMap, left, inorderIdxMap[rootValue] - 1);
        root->right = arrayToTree(preorder, preorderIdx, inorderIdxMap, inorderIdxMap[rootValue] + 1, right);
        return root;
    }
};
