class Solution {
public:
    // int findDuplicate(vector<int>& nums) {
    //     for(int i=0; i<nums.size(); i++) {
    //         if(nums[i+1]==-1) return i+1;
    //         else nums[nums[i+1]]=-1;
    //     }
    //     return 0;
    // }

    int findDuplicate(vector<int>& nums) {
        while(nums[0]!=nums[nums[0]]) swap(nums[0], nums[nums[0]]);
        return nums[0];
    }



    //bad approach
    // int findDuplicate(vector<int>& nums) {
    //     int isum=(nums.size()*(nums.size()-1))/2, sum=0;
    //     for(int i=0; i<nums.size(); i++) {
    //         sum+=nums[i];
    //     }
    //     cout<<isum<<" "<<sum;
    //     return sum-isum;
    // }
};