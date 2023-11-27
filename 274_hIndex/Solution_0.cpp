// This is my solution using sort. 
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int hIndex = 1, n = citations.size();
        for(int i = 0; i < n; i++){
            if(citations[i] <= n - i){
                hIndex = citations[i];
            }else{
                hIndex = max(hIndex, n - i);
                break;
            }
        }
        return hIndex;
    }
};