class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::map<int, size_t> elementCount;

        for (auto &&num : nums) {
            ++elementCount[num];
        }

        auto highestPair = std::max_element(elementCount.begin(), elementCount.end(),
            [] (auto &p1, auto &p2) {
                return p1.second < p2.second;
            });

        return highestPair->first;
    }
};
