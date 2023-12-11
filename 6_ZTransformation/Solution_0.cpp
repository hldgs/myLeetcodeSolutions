// My solution.
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
        vector<string> preRes(numRows);
        while(i < n){
            for(int j = i; j < n && j < i + numGroup; ++j){
                int temp = j % numGroup;
                int rowIndex = 0;
                if(temp == 0){
                    rowIndex = 0;
                }else if(temp <= (1 + numGroup) / 2){
                    rowIndex = temp;
                }else{
                    rowIndex = numGroup - temp;
                }
                preRes[rowIndex].append(s.substr(j, 1));
            }
            i += numGroup;
        } 
        for(auto str : preRes){
            res += str;
        }
        return res;
    }
};