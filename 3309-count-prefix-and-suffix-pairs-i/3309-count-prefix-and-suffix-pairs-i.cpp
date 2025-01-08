class Solution {
public:

    bool isPreSuf(string s1,string s2){
        int l1 = s1.size();
        int l2 = s2.size();
        cout<<s1<<" "<<s2<<endl;
        // bool p = false;
        // bool s = false;
        for(int i=0;i<l1;++i){
            if(s1[i]!=s2[i])return false;
        }
        // p=true;
        for(int i=0,j=l2-l1;i<l1;++i,++j){
            if(s1[i]!=s2[j])return false;
        }
        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int n = words.size();
        int ans=0;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(isPreSuf(words[i],words[j]))ans++;
            }
        }
        return ans;
    }
};