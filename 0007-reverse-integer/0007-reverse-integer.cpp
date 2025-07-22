class Solution {
public:
    int reverse(int x) {
        long long rev=0, digit=0;
        while(x!=0) {
            digit=x%10;
            if((rev>INT_MAX/10) || (rev<INT_MIN/10)) {
                return 0;
            }
            x/=10;
            rev=(rev*10)+digit;
        }
        return rev;
    }
};