// Forward traverse. 

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        bool flag = false;
        int count = 0;
        for(auto c : s){
            if(c == ' '){
                flag = false;
                continue;
            }
            if(!flag){
                count = 0;
                flag = true;
            }
            count++;
        }

        return count;
    }
};