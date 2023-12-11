class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();

        int numGroup = 2 * numRows - 2;
        if(numGroup == 0){
            return s;
        }
        string res;
        int i = 0;
        for(int i = 0; i < numRows; ++i){
            for(int j = 0; j + i < n; j += numGroup ){
                res += s[j + i];
            
                if(i > 0 && i < numRows - 1 && j + numGroup - i < n){
                    res += s[j + numGroup - i];
                }
            }
        }
        return res;
    }
};