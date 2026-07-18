class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {

        int n = weights.size();

        vector<int> distribution;

        for (int i = 0; i < n - 1; i++) {
            distribution.push_back(weights[i] + weights[i + 1]);
        }

        sort(distribution.begin(), distribution.end());

        long long mini = 0;
        long long maxi = 0;

        // Sum of smallest (k-1) pair sums
        for (int i = 0; i < k - 1; i++) {
            mini += distribution[i];
        }

        // Sum of largest (k-1) pair sums
        for (int i = n - k; i <= n - 2; i++) {
            maxi += distribution[i];
        }

        return maxi - mini;
    }
};