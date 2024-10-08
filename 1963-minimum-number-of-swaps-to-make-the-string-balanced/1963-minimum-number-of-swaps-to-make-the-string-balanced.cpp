class Solution {
public:
    int minSwaps(string s) {
        int bal = 0;
        int maxImb = 0;

        for (char c : s) {
            if (c == '[') {
                bal++;
            } else { // c == ']'
                bal--;
            }
            if (bal < 0) {
                maxImb = max(maxImb, -bal);
            }
        }
        return (maxImb + 1) / 2;
    }
};
