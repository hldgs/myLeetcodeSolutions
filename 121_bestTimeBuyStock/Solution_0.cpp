// This solution is mentioned by myself, and is very good.
// It just need one traversal to find the result.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyDate = 0;
        int maxProf = 0;
        for(int sellDate = 0; sellDate < n; sellDate++){
            int prof = prices[sellDate] - prices[buyDate];
            if(prof > maxProf){
                maxProf = prof;
            }
            if(prices[sellDate] < prices[buyDate]){
                buyDate = sellDate;
            }
        }
        return maxProf;
    }
};