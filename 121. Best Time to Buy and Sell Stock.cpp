class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxprofit = 0;
        int minprice = prices[0];
        for (int i = 0; i < n; i++) {
            if (minprice > prices[i]) {
                minprice = prices[i];
            } else {
                int profit = prices[i] - minprice;
                maxprofit = max(maxprofit, profit);
            }
        }
        return maxprofit;
    }
};