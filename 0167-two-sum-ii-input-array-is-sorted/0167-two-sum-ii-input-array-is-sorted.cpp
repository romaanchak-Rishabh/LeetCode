class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
//         two pointer approach
        int i=0;
        int j=numbers.size()-1;
        vector<int> res;
        while(i<j) {
            int sum=numbers[i]+numbers[j];
            if(target==sum) {
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
            else if(sum<target) {
                i++;
            }
            else {
                j--;
            }
        }
        return res;
        
        
        
        
        
//         brute force appraoch
        
        // int n=numbers.size();
        // vector<int> res;
        // for(int i=0; i<n; i++) {
        //     for(int j=i+1; j<n; j++) {
        //         if(numbers[i]+numbers[j]==target) {
        //             res.push_back(i+1);
        //             res.push_back(j+1);
        //         }
        //     }
        // }
        // return res;
    }
};