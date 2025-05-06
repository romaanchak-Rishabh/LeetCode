class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Initialising new Vector, add merged array into it, and copying it to nums1.
        
        vector<int> ans;

        if(m==0) nums1=nums2;
        else {
            int i=0;
            int j=0;
            while(j<n) {
                if(i<m && nums1[i]==nums2[j]) {
                    ans.push_back(nums1[i]);
                    ans.push_back(nums2[j]);
                    i++;
                    j++;
                }
                else if(i<m && nums1[i]<nums2[j]) ans.push_back(nums1[i++]);
                else ans.push_back(nums2[j++]);
            }
            if(i<m) {
                for(int k=i; k<m; k++) {
                    ans.push_back(nums1[k]);
                }
            }
        }
        for(int i=0; i<ans.size(); i++) {
            nums1[i]=ans[i];
        }
    }
};