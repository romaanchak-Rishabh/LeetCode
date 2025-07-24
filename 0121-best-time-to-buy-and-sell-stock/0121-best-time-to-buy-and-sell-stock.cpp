class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuySoFar=INT_MAX;
        int maxProfit=0;
        for(int i=0; i<prices.size(); i++) {
            minBuySoFar=min(minBuySoFar, prices[i]);
            maxProfit=max(maxProfit, prices[i]-minBuySoFar);
        }
        return maxProfit;
    }
};