class Solution {
public:
    string simplifyPath(string path) {
        path.push_back('/');
        int n = path.size();
        string sta;
        for(int i = 0; i < n; ++i){
            char c = path[i];
            cout << sta << endl;
            if(c != '/'){
                sta.push_back(c);
                continue;
            }
            if(!sta.empty() && sta.back() == '/') continue;
            string fn1 = "";
            while(!sta.empty() && sta.back() != '/'){
                fn1.push_back(sta.back());
                sta.pop_back();
            }
            string fn;
            while(!fn1.empty()){
                fn.push_back(fn1.back());
                fn1.pop_back();
            }
            if(fn == "." && !sta.empty()){
                sta.pop_back();
            }else if(fn == ".."){
                if(!sta.empty()) sta.pop_back();
                while(!sta.empty() && sta.back() != '/'){
                    sta.pop_back();
                }
                if(!sta.empty()) sta.pop_back();
            }else{
                sta += fn;
            }
            sta.push_back(c);
        }
        while(sta.size() > 1 && sta.back() == '/'){
            sta.pop_back();
        }

        return sta;
    }
};