class Solution {
public:
    bool isHappy(int n) {
        int slow = n, fast = n;
        do {
           slow = digitsSquare(slow);
           fast = digitsSquare(digitsSquare(fast));
        } while(slow != fast);
        return fast == 1;
    }

    int digitsSquare(int n) {
        int sum = 0;
        while(n != 0) {
            sum += pow(n % 10, 2);
            n /= 10;
        }
        return sum;
    }
};
