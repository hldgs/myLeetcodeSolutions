// This is my solution. 

class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        unordered_map<char, int> dict{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int value = 0;
        for(int i = 0; i < n; i++){
            if(i < n - 1 && dict[s[i + 1]] > dict[s[i]]){
                value += dict[s[i + 1]] - dict[s[i]];
                i++;
                continue;
            }
            value += dict[s[i]];
        }

        return value;
    }
};