class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> m; // key is num[i], value is index i
        for (int i = 0; i < n; ++i) {
            if (m.find(target - nums[i]) != m.end()) {
                return {i, m[target - nums[i]]};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};