class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        cin.tie(0)->ios::sync_with_stdio(0);
        cout.tie(0);
        int pl = pref.size();
        int ans = 0;
        
        for (const auto& word : words) {
            if (word.substr(0, pl) == pref) ans++;
        }
        
        return ans;
    }
};