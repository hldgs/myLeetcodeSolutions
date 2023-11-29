// This is my implementation of official answer.
// Time complexity: O(n)
// Space complexity: O(1)
// note: answer array can ignore when you compute space complexity.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        answer[0] = 1;
        int right = 1;

        for(int i = 1; i < n; i++){
            answer[i] = answer[i - 1] * nums[i - 1];
        }
        for(int i = n - 1; i >= 0; i--){
            answer[i] = answer[i] * right;
            right *= nums[i];
        }

        return answer;
    }
};