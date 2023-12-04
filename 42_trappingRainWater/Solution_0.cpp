// This is my implementation for official solution.

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int result = 0;
        int left = 0, right = n - 1;
        int leftMax = 0, rightMax = 0;
        while(left <= right){
            if(height[left] > leftMax){
                leftMax = height[left];
            }
            if(height[right] > rightMax){
                rightMax = height[right];
            }
            if(leftMax <= rightMax){
                result += leftMax - height[left];
                left++;
            }else{
                result += rightMax - height[right];
                right--;
            }
        }

        return result;
    }
};