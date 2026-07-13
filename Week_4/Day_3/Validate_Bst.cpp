class Solution {
public:
    bool checkBST(TreeNode* root, long long minVal, long long maxVal) {
        if (!root) 
        return true;
        
        if (root->val <= minVal || root->val >= maxVal) 
        return false;
        
        return checkBST(root->left, minVal, root->val) &&
               checkBST(root->right, root->val, maxVal);
    }
    bool isValidBST(TreeNode* root) {
        return checkBST(root,LLONG_MIN,LLONG_MAX);
    }
};
