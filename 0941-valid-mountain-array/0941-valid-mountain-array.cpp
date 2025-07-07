class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3) {
            return false;
        }
        if(arr[0]>arr[1]) {
            return false;
        }
        if(arr[n-1]>arr[n-2]) {
            return false;
        }
        for(int i=0; i<n-1; i++) {
            if(arr[i]==arr[i+1]) {
                return false;
            }
        }
        int temp=0;
        for(int i=1; i<n-1; i++) {
            if(arr[i]>arr[i+1] && arr[i]>arr[i-1]) {
                temp++;
            }
        }
        if(temp!=1)
            return false;
        
        return true;
    }
};