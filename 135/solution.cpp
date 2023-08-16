class Solution {
public:
    int candy(const std::vector<int> &ratings) {
        std::vector<int> candiesLeft(ratings.size(), 1);
        std::vector<int> candiesRight(ratings.size(), 1);

        for (int i = 1; i < ratings.size(); ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candiesLeft[i] = candiesLeft[i - 1] + 1;
            }
        }

        for (int i = ratings.size() - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                candiesRight[i] = candiesRight[i + 1] + 1;
            }
        }

        int result = 0;
        for (int i = 0; i < ratings.size(); ++i) {
            result += std::max(candiesLeft[i], candiesRight[i]);
        }
        return result;
    }
};
