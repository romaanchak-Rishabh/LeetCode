class Solution {
public:
    int mirrorReflection(int p, int q) {
        int GCD = gcd(p,q);
        p /= GCD;
        q /= GCD;
        
        if(q % 2 == 0) return 0;
        
        if(p % 2 == 0) return 2;
        
        return 1;
    }
};