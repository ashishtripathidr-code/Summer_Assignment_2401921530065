class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
             vector<int> result;
        if (s.size() < p.size()) return result;

        vector<int> countP(26, 0), countS(26, 0);

        for (int i=0;i<p.size();i++) {
            countP[p[i] - 'a']++;
        }
        for (int i = 0; i < s.size(); i++) {
            countS[s[i] - 'a']++;

            if (i >= p.size()) {
                countS[s[i - p.size()] - 'a']--;
            }

            if (countS == countP) {
                result.push_back(i - p.size() + 1);
            }
        }

        return result;
    }
};
