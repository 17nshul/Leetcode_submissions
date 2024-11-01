class Solution {
public:
    string makeFancyString(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = s.length();
        if (n < 3) return s;

        string res = "";
        res += s[0];
        
        for(int i=1;i<n;++i){
            if(res.length()>=2 && res[res.length()-1]==s[i] && res[res.length()-2]==s[i]){
                continue;
            }
            res+=s[i];
        }
        cout<<res;
        return res;
    }
};