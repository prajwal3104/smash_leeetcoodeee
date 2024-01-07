class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size();
        long long maxDiagonal = 0;
        long long maxArea = 0;

        for (int i = 0; i < n; i++) {
            int length = dimensions[i][0];
            int width = dimensions[i][1];

            long long diagonal = static_cast<long long>(length) * length + width * width;

            if (diagonal > maxDiagonal || (diagonal == maxDiagonal && static_cast<long long>(length) * width > maxArea)) {
                maxDiagonal = diagonal;
                maxArea = static_cast<long long>(length) * width;
            }
        }

        return static_cast<int>(maxArea);
    }
};
