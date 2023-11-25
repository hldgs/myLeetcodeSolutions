// This solution uses gcd and Bézout's lemma to solve problem without extra space.
class Solution_1 {
public:
    int gcd(int x, int y){
        return y == 0 ? x : gcd(y, x % y);
    }
    void rotate(vector<int>& nums, int k){
        int n = nums.size();
        k = k % n;
        int count = gcd(k, n);
        for(int start = 0; start < count; start++){
            int current = (start + k) % n;
            int pre = nums[start];
            for(; current != start; current = (current + k) % n){
                int tmp = nums[current];
                nums[current] = pre;
                pre = tmp;
            }
            nums[start] = pre;
        }
    }
};