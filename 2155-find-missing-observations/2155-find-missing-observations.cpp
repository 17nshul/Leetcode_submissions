class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        //sum of all rolls should be = mean * (n+m)
        //find numbers so that arr sum = (mean*(n+m)) - (accumulate(rools))
        //above numbers in arr can be from 1 to 6 
        //fill array of size n with sum/n and then if there is any remainder from sum%n
        //fill those in remainder amount of elements
        int m = rolls.size();
        int sum = mean*(n+m) - accumulate(rolls.begin(),rolls.end(),0);

        int rem = sum % n;
        int q = sum / n;
        vector<int> v(n,q);
        if( sum<n or sum>6*n) return {} ;
        for(int i=1;i<=rem;i++) v[i]++;
        return v;
    }
};