class Solution {
    
//     DP(Space Optimization) Approach   (SC-O(n), TC(1))
    public:
        int minCostClimbingStairs(vector<int>& cost) {
            int n=cost.size();
            int prev1=cost[1];
            int prev2=cost[0];
            for(int i=2; i<n; i++) {
                int curr = cost[i] + min(prev1, prev2);
                prev2=prev1;
                prev1=curr;
            }
            return min(prev1, prev2);
        }
};
            
            
            
    
//     DP(tabulation) approach    (SC-O(n), TC-O(1))
    
    
//     public:
//         int minCostClimbingStairs(vector<int>& cost) {
//             int n=cost.size();
//             vector<int> dp(n+1, -1);
//             dp[0]=cost[0];
//             dp[1]=cost[1];
//             for(int i=2; i<n; i++) {
//                 dp[i] = cost[i] + min(dp[i-1], dp[i-2]);
//             }
//             return min(dp[n-1], dp[n-2]);
//         }
// };
    
    
    
//     DP(recusrion & memoization) approach     (SC-O(n), TC-O(n))
    
// private:
//     int solve(vector<int>& cost, vector<int>& dp, int n) {
//         if(n==0) {
//             return cost[0];
//         }
//         if(n==1) {
//             return cost[1];
//         }
        
//         if(dp[n]!=-1) {
//             return dp[n];
//         }
        
//         dp[n] = cost[n] + min(solve(cost, dp, n-1), solve(cost, dp, n-2));
//         return dp[n];
//     }
        
        
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n=cost.size();
//         vector<int> dp(n+1, -1);
//         int ans = min(solve(cost, dp, n-1), solve(cost, dp, n-2));
//         return ans;
//     }
// };
    
    
    
    
//     recursion approach - TLE for some cases   (SC-O(n^2), TC-O(n))
    
// private:
//     int solve(vector<int>& cost, int n) {
//         if(n==0) {
//             return cost[0];
//         }
//         if(n==1) {
//             return cost[1];
//         }
        
//         int ans = cost[n] + min(solve(cost, n-1), solve(cost, n-2));
//         return ans;
//     }
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n=cost.size();
//         int ans = min(solve(cost, n-1), solve(cost, n-2));
//         return ans;
//     }
// };