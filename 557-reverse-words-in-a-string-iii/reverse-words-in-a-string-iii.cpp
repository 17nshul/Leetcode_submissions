class Solution {
public:
    string reverseWords(string s) {
       string tmp;
       string ans;
       int n = s.length();
       for(int i=0;i<n;i++){
           if(s[i]!=' ') tmp+=s[i];
           else{ 
               reverse(tmp.begin(),tmp.end());
               ans+=tmp;
           ans+=' ';
           tmp.clear();
           }
       }
       if(tmp.length()!=0){
           reverse(tmp.begin(),tmp.end());
           ans+=tmp;
       }
       return ans;  
    }
};