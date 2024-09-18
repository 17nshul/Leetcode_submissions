class Solution {
public:
    int convert(string& time){
        int hours = stoi(time.substr(0,2));
        int mins = stoi(time.substr(3,2));
        return hours*60+mins;
    }
    int findMinDifference(vector<string>& timePoints) {
        //convert all into minutes
        //sort them
        //then add the first (smallest) at the end after adding the 24hours(1440 minutes) in it
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<int> minutes;

        for(auto a:timePoints){
            minutes.push_back(convert(a));
        }

        sort(minutes.begin(),minutes.end());

        minutes.push_back(minutes[0]+1440);

        int minDiff = INT_MAX;

        for(int i=1;i<minutes.size();i++){
            minDiff = min(minDiff, minutes[i]-minutes[i-1]);
        }

        return minDiff;

    }
};