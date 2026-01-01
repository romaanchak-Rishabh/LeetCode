class Solution {
public:
    bool check(vector<int>& nums) {
        int flag=-1;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i+1]<nums[i]) {
                flag=i;
                break;
            }
        }
        cout<<flag;
        if(flag==-1) return true;
        for(int i=0; i<flag; i++) {
            if(i+1< flag) {
                if(nums[i]>nums[i+1]) return false;
            }
        }
        for(int i=flag+1; i<nums.size()-1; i++) {
            if(nums[i]>nums[i+1]) return false;
        }
        if(nums[nums.size()-1]>nums[0]) return false;
        return true;
    }
};