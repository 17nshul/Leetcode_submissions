#include<bits/stdc++.h>
class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long total = accumulate(chalk.begin(),chalk.end(),0LL);
        int rem = k%total;
        for(int i=0;i<n;i++){
            if(chalk[i]>rem) return i;
            else rem-=chalk[i];
        }
        return 0;
    }
};
