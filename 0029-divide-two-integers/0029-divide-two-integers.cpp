class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        int x;
        if (dividend >= INT_MIN && (divisor <= INT_MAX && divisor != 0)) {
            x = dividend / divisor;
        }
        if (x > INT_MAX)
            return INT_MAX;
        else if (x < INT_MIN)
            return INT_MIN;
        else
            return x;
    }
};
