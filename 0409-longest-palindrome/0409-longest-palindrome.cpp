class Solution {
public:
    int longestPalindrome(string s) {
        if(s.length()==1) return 1;
        unordered_map<char, int> mp;
        for(int i=0; i<s.length(); i++) {
            mp[s[i]]++;
        }
        int c=0, single=0;;
        for(auto it: mp) {
            if(it.second%2==0) {
                c+=it.second;
                mp[it.first]=0;
            }
            else if(it.second%2==1) {
                c+=it.second-1;
                mp[it.first]=1;
            }
        }
        int flag=0;
        for(auto it: mp) {
            if(it.second==1) {
                flag=1;
                break;
            }
        }
        if(flag==1) {
            return c+1;
        }
        else {
            return c;
        }
    }
};