class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
        return 0;
        TreeNode*temp=root->right;
        root->right=root->left;
        root->left=temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};
