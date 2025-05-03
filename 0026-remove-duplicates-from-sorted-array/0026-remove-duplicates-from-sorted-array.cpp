class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int f=0;
        int l=0;
        while(l<=nums.size()-1) {
            if(nums[f]==nums[l]) l++;
            else {
                f++;
                nums[f]=nums[l];
            }
        }
        return f+1;
    }
};