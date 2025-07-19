class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        if(s==t) return true;
        unordered_map<char, int> mps;
        unordered_map<char, int> mpt;
        for(int i=0; i<s.length(); i++) {
            if(mps[s[i]]==0) {
                if(mpt[t[i]]==0) {
                    mps[s[i]]=i+1;
                    mpt[t[i]]=i+1;
                }
                else {
                    return false;
                }
            }
            else {
                if(mps[s[i]]!=mpt[t[i]]) return false;
            }
        }
        return true;
    }
};