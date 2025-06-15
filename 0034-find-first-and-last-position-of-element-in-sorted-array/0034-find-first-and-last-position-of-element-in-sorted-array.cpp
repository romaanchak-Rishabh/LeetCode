class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int s=0, e=nums.size()-1, mid=0;
        int left=-1, right=-1;
        while(s<=e) {
            mid=s+(e-s)/2;
            if(nums[mid]==target) {
                left=mid;
                e=mid-1;
            }
            else if(target>nums[mid]) s=mid+1;
            else e=mid-1;
        }

        s=0;
        e=nums.size()-1;
        mid=0;
        right=-1;
        while(s<=e) {
            mid=s+(e-s)/2;
            if(nums[mid]==target) {
                right=mid;
                s=mid+1;
            }
            else if(target>nums[mid]) s=mid+1;
            else e=mid-1;
        }
        vector<int> ans;
        ans.push_back(left);
        ans.push_back(right);
        return ans;
    }
};