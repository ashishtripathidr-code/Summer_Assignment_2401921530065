class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size() > s2.size()) return false;
        vector<int>abc(26,0);
        bool b1;
        for(int i=0;i<s1.size();i++)
        {
            abc[(s1[i]-'a')]++;
        }
        for(int i=0;i<s1.size();i++)
        {
            abc[(s2[i]-'a')]--;
        }
        int index=0;
        for(int i=s1.size();i<s2.size();i++)
        {
            b1=1;
            for(int j=0;j<26;j++)
            {
                if(abc[j]!=0)b1=0;
            }
            if(b1==1)return true;
            abc[(s2[index]-'a')]++;
            index++;
            abc[(s2[i]-'a')]--;
           
        }
        b1=1;
            for(int j=0;j<26;j++)
            {
                if(abc[j]!=0)b1=0;
            }
            if(b1==1)return true;

         return false;   
    }
};
