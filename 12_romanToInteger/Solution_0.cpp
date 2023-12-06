// This is my solution. 

class Solution {
public:
    string intToRoman(int num) {
        string result = "";

        vector<int> value{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> roman{"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        for(int i = 0; i < value.size(); i++){
            int v = value[i];
            int n = num / v;
            if(!n){
                continue;
            }
            while(n-- > 0){
                result.append(roman[i]);
            }
            num %= v;
        }

        return result;
    }
};