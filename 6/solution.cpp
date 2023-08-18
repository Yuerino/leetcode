class Solution {
public:
    std::string convert(const std::string &s, int numRows) {
        if (numRows == 1) return s;
        std::vector<std::string> strRows(numRows, "");

        int rowIdx = 0;
        bool isRowEnded = true;
        for (int i = 0; i < s.size(); ++i) {
            if (rowIdx == 0 || rowIdx == numRows - 1) {
                isRowEnded = !isRowEnded;
            }
            strRows[rowIdx] += s[i];
            if (isRowEnded) {
                rowIdx--;
            } else {
                rowIdx++;
            }
        }

        std::string result;
        std::for_each(strRows.cbegin(), strRows.cend(), [&result](const auto &str) {
            result += str;
        });
        return result;
    }
};
