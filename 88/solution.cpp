class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n == 0) return;
        if (m == 0) {
            std::swap(nums1, nums2);
            return;
        }
        nums1.resize(m);
        nums1.insert(nums1.begin() + m, nums2.begin(), nums2.end());
        std::inplace_merge(nums1.begin(), nums1.begin() + m, nums1.end());
    }
};
