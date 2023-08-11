class Solution {
public:
    int maxProfit(const std::vector<int> &prices) {
        int buy = std::numeric_limits<int>::max(), profit = 0;
        for (int price : prices) {
            buy = std::min(buy, price);
            profit = std::max(profit, price - buy);
        }
        return profit;
    }
};
