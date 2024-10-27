class Solution {
public:
    bool isValid(string s) {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        map<char,char> m;
        m['(']=')';
        m['[']=']';
        m['{']='}';
        stack<char>st;
        for(auto c:s){
            if(m.find(c)!=m.end()){
                //mil gaya in map
                st.push(c);   
            }else{
                if(st.empty() || m[st.top()] != c){
                    return false;
                }
                else{
                    st.pop();
                }
            }
        }
        return st.empty();
    }
};