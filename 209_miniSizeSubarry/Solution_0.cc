// my solution

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < n - i + 1; j++){
                int sum = 0;
                for(int k = 0; k < i; k++){
                    sum += nums[j + k];
                }
                if(sum >= target){
                    return i;
                }
            }
        }// for i
        
        return 0;
    }
};