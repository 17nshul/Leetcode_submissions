class Solution {
public:
    int maxScore(string s) {
        cin.tie(0)->ios::sync_with_stdio(0);
        cout.tie(0);

        int oc = 0;
        int zc = 0;
        int mx = INT_MIN;
        int n = s.size();
        for(int i=0;i<n-1;++i){
            if(s[i]=='1')oc++;
            else zc++;

            mx = max(mx,zc-oc);
        }

        if(s[n-1]=='1')oc++;

        return mx+oc;
    }
};