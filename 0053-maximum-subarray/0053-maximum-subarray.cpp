class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        //sliding window
        int best=nums[0],sum=0;
        if(n==1) return nums[0];
        for(int i=0;i<n;i++){
            sum = max(nums[i],sum+nums[i]);
            best = max(sum,best);
        }
        return best;
        
    }
};