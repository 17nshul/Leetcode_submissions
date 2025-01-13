class Solution {
public:
    int minimumLength(string s) {
        //a-3
        //b-4
        //c-2
        //for every 3 occurence two can be removed length become n-2
        //count no of character 
        //freq%3+1 jitne character bachenge
        cin.tie(0)->ios::sync_with_stdio(0);
        cout.tie(0);
        map<char,int> m;
        for(int i=0;i<s.size();++i){
            m[s[i]]++;
        }
        int ans = 0;
        for(auto it = m.begin();it!=m.end();++it){
            if(it->second%2==0)ans+=2;
            else ans+=1;
        }

        return ans;

    }
};