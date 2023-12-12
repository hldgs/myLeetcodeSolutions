// In order to find the maximum product, given integer n, n can be split into 2 or more than 2 numbers. 
// (i - j) * j means :i is split into 2 number.
// dp[i - j] * j means : i is split into more than 2 numbers.
// note1: j is unnecssary to be split, because it can be split before. such as 2 * dp[8 - 2], and 4 * dp[8 - 4]. dp[4] is unnecessary.
// note2: dp[i] is placed in max(), because we want to compare the before maximum to current one.

class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n + 1);
        dp[2] = 1;
        if(n < 3) return dp[n];
        for(int i = 3; i <= n; ++i){
            for(int j = 1; j < i - 1; ++j){
                dp[i] = max(dp[i], max((i - j) * j, dp[i - j] * j));
            }
        }
        return dp[n];
    }
};