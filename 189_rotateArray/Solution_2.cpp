// This Solution solve problem by reversing original array to avoid using extra array.

// nums = "----->-->"; k =3
// result = "-->----->";
// reverse "----->-->" we can get "<--<-----"
// reverse "<--" we can get "--><-----"
// reverse "<-----" we can get "-->----->"
// this visualization help me figure it out :)

class Solution{
public:
    void swap(vector<int> &nums, int left, int right){
        if(left != right){
            int tmp = nums[left];
            nums[left] = nums[right];
            nums[right] = tmp;
        }
    }
    void reverse(vector<int> &nums, int left, int right){
        // in case k < 0
        if(left < right){ 
            int middle = (left + right) / 2;
            for(int i = left; i <= middle; i++){
                swap(nums, i, right + left - i);
            }
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reverse(nums, 0, n - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, n - 1);
    }
};