class Solution {
public:
    long long pow(long long x, int y){
        long long res = 1;
        for(int i = 0; i < y; i++){
            res *= x;
        }
        return res;
    }
    uint32_t reverseBits(uint32_t n) {
        // 31
        uint32_t ans = 0;
        int cnt = 0;
        while(n){
            int t = (n & 1) << ;
            n = n >> 1;
            t = t
            // if(t){
            //     ans += pow(2, 31 - cnt) * t;
            // }
            cnt++;
        }
        
        return ans;
    }
};