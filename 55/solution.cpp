class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        if (nums.size() > 1 && nums[0] == 0) {
            return false;
        }

        std::vector<bool> possible(nums.size(), false);
        possible[0] = true;

        size_t numsLen = nums.size();
        for (size_t i = 0; i < numsLen; ++i) {
            if (possible[i]) {
                for (size_t n = i + 1; n < numsLen && n <= i + nums[i]; ++n) {
                    possible[n] = true;
                }
            }

        }


        return possible.back();
    }
};
