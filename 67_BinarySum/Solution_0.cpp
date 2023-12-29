class Solution {
public:
    string addBinary(string a, string b) {
        int n = min(a.size(), b.size());

        int h = 0;
        string ans;
        for(int i = 0; i < n; i++){
            h = a[a.size() - 1 - i] - '0' + b[b.size() - 1 - i] - '0' + h;
            ans.insert(0, to_string(h % 2));
            // cout << "i = " << i << ", ans = " << ans << endl;
            h /= 2;
        }
        if(a.size() > b.size()){
            for(int i = a.size() - n - 1; i >= 0; --i){
                h = a[i] - '0' + h;
                ans.insert(0, to_string(h % 2));
                h /= 2;
            }
        }
        if(b.size() > a.size()){
            for(int i = b.size() - n - 1; i >= 0; --i){
                h = b[i] - '0' + h;
                ans.insert(0, to_string(h % 2));
                h /= 2;
            }
        }
        if(h){
            ans.insert(0, to_string(h % 2));
        }

        return ans;
    }
};