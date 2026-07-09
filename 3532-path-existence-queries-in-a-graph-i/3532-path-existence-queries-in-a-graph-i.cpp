class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,
                                      vector<vector<int>>& queries) {
        vector<int> pref(n);

        for (int i = 1; i < n; i++) {
            pref[i] = pref[i - 1] + (nums[i] - nums[i - 1] > maxDiff);
        }

        vector<bool> ans;

        for (const auto &q : queries) {
            ans.push_back(pref[q[0]] == pref[q[1]]);
        }

        return ans;
    }
};