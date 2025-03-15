class Solution {
public:
    bool isValid(string s) {
        //use stack and a map
        map<char,char> m;
        m.insert({'[',']'});
        m.insert({'(',')'});
        m.insert({'{','}'});

        stack<char>st;

        for(auto &c: s){
            if(m.find(c)!=m.end()){
                st.push(c);
            }
            else {
                if(st.empty()||m[st.top()]!=c){
                    return false;
                }      
                st.pop();
            }
        }
        return st.empty();
    }
};