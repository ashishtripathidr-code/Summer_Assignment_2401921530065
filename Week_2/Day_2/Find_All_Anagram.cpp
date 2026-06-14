class Solution {
public:
     bool allzero(vector<int>count){
        for(int i=0;i<count.size();i++){
            if(count[i]!=0)
            return 0;
        }
        return 1;
     }
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        vector<int>count(26, 0);

        for (int i=0;i<p.size();i++) {
            count[p[i] - 'a']++;
        }
         int i=0,j=0;
         int k=p.size();
         while(j<s.size()){
            count[s[j]-'a']--;
             if(j-i+1==k){
                if(allzero(count)){
                    result.push_back(i);
                }
                count[s[i]-'a']++;
                i++;
             }
             j++;
         }

        return result;
    }
};
