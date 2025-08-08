class Solution {
public:
    void preorder(TreeNode* node, vector<int>& result) {
        if (!node) return;
        result.push_back(node->val);           // Visit root
        preorder(node->left, result);          // Visit left
        preorder(node->right, result);         // Visit right
    }

    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        preorder(root, result);
        return result;
    }
};
