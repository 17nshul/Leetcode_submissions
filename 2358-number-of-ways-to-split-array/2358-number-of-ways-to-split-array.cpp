class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        cin.tie(0)->ios::sync_with_stdio(0);
        cout.tie(0);
        int n = nums.size();
        vector<long> v(n);
        v[0]=nums[0];
        for(int i=1;i<n;++i){
            v[i]=v[i-1]+nums[i];
        }
        int ans = 0;
        for(int i=0;i<n-1;++i){
            if(v[i]>=v[n-1]-v[i]){
                ans++;
            }
        }
        return ans;
    }
};