// This is my implementation of the official solution.

class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> leftRule(n);
        for(int i = 0; i < n; i++){
            if(i > 0 && ratings[i] > ratings[i - 1]){
                leftRule[i] = leftRule[i - 1] + 1;
            }else{
                leftRule[i] = 1;
            }
        }
        int total = 0;
        int rightRule = 1;
        for(int i = n - 1; i >= 0; i--){
            if(i < n - 1 && ratings[i] > ratings[i + 1]){
                rightRule++;
            }else{
                rightRule = 0;
            }
            total += max(leftRule[i], rightRule);
        }

        return total;
    }
};