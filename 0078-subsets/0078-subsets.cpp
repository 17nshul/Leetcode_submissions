class Solution {
public:
//take or not take,recursively

    vector<vector<int>> v;
    vector<int> subset;
    void search(int n, int k, vector<int>& nums){
        if(k==n){
            v.push_back(subset);
        }else{
        search(n, k+1, nums);
        subset.push_back(nums[k]);
        search(n, k+1, nums);
        subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        ios::sync_with_stdio(0);
    cin.tie(0);
        int n = nums.size();
        search(n,0,nums);
        return v;
    }
};