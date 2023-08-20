class Solution {
public:
    bool canConstruct(const string &ransomNote, const string &magazine) {
        std::array<int, 26> charOccur;
        charOccur.fill(0);
        for (char c : magazine) {
            ++charOccur[c - 'a'];
        }
        for (char c : ransomNote) {
            --charOccur[c - 'a'];
            if (charOccur[c - 'a'] < 0) {
                return false;
            }
        }
        return true;
    }
};
