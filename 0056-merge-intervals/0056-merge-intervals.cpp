class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        //if next elements first element is smaller  than previous elements second element then merging
        ios::sync_with_stdio(0);
        cin.tie(0);
        int n = intervals.size();
        if (n==0) return {};
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());

        vector<int> current_intervals = intervals[0];

        for(int i=1;i<n;i++){
            if(current_intervals[1]>=intervals[i][0]){
                current_intervals[1]=max(current_intervals[1],intervals[i][1]);
            }
            else{
                v.push_back(current_intervals);
                current_intervals = intervals[i];
            }
        }
        v.push_back(current_intervals);
        return v;

    }
};