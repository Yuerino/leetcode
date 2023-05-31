class Solution {
public:
    bool wordBreak(std::string s, std::vector<std::string> &wordDict) {
        int maxWordSize = 0;
        std::unordered_set<std::string> words;
        for (auto &&word : wordDict) {
            words.insert(word);
            maxWordSize = max(maxWordSize, (int)word.size());
        }

        std::vector<bool> validWord(s.size(), false);
        for (int i = 0; i < s.size(); ++i) {
            if (i == 0 || validWord[i - 1]) {
                for (int wordSize = 1; wordSize <= maxWordSize && i + wordSize <= s.size(); ++wordSize) {
                    if (words.count(s.substr(i, wordSize)) > 0)
                        validWord[i + wordSize - 1] = true;
                }
            }
        }
        return validWord.back();
    }
};
