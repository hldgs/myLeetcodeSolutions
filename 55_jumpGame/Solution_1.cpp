// Refering to the official solution, this method resolve problem by Greedy Algorithm.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex = 0;
        for(int i = 0; i <= maxIndex && i < n; i++){
            if(maxIndex < nums[i] + i){
                maxIndex = nums[i] + i;
            }
        }
        return maxIndex >= n - 1;
    }
};