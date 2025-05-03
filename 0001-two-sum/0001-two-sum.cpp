class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
    //Brute Force approach
    // TC: O(n^2) SC: O(1)
    // vector<int> ans;
    //     for(int i=0; i<nums.size(); i++) {
    //         for(int j=i+1; j<nums.size(); j++) {
    //             if(nums[i]+nums[j]==target) {
    //                 ans.push_back(i);
    //                 ans.push_back(j);
    //                 return ans;
    //             }
    //         }
    //     }
    //     return ans;


    // Storing values in Map and finding the left value in map. If found, return pair.
    // TC: O(N) SC: O(N)
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            int left = target-nums[i];
            if(mp.find(left)!=mp.end()) {
                return {mp[left], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};