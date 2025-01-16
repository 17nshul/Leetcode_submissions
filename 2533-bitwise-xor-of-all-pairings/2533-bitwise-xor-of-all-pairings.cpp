class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        //a^a=0
        int n1 = nums1.size();
        int n2 = nums2.size();
        int ans1=0;
        int ans2=0;
        if(n1%2!=0){
            for(int i=0;i<n2;++i){
                ans2^=nums2[i];
            }
        }
        if(n2%2!=0){
            for(int i=0;i<n1;++i){
                ans1^=nums1[i];
            }
        }
    
        return ans1^ans2;
    }
};