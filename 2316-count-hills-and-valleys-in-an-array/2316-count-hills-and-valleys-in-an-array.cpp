class Solution {
public:
    int countHillValley(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=1;i<n-1;i++){
            if(arr[i]==arr[i-1]) continue;
 
            int j=i-1;
            while(j>=0 and arr[i]==arr[j]) j--;
            int k=i+1;
            while(k<n and arr[i]==arr[k]) k++;
            if(j>=0 and k<n){
                if(arr[j]>arr[i] and arr[i]<arr[k]) ans++;
                else if(arr[j]<arr[i] and arr[i]>arr[k]) ans++;
            }
        }
        return ans;
            
            
            
        //     if(nums[i]>nums[i-1] && nums[i]>nums[i+1]) {
        //         hill++;
        //         cout<<"h:"<<hill;
        //     }
        //     else if(nums[i]<nums[i-1] && nums[i]<nums[i+1]) {
        //         valley++;
        //         cout<<"v:"<<valley;
        //     }
        // }
        // return hill+valley;
    }
};