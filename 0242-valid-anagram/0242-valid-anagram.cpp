class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char, int> mps;
        unordered_map<char, int> mpt;
        for(int i=0; i<s.length(); i++) {
            mps[s[i]]++;
            mpt[t[i]]++;
        }
        for(int i=0; i<s.length(); i++) {
            if(mps[s[i]]!=mpt[s[i]]) return false;
        }
        return true;
    }
};