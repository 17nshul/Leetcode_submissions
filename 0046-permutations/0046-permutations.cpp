class Solution {
public:
    vector<vector<int>>v;
    void permutation(vector<int>& nums, int n,vector<bool> chosen,vector<int> perm){
        //recursion jab tak permutation vector ka size!=n
        if(perm.size()==n){
            v.push_back(perm);
            return;
        }
        for(int i=0;i<n;i++){
            if(chosen[i]) continue;
            chosen[i]=true;
            perm.push_back(nums[i]);
            permutation(nums,n,chosen,perm);
            chosen[i]=false;
            perm.pop_back();
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {
        //solving recursively
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        vector<bool> chosen(n,false);
        vector<int> perm;
        permutation(nums,n,chosen,perm);
        return v;
    }
};