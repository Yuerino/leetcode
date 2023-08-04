class Solution {
public:
    std::string intToRoman(int num) {
        std::string result = "";
        const std::map<int, std::string, std::greater<int>> romans{
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };

        for (const auto &[value, str] : romans) {
            while (num - value >= 0) {
                result += str;
                num -= value;
            }
        }

        return result;
    }
};
