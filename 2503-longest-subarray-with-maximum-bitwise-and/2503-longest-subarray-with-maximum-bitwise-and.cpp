class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        //bitwise and of two number will always be less than max of those two
        //subarray where only the max number is present
        //sliding window that keeps the subarray of max elements
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
        int n = nums.size();
        int mw=0;
        int currw = 0;
        int mx = INT_MIN;
        
        for(int i=0;i<n;i++){
            if(nums[i]==mx){
                currw++;
                mw = max(mw,currw);
            }else if(nums[i]>mx){
                mx=nums[i];
                currw=1;
                mw=1;
            }else{
                currw=0;
            }
        }
        return mw;
    }
};