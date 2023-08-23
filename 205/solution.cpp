class Solution {
public:
    bool isIsomorphic(const std::string &s, const string &t) {
        if (s.size() != t.size()) {
            return false;
        }

        std::unordered_map<char, char> charMapS, charMapT;
        for (int i = 0; i < s.size(); ++i) {
            if (charMapS.count(s[i]) != 0 && charMapS[s[i]] != t[i]) {
                return false;
            }
            if (charMapT.count(t[i]) != 0 && charMapT[t[i]] != s[i]) {
                return false;
            }
            charMapS.insert({s[i], t[i]});
            charMapT.insert({t[i], s[i]});
        }

        return true;
    }
};
