class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int maxIndex = nums[0];
        int count = 0;
        int startPoint = 0;
        while(startPoint < n - 1){
            int candidateStart = startPoint;
            int candidateMax = nums[candidateStart] + startPoint;
            maxIndex = candidateMax;
            cout << 1 << endl;
            if(maxIndex >= n - 1){
                count++;
                break;
            }
            for(int i = startPoint; i <= maxIndex; i++){
                cout << 2 << endl;
                if(nums[i] + i > candidateMax){
                    cout << 3 << endl;
                    candidateMax = nums[i] + i;
                    candidateStart = i;
                }
            }
            cout << 4 << endl;
            startPoint = candidateStart;
            count++;
        }

        return count;
    }
};