// This method is an official version,using binary search.

class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int left = 0, right = n;
        int mid = 0;
        while(left < right){
            mid = (left + right + 1) >> 1;// 防止死循环
            int count = 0;
            for(int i = 0; i < n; i++){
                if(citations[i] >= mid){
                    count++;
                }
            }
            if(count >= mid){
                left = mid;
            }else{
                right = mid - 1;
            }
        }
        return left;
    }
};