// This solution just need one traversal to find the result.

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buyDate = 0;
        int maxProf = 0;
        int result = 0;
        for(int i = 0; i < n; i++){
            int prof = prices[i] - prices[buyDate]; 
            if(prof > maxProf){
                maxProf = prof;
            }
            if(prices[i] < prices[buyDate] + maxProf){
                result += maxProf;
                maxProf = 0;
                buyDate = i;
            }
        }
        result += maxProf;
        return result;
    }
};