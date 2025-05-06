class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // Two pointer approach
        // TC: O(n) SC: O(1)
        int i=0;
        int j=0;

        while(j<nums.size()) {
            if(nums[j]!=0) swap(nums[i++], nums[j++]);
            else j++;
        }
    }
};