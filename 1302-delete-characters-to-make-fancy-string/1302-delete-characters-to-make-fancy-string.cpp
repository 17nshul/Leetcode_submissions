class Solution {
public:
    string makeFancyString(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        if (s.size() < 3) return s;

        int j = 2;
        for (int i = 2; i < s.size(); ++i) {
            if (s[i] != s[j - 1] || s[i] != s[j - 2]) {
                s[j++] = s[i];
            }
        }
        s.resize(j);
        return s;
    }
};