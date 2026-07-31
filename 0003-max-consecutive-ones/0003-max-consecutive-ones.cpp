class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int curr = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]) curr++;
            else {
                max = max > curr ? max : curr;
                curr = 0;
            }
        }
        max = max > curr ? max : curr;
        return max;
    }
};