// log(n) by binary search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int mid = (left + right) >> 1;
        while(left < right){
            if(mid == n - 1 || nums[mid] < nums[mid + 1]){
                left = mid + 1;
            }else{
                right = mid;
            }
            mid = (left + right) >> 1;
        }

        return mid;
    }
};