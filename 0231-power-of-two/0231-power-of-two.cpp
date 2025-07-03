class Solution {
    private:
    bool ans=true;
    void solve(int n) {
        if(n==1) {
            return;
        }
        
        solve(n/2);
        if(n%2!=0 && n!=1)  ans=false;
    }
public:
    bool isPowerOfTwo(int n) {
        if(n<1) {
            return false;
        }
        solve(n);
        return ans;
    }
};