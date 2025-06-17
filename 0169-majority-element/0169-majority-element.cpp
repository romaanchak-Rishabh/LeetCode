class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // Optimised Approach
        // TC: O(n)  SC:O(1)
        int count=0;
        int ele=nums[0];
        for(int i=0; i<nums.size(); i++) {
            if(count==0) ele=nums[i];
            count+=(ele==nums[i])?1:-1;
        }
        return ele;


        // Using Hashmap
        // TC:O(n)  SC:O(n)
        // unordered_map<int, int> mp;
        // for(auto num: nums) {
        //     mp[num]++;
        // }
        // for(auto it: mp) {
        //     if(it.second>nums.size()/2) return it.first;
        // }
        // return -1;
    }
};