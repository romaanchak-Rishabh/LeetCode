class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Replace each number with a valid number and then moving forward
        // TC: O(n) SC: O(1)
        int index = 0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]!=val) nums[index++] = nums[i];
        }
        return index;
    }
};