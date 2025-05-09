class Solution {
public:
    int getPivotIndex(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        int mid=0;
        while(s<=e) {
            if(s==e) return s;
            mid=s+(e-s)/2;
            if(mid+1<arr.size() && arr[mid]>arr[mid+1]) return mid;
            else if(mid-1>=0 && arr[mid]<arr[mid-1]) return mid-1;
            else if(arr[s]>arr[mid]) e=mid-1;
            else s=mid+1;
        }
        return -1;
    }

    int BS(vector<int>& arr, int s, int e, int target) {
        int mid=0;
        while(s<=e) {
            mid=s+(e-s)/2;
            if(arr[mid]==target) return mid;
            else if(arr[mid]>target) e=mid-1;
            else s=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int pivotIndex = getPivotIndex(nums);

        if(target>=nums[0] && target<=nums[pivotIndex]){
            return BS(nums, 0, pivotIndex, target);
        }
        else{
            return BS(nums, pivotIndex+1, nums.size()-1, target);
        }
        return -1;
    }
};