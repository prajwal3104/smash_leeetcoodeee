class Solution {
public:
    bool judgeSquareSum(int c) {
        if (c == 0) {
            return true;
        }
        if (c < 0) {
            return false;
        }
        for (int long long a = 0; a * a <= c; a++) {
            int long long b = c - a * a;
            if (b > 0 && (int)sqrt(b) * (int)sqrt(b) == b) {
                return true;
            }
        }
        return false; 
    }
};