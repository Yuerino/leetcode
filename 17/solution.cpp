class Solution {
public:
    std::vector<std::string> letterCombinations(std::string digits) {
        if (digits.empty()) return {};
        std::vector<std::string> results(1, "");

        for (auto digit : digits) {
            std::vector<std::string> tmp;
            for (auto letter : letters[digit - '0']) {
                for (auto combi : results) {
                    tmp.push_back(combi + letter);
                }
            }
            results.swap(tmp);
        }

        return results;
    }

private:
    const std::vector<std::string> letters = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
};
