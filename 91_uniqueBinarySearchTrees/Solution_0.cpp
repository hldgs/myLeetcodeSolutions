// Still dp practice
/*
dp[0] = 2
dp[1] = 1
dp[2] = 2

Initially: dp[n] = 0
for i in (1, n):
    dp[n] += dp[i - 1] + dp[n - i];
*/
class Solution {
public:
    int numTrees(int n) {
        vector <int> dp(n + 1);
        dp[0] = 1;
        for(int i = 1; i <= n; ++i){
            for(int j = 1; j <= i / 2; ++j){
                dp[i] += 2*(dp[j - 1] * dp[i - j]);
            }
            if(i % 2){
                dp[i] += dp[i / 2] * dp[i / 2];
            }
            
        }

        return dp[n];
    }
};