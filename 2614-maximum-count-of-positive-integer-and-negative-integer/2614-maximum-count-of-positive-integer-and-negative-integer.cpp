class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos=0, neg=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==0) continue;
            else if(nums[i]>0) pos++;
            else neg++;
        }
        return max(pos, neg);
    }
};