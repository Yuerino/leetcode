class Solution {
public:
    std::string longestCommonPrefix(vector<std::string>& strs) {
        if (strs.size() == 1) {
            return strs[0];
        }

        std::string result;
        for (size_t i = 0; i < strs[0].size(); ++i) {
            for (size_t j = 0; j < strs.size(); ++j) {
                if (i >= strs[j].size() || strs[0][i] != strs[j][i]) {
                    goto endloop;
                }
            }
            result += strs[0][i];
        }
endloop:
        return result;
    }
};
