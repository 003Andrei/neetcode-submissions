class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minPrice = prices[0];
        int profit;
        for (int p: prices){
            minPrice = min(p, minPrice);
            profit = p - minPrice;
            maxProfit = max(profit, maxProfit);
        }
        return maxProfit;
    }
};
