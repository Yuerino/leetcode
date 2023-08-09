class Solution {
public:
    int removeElement(std::vector<int> &nums, int val) {
        auto isEqualVal = std::bind(std::equal_to<int>(), val, std::placeholders::_1);
        std::erase_if(nums, isEqualVal);
        return static_cast<int>(nums.size());
    }
};
