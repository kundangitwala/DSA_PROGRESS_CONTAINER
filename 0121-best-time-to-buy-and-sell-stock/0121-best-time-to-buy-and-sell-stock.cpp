class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int mini = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            int profit = prices[i] - mini;
            maxprofit = max(maxprofit, profit);
            mini = min(mini, prices[i]);
        }
        return maxprofit;

        // int maxprofit = 0;
        // for (int i = 0; i < prices.size(); i++) {

        //     for (int j = i + 1; j < prices.size(); j++) {
        //         int profit = prices[j] - prices[i];
        //         if (profit > maxprofit) {
        //             maxprofit = profit;
        //         }
        //     }
        // }
        // return maxprofit;
    }
};