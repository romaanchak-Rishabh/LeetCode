class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0, j=k-1, sum=0;
        for(int y=i; y<=j; y++)
            sum+=nums[y];
        int maxsum=sum;
        j++;
        while(j<nums.size()) {
            sum-=nums[i++];
            sum+=nums[j++];
            maxsum=max(maxsum, sum);
        }
        return maxsum/(double)k;
    }
};