class Solution {
public:
    static bool comp(pair<vector<int>, int>& a, pair<vector<int>, int>& b) {
        return a.first[0] < b.first[0];
    }

    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        int n = intervals.size();
        vector<pair<vector<int>, int>> indexed;
        for (int i = 0; i < n; ++i) {
            indexed.push_back({intervals[i], i});
        }

        sort(indexed.begin(), indexed.end(), comp);

        vector<int> result(n, -1);

        for (int i = 0; i < n; ++i) {
            int end = intervals[i][1];
            int l = 0, r = n - 1;
            while (l <= r) {
                int mid = l + (r - l) / 2;
                if (indexed[mid].first[0] >= end) {
                    r = mid - 1;
                } else {
                    l = mid + 1;
                }
            }
            if (l < n)
                result[i] = indexed[l].second;
        }
        return result;
    }
};
