class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // Sum difference Approach
        // TC: O(N) SC: O(1)
        // int total=(nums.size()*(nums.size()+1))/2;
        // int missing_total = 0;
        // for(int i=0; i<nums.size(); i++) {
        //     missing_total+=nums[i];
        // }
        // return total-missing_total;

        //XOR Approach
        // TC: O(N) SC: O(1)
        int ans=0;
        // 1: XOR all values in array
        for(int i=0; i<nums.size(); i++) {
            ans^=nums[i];
        }

        // 2: XOR all the values in [0,N]
        for(int i=0; i<=nums.size(); i++) {
            ans^=i;
        }
        return ans;
    }
};