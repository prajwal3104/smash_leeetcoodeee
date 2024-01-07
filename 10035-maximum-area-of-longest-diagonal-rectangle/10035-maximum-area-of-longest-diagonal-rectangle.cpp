#include <vector>
#include <algorithm>

class Solution {
public:
    int areaOfMaxDiagonal(std::vector<std::vector<int>>& v) {
        int maxDiagonalSquared = 0;
        int maxArea = 0;

        for (const auto& i : v) {
            int currentDiagonalSquared = i[0] * i[0] + i[1] * i[1];

            if (currentDiagonalSquared > maxDiagonalSquared) {
                maxDiagonalSquared = currentDiagonalSquared;
                maxArea = i[0] * i[1];
            } else if (currentDiagonalSquared == maxDiagonalSquared) {
                maxArea = std::max(maxArea, i[0] * i[1]);
            }
        }

        return maxArea;
    }
};
