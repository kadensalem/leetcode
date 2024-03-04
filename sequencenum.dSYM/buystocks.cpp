class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            else if (i == prices.size() - 1) {
                if (prices[i] - min > 0) {
                    profit += prices[i] - min;
                }
            }
            else if (prices[i + 1] < prices[i]) {
                profit += (prices[i] - min);
                min = prices[i + 1];
                i++;
            }
        }
        return profit;
        
    }
};