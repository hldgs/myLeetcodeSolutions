class Solution {
public:
    string simplifyPath(string path) {
        stack <string> sta;
        int n = path.size();
        string fn;
        for(auto c : path){
            if(c != '/'){
                fn.push_back(c);
                continue;
            }
            if(fn.empty()) continue;
            sta.push(fn);
            fn = "";
        }
        if(fn.size()) sta.push(fn);
        string ans;
        // cout << "size:" << sta.size() << endl;
        while(!sta.empty()){
            string f = sta.top();
            cout << f << endl;
            sta.pop();
            if(f == "."){
                continue;
            }else if(f == ".."){
                int cnt = 1;
                while(cnt && !sta.empty()){
                    if(sta.top() == ".."){
                        cnt++;
                        sta.pop();
                    }else if(sta.top() == "."){
                        sta.pop();
                    }else{
                        cnt--;
                        sta.pop();
                    }
                }
            }else{
                ans = "/" + f + ans; 
            }
        }

        return ans.empty() ? "/" : ans;
    }
};