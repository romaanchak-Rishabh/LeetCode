class Solution {
public:
// brute force approach
    // int pivotIndex(vector<int>& nums) {
    //     int lsum, rsum;
    //     for(int i=0; i<nums.size(); i++) {
    //         lsum=0;
    //         rsum=0;
    //         for(int j=0; j<i; j++) {
    //             lsum+=nums[j];
    //         }
    //         for(int k=i+1; k<nums.size(); k++) {
    //             rsum+=nums[k];
    //         }
    //         if(lsum==rsum) return i;
    //     }
    //     return -1;
    // }



    int pivotIndex(vector<int>& nums) {
        vector<int> lsum(nums.size(), 0);
        vector<int> rsum(nums.size(), 0);
        for(int i=1; i<nums.size(); i++) {
            lsum[i]=lsum[i-1] + nums[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--) {
            rsum[i]=rsum[i+1] + nums[i+1];
        }
        for(int i=0; i<nums.size(); i++) {
            if(lsum[i] == rsum[i]) return i;
        }
        return -1;
    }
};