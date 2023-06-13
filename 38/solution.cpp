class Solution {
public:
    std::string countAndSay(int n) {
        std::string ret = "1";
        for (; n > 1; --n) {
            std::string tmp = "";
            for (int i = 0; i < ret.size(); ++i) {
                int count = 1;
                while (i + 1 < ret.size() && ret[i] == ret[i + 1]) {
                    ++count;
                    ++i;
                }
                tmp += std::to_string(count) + ret[i];
            }
            ret = tmp;
        }

        return ret;
    }
};
