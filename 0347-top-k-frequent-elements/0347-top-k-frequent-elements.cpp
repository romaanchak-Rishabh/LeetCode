class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++) {
            mp[nums[i]]++;
        }
        int max=INT_MIN;
        int res=INT_MIN;
        for(int i=0; i<k; i++) {
            max=INT_MIN;
            res=INT_MIN;
            for(auto it: mp) {
                if(it.second>max) {
                    max=it.second;
                    res=it.first;
                }
            }
            ans.push_back(res);
            mp.erase(res);
        }
        
        return ans;
    }
};