class Solution {
public:
    int jump(std::vector<int> &nums) {
        size_t i = 1;
        for (; i < nums.size(); ++i) {
            nums[i] = std::max(nums[i] + static_cast<int>(i), nums[i - 1]);
        }

        int jump = 0;
        for (i = 0; i < nums.size() - 1; i = nums[i]) {
            ++jump;
        }

        return jump;
    }
};
