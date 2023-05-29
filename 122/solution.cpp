class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int profit = 0, last = prices[0];
        for (int price : prices) {
            if (last < price)
                profit += price - last;
            last = price;
        }
        return profit;
    }
};
