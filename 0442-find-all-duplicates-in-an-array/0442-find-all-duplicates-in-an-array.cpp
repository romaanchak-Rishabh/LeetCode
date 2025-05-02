class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // 2nd besgt approach TC: O(N) SC: O(N)
        // map<int, int> mp;
        // for(auto x: nums) mp[x]++;
        // vector<int> ans;
        // for(auto x: mp) if(x.second==2) ans.push_back(x.first);

        // sort(ans.begin(), ans.end());

        // return ans;


        // Best approach TC: O(N) SC: O(1)
        vector<int> ans;
        for(int i=0; i<nums.size(); i++) {
            if(nums[abs(nums[i]) - 1] < 0) {
                ans.push_back(abs(nums[i]));
            }
            else nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
        }
        return ans;
    }
};