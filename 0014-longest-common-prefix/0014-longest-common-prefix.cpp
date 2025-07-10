class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s=strs[0];
        
        for(int i=0; i<strs.size(); i++) {
            string cmp="";
            for(int j=0; j<min(s.size(), strs[i].size()); j++) {
                if(s[j]==strs[i][j]) {
                    cmp.push_back(s[j]);
                }
                else break;
            }
            s=cmp;
        }
        return s;
    }
};