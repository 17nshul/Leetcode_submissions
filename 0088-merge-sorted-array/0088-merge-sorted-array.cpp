class Solution {
public:
    void merge(vector<int>& nums1, int n1, vector<int>& nums2, int n2) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector<int> v;
    int l=0;
    int r=0;
    while(l<n1 && r<n2){
        if(nums1[l]<nums2[r]){
            v.push_back(nums1[l]);
            l++;
        }
        else if(nums1[l]>=nums2[r]){
            v.push_back(nums2[r]);
            r++;
        }
    }

    while(l<n1){
        v.push_back(nums1[l]);
        l++;
    }
    while(r<n2){
        v.push_back(nums2[r]);
        r++;
    }
    nums1=v;



    }
};