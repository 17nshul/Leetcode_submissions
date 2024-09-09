class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        //in-place
        //starting from left if encountered 2 then swap it with right most element
        //if 0 then swap it with left most and update this left most and right most 
        // left-most++ and right-most-- to update unsorted range of array
        int l=0,r=n-1;
        int i=0;
        while(i<=r){
            if(nums[i]==0){
                swap(nums[i],nums[l]);
                l++;
                i++;
            }
            else if(nums[i]==2){
                swap(nums[i],nums[r]);
                r--;
            }
            else{
                i++;
            }
        }

    }
};