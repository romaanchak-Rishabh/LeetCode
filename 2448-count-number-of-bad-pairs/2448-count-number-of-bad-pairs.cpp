class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long c=0;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            c+= i-mp[i-nums[i]]++;
        }
        return c;
    }
};