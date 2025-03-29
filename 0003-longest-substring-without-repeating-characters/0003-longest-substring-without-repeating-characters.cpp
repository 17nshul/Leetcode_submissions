class Solution {
public:
    int lengthOfLongestSubstring(string str) {
        int n = str.size();
        int l=0;
        int r = 0;
        int c=0;
        unordered_set<char> s;
        while(r<n){
            if(s.find(str[r])==s.end()){
                s.insert(str[r]);
                r++;
                c = max(c,r-l);
            }else{
                s.erase(str[l]);
                l++;
            }
        }
        return c;
    }
};