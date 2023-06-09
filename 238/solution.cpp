class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int zeros = std::count(nums.begin(), nums.end(), 0);
        if (zeros > 1) {
            nums.assign(nums.size(), 0);
            return nums;
        }

        int totalProd = std::accumulate(nums.begin(), nums.end(), 1, [](int total, int next) {
            if (next != 0)
                return total * next;
            return total;
        });

        for (int &num : nums) {
            if (zeros == 1)
                num = num ? 0 : totalProd;
            else
                num = totalProd / num;
        }

        return nums;
    }
};
