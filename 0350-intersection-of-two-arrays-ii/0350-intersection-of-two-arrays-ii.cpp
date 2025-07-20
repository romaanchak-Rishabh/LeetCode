class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;
        for(int i=0; i<nums1.size(); i++) {
            mp1[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++) {
            mp2[nums2[i]]++;
        }
        vector<int> res;
        if(mp1.size()>mp2.size()) {
            for(auto it: mp1) {
                int mini=INT_MAX;
                if(mp2[it.first]) {
                    mini=min(it.second, mp2[it.first]);
                    for(int j=0; j<mini; j++) {
                        res.push_back(it.first);
                    }
                }
            }
        }
        else {
            for(auto it: mp2) {
                int mini=INT_MAX;
                if(mp1[it.first]) {
                    mini=min(it.second, mp1[it.first]);
                    for(int j=0; j<mini; j++) {
                        res.push_back(it.first);
                    }
                }
            }
        }
        return res;
    }
};