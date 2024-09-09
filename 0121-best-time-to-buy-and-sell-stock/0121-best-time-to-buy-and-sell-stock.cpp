class Solution {
public:
    int maxProfit(vector<int>& prices) {
       // buying - sell should be positive and take max of all pairs
       // moving from l to r, if a smaller number is seen update buy, then check for
       //max profit until now
       //similar to kadane
       int n= prices.size();
       int buy=prices[0];
       int profit=0;
       for(int i=0;i<n;i++){
        buy = min(buy,prices[i]);
        profit = max(profit, prices[i]-buy);
       }
       return profit;
    }
};