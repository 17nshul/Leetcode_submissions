class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        unordered_set<int> s(banned.begin(), banned.end());
        long long localSum=0;
        int i, count=0;
        for(i=1;i<=n;i++){
            if(s.find(i)!=s.end()) continue;
            localSum+=i;
            if(localSum>maxSum) break;
            count++;
        }
        return count;
    }
};