class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        int maxLen = 9999;
        const string LEFT = strs[0];
        for(auto s : strs){
            int traverseLen = min(s.size(), LEFT.size());
            int tempLen = 0;
            for(int i = 0; i < traverseLen; i++){
                if(s[i] != LEFT[i]){
                    break;
                }
                tempLen++;
            }
            if(tempLen < maxLen){
                maxLen = tempLen;
            }
        }
        return maxLen == 0 ? "" : LEFT.substr(0, maxLen);
    }
};