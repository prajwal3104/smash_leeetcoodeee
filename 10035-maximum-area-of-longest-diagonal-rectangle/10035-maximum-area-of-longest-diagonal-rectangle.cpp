class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
    int n = dimensions.size();
        double maxDiagonal = 0;
        int maxArea = 0;

        for (int i = 0; i < n; i++) {
            int length = dimensions[i][0];
            int width = dimensions[i][1];

            double diagonal = sqrt(length * length + width * width);

            if (diagonal > maxDiagonal || (diagonal == maxDiagonal && length * width > maxArea)) {
                maxDiagonal = diagonal;
                maxArea = length * width;
            }
        }

        return maxArea;
    }
};