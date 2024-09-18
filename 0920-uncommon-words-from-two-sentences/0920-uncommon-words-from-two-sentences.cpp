class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        unordered_map<string,int>m;
        stringstream ss1(s1);
        string joint;
        while(ss1>>joint){
            m[joint]++;
        }
        joint = "";
        stringstream ss2(s2);
        while(ss2>>joint){
            m[joint]++;
        }
        vector<string>v;
        for(auto i:m){
            if(i.second==1)v.push_back(i.first);
        }
        return v;

    }
};