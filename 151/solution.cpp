class Solution {
public:
    std::string reverseWords(std::string s) {
        std::istringstream iss{s};
        std::string tmp, result;

        while (iss >> tmp) {
            result = tmp + " " + result;
        }
        
        result.pop_back();
        return result;
    }
};
