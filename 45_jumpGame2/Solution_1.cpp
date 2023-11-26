// This method is the offical version, akin to myselves' solution, having smaller time complexity.

class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int maxPos = 0, end = 0;
        int count = 0;
        for(int i = 0; i < n - 1; i++){
            if(maxPos < nums[i] + i){
                maxPos = nums[i] + i;
            }
            if(i == end){
                end = maxPos;
                count++;
            }
        }

        return count;
    }
};