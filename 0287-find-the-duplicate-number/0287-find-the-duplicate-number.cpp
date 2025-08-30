class Solution {
public:
    //bad approach -> This modifies the real array Nums
    // int findDuplicate(vector<int>& nums) {
    //     for(int i=0; i<nums.size(); i++) {
    //         if(nums[i+1]==-1) return i+1;
    //         else nums[nums[i+1]]=-1;
    //     }
    //     return 0;
    // }

// Shuffle numbers until you find 2 same
    int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]]) swap(nums[0], nums[nums[0]]);
        return nums[0];
    }
};