class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        // Temp Array copy paste approach
        // TC: O(n) SC: O(n)
        vector<int> temp(nums.size());

        for(int i=0; i<nums.size(); i++) {
            temp[(k+i)%nums.size()] = nums[i];
        }
        // Copying the data into original array
        nums = temp;
    }
};