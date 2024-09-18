class Solution {
public:
    static bool comp(int a, int b){
        string s1 = to_string(a);
        string s2 = to_string(b);
               
        if(s1+s2>s2+s1)return true;
        return false;

    }
    string largestNumber(vector<int>& nums) {
        //compare a+b and b+a jo larger wo order
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        string s = "";
        int n = nums.size();
        if(nums[0]==0&&nums[n-1]==0)return "0";
        sort(nums.begin(),nums.end(),comp);
        for(auto a:nums){
            s+=to_string(a);
        }
        return s;
    }
};