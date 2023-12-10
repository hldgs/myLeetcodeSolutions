// My solution.
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        bool flag = false;
        string tempWord("");
        string result;
        while(i < n){
            if(s[i] == ' '){
                if(flag){
                    result.insert(0, tempWord);
                    result.insert(0, " ");
                    tempWord.clear();
                    flag = false;
                }
            }else{
                flag = true;
                tempWord += s[i];
            }
            i++;
        }
        if(tempWord.size()){
            result.insert(0, tempWord);
        }

        while(result[0] == ' '){
            cout << result << endl;
            result.erase(result.begin());
        }

        return result;
    }
};