class Solution {
public:
    int lengthOfLastWord(std::string s) {
        s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
            return !std::isspace(ch);
        }).base(), s.end());

        auto itFound = s.find_last_of(' ');
        if (itFound == s.npos) {
            return s.size();
        }
        
        return static_cast<int>(std::distance(s.begin() + itFound, s.end())) - 1;
    }
};
