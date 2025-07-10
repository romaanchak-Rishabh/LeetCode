class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(2*n);
        for(int i=0; i<nums.size(); i++) {
            ans[i]=nums[i];
            ans[i+n]=nums[i];
        }
        // for(int i=0; i<nums.size(); i++) {
        //     ans.push_back(nums[i]);
        // }
        return ans;
    }
};