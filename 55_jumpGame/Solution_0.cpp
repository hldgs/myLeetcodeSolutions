// I solve the problem by myself in this way.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int right = 0;
        for(int left = 0; right < n; right++){
            if(nums[right] == 0){
                while(left != right){
                    if(nums[left] + left <= right){
                        left++;
                        continue;
                    }else{
                        left = 0;
                        break;
                    }
                }
                if(left == right){
                    break;
                }
            }
        }
        return right >= n - 1 || n == 1;
    }
};