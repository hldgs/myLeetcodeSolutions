// This is an excellent dp solution.
/*
dp[0] = 1 or nothing
dp[n] = dp[n + 1] + dp[n - 1] + 1 or nothing

*/

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        unordered_map<int, int> ha;

        for(int i = 0; i < n; ++i){
            int t = nums[i];
            int llen, rlen;
            if(ha.find(t) == ha.end()){
                llen = ha.find(t - 1) != ha.end() ? ha[t - 1] : 0;
                rlen = ha.find(t + 1) != ha.end() ? ha[t + 1] : 0;
                int curlen = llen + rlen + 1;
                ans = max(curlen, ans);
                ha[t] = curlen;
                ha[t - llen] = curlen;
                ha[t + rlen] = curlen;
            }
        }//for
    

        return ans;
    }
};