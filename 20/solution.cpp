class Solution {
public:
    bool isValid(const std::string &s) {
        std::stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                st.push(c);
            } else {
                if (st.empty() || (st.top() == '(' && c != ')') ||
                    (st.top() == '{' && c != '}') || (st.top() == '[' && c != ']')) {
                        return false;
                    }
                st.pop();
            }
        }
        return st.empty();
    }
};
