class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int sflag=0;
        int lflag=0;
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]<=nums[i+1]) {
                continue;
            }
            else {
                sflag=1;
                break;
            }
        }
        for(int i=0; i<nums.size()-1; i++) {
            if(nums[i]>=nums[i+1]) {
                continue;
            }
            else {
                lflag=1;
                break;
            }
        }
        if(!sflag || !lflag) {
            return true;
        }
        return false;
    }
};