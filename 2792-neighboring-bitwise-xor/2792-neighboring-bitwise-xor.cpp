class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int ans=0;
        for(auto a: derived){
            ans^=a;
        }
        if(ans==0)return true;
        return false;
    }
};