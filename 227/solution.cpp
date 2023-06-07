class Solution {
public:
    int calculate(std::string s) {
        std::stringstream ss("+" + s);
        char op;
        int ans = 0, last = 0, num = 0;
        while (ss >> op >> num) {
            switch (op) {
                case '-':
                    num = -num;
                case '+':
                    ans += num;
                    break;
                case '*':
                    num = last * num;
                    ans = ans - last + num;
                    break;
                case '/':
                    num = last / num;
                    ans = ans - last + num;
                    break;
                default:
                    break;
            }
            last = num;
        }
        return ans;
    }
};
