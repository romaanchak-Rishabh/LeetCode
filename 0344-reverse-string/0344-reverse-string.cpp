class Solution {
public:
    void reverseString(vector<char>& s) {
        int f=0;
        int n=s.size();
        int e=n-1;
        while(f<=e) {
            swap(s[f++], s[e--]);
        }
    }
};