class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int>ans;
        ListNode*temp;
        temp=head;
        while(temp){
            ans.push_back(temp->val);
            temp=temp->next;
        }
        temp=head;
        int i=ans.size()-1;
        while(temp){
            temp->val=ans[i];
            i--;
            temp=temp->next;
        }
        return head;
        
    }
};
