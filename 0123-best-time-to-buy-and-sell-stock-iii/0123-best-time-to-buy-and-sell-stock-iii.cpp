class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int mini1 = prices[0];
        int maxi1 = 0;

        int mini2 = prices[0];
        int maxi2 = 0;

        for (int i = 1; i < n; i++) {

            // First transaction
            mini1 = min(mini1, prices[i]);
            maxi1 = max(maxi1, prices[i] - mini1);

            // Second transaction
            mini2 = min(mini2, prices[i] - maxi1);
            maxi2 = max(maxi2, prices[i] - mini2);
        }

        return maxi2;
    }
};