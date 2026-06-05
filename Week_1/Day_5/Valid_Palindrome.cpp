class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty())
        return true;
        string str;
        for(int i=0;i<s.size();i++){
            if (isalnum(s[i])) {
                str += tolower(s[i]);
            }
        }
        int i=0,j=str.size()-1;
        while(i<j){
            if(str[i]!=str[j]){
                return false;
            }
            else{
                i++;
                j--;
            }
        }
        return true;
    }
};
