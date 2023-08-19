class Solution {
public:
    bool isSubsequence(const std::string &s, const std::string &t) {
        int i = 0;
        for (int j = 0; i < s.size() && j < t.size(); ++j) {
            if (s[i] == t[j]) {
                ++i;
            }
        }

        return i == s.size();
    }
};
