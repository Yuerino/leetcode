class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            num = digitSum(num);
        }
        return num;
    }

private:
    static int digitSum(int num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
};