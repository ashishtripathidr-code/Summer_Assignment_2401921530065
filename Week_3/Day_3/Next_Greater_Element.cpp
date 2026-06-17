class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>next(nums2.size(),-1);
        stack<int>st;
        for(int i=0;i<nums2.size();i++){
            while(!st.empty() && nums2[st.top()]<nums2[i]){
                next[st.top()]=nums2[i];
                st.pop();
            }
            st.push(i);
        }
        vector<int>ans;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums2[j]==nums1[i]){
                ans.push_back(next[j]);
                break;
                }
            }
        }
        return ans;
    }
};
