class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()>t.length()) return false;
        if(s==t) return true;
        for(int i=0; i<t.length(); i++) {
            if(t[i]==s[0]) s.erase(0,1);
            if(s.length()==0) return true;
        }
        return false;
    }
};