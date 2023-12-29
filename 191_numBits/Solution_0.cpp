// x & -x 可以得到最低位的1，如100100，可以得到100；
// 详情看lowbit算法，看acwing 位运算的题解

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int sum = 0;
        while(n){
            n -= n & (-n);
            sum++;
        }

        return sum;
    }
};