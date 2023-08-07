class Solution {
public:
    int strStr(const std::string &haystack, const std::string &needle) {
        auto found = haystack.find(needle);
        if (found == haystack.npos) {
            return -1;
        }
        return static_cast<int>(found);
    }
};
