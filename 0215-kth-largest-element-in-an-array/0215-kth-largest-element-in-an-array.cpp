class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
//         priority queue and head approach
        priority_queue<int> p;
        
        for(int i=0; i<k; i++) {
            p.push(-nums[i]);
        }
        cout<<" end"<<endl;
        for(int i=k; i<nums.size(); i++) {
            if(-p.top()<nums[i]) {
                p.pop();
                p.push(-nums[i]);
            }
        }
        return -p.top();
        
        
        
        
//         normal brute force approach
        
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()-k];
    }
};