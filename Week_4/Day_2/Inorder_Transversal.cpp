class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(!root)
        return {};
        stack<TreeNode*>s;
        stack<bool>visited;
        vector<int>ans;
        s.push(root);
        visited.push(0);
        while(!s.empty()){
            TreeNode*temp=s.top();
            s.pop();
            bool flag=visited.top();
            visited.pop();
            if(!flag){
                if(temp->right){
                    s.push(temp->right);
                    visited.push(0);
                }
                s.push(temp);
                visited.push(1);
                if(temp->left){
                    s.push(temp->left);
                    visited.push(0);
                }
            }
            else{
                ans.push_back(temp->val);
            }
        }
       return ans;
        
    }
};
