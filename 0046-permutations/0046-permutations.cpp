class Solution {
    private:
    void solve(vector<int> nums, vector<vector<int>>& res, int index) {
//         base case
        if(index>=nums.size()) {
            res.push_back(nums);
            return;
        }
        
        for(int j=index; j<nums.size(); j++) {
            swap(nums[j], nums[index]);
            solve(nums, res, index+1);
            swap(nums[j], nums[index]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        int index=0;
        solve(nums, res, index);
        return res;
    }
};