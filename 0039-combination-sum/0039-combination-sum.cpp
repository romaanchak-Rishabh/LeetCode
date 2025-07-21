class Solution {
private:
    void solve(int index, vector<int> candidates, int target, vector<vector<int>> &ans, vector<int> tmp) {
        if(index==candidates.size()) {
            if(target==0) {
                ans.push_back(tmp);
            }
            return;
        }
           
//         include case
           if(candidates[index]<=target) {
               tmp.push_back(candidates[index]);
               solve(index, candidates, target-candidates[index], ans, tmp);
               tmp.pop_back();
           }
           
//         exclude case
           solve(index+1, candidates, target, ans, tmp);
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> tmp;
        int index=0;
        solve(index, candidates, target, ans, tmp);
        return ans;
    }
};