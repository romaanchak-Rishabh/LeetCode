class Solution {
public:
    void sortColors(vector<int>& nums) {
        // 3 pointer Approach
        // TC: O(n) SC: O(1)
        int l=0, m=0, r=nums.size()-1;
        while(m<=r) {
            if(nums[m]==0) swap(nums[m++], nums[l++]);
            else if(nums[m]==1) m++;
            else swap(nums[m], nums[r--]);
        }
    }
};