class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int min=INT_MAX;
        int res=0;
        for(int i=0; i<nums.size(); i++) {
            int num=abs(nums[i]);
            if(num-0 <= min) {
                if(num-0 == min && nums[i]>0) {
                    res=nums[i];
                }
                else if(num-0 == min && nums[i]<0) {
                    continue;
                }
                else {
                    min=num;
                    res=nums[i];
                }
            }
        }
        return res;
    }
};