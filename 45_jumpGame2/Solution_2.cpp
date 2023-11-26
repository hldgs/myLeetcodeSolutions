// This method is the offical version 2, consuming so much time that c++ version cant pass.

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int least = n - 1;
        while(least > 0){
            for(int i = 0; i < least; i++){
                if(nums[i] + i >= least){
                    least = i;
                    count++;
                    break;
                }
            }
        }
        return count;
    }
};