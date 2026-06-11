class Solution {
public:
    string decodeString(string s) {
         stack<int> counts;       
        stack<string> result; 
        string s1= "";
        int k = 0;

        for (int i=0;i<s.size();i++) {
            char c=s[i];
            if (c>='0' && c<='9') {
             k = k * 10 + (c - '0'); 
            } 
            else if (c == '[') {
                counts.push(k);
                result.push(s1);
                k = 0;
                s1 = "";
            } 
            else if (c == ']') {
                string temp = s1;
                s1 = result.top();
                result.pop();
                int repeat = counts.top();
                counts.pop();
                while (repeat--) {
                    s1 += temp;
                }
            } 
            else {
                s1 += c;
            }
        }

        return s1;
    }
};
