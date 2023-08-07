class Solution {
public:
    bool isPalindrome(const std::string &s) {
        std::string clean;
        clean.reserve(s.size());

        for (const auto &c : s) {
            if (isalnum(c)) {
                clean.push_back(tolower(c));
            }
        }

        for (size_t i = 0; i < clean.size() / 2; ++i) {
            if (clean[i] != clean[clean.size() - i - 1]) {
                return false;
            }
        }
        return true;
    }
};
