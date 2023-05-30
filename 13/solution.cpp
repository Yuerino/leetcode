class Solution {
public:
    int romanToInt(std::string s) {
        if (s.empty()) return 0;

        std::unordered_map<char, int> symbolValues = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        };

        int num = 0;
        for (int i = 0; i < s.size() - 1; ++i) {
            if (symbolValues[s[i]] < symbolValues[s[i + 1]]) {
                num -= symbolValues[s[i]];
            } else {
                num += symbolValues[s[i]];
            }
        }
        num += symbolValues[s.back()];

        return num;
    }
};
