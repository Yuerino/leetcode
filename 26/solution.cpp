class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        auto &&last = std::unique(nums.begin(), nums.end());
        return std::distance(nums.begin(), last);
    }
};
