class Solution {
public:
    std::vector<int> countSmaller(std::vector<int>& nums) {
        std::vector<std::pair<int, int>> numsWithIdx;
        int numsSize = nums.size();
        std::vector<int> result(numsSize, 0);
        for (int i = 0; i < numsSize; ++i)
            numsWithIdx.push_back({nums[i], i});
        sortCount(0, numsSize - 1, numsWithIdx, result);
        return result;
    }

    void sortCount(int start, int end, std::vector<std::pair<int, int>> &numsWithIdx, std::vector<int> &result) {
        if (start >= end) return;

        int mid = start + (end - start) / 2;
        sortCount(start, mid, numsWithIdx, result);
        sortCount(mid + 1, end, numsWithIdx, result);

        for (int i = start, j = mid + 1; i < mid + 1; ++i) {
            while (j <= end && numsWithIdx[i].first > numsWithIdx[j].first)
                ++j;
            result[numsWithIdx[i].second] += j - mid - 1;
        }

        auto firstIter = numsWithIdx.begin();
        std::inplace_merge(firstIter + start, firstIter + mid + 1, firstIter + end + 1);
    }
};
