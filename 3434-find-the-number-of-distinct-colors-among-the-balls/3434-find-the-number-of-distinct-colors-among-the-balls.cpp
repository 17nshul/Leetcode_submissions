class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& que) {
        int n = que.size();
        vector<int> ans(n,-1);
        unordered_map<int,set<int>> clrToNum;
        unordered_map<int,int> numToclr;

        for(int i = 0;i<n;i++){
                    //num = que[i][0]
                    //Color = que[i][1]
            if(numToclr.find(que[i][0])!=numToclr.end()){
                int todeleteclr = numToclr[que[i][0]];
                if(clrToNum[todeleteclr].size()==1){
                    clrToNum.erase(todeleteclr);
                }else{
                clrToNum[todeleteclr].erase(que[i][0]);
                }
            }
            numToclr[que[i][0]] = que[i][1];
            clrToNum[que[i][1]].insert(que[i][0]);
            ans[i] = min(numToclr.size(),clrToNum.size());
            
        }
        return ans;
    }
};