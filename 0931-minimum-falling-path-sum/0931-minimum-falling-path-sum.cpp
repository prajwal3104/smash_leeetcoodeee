class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> dp(n, vector<int>(n, INT_MAX));

        for (int col = 0; col < n; ++col) {
            dp[0][col] = matrix[0][col];
        }

        for (int row = 1; row < n; ++row) {
            for (int col = 0; col < n; ++col) {
                dp[row][col] = matrix[row][col] + min({
                    dp[row - 1][col],
                    (col > 0) ? dp[row - 1][col - 1] : INT_MAX,
                    (col < n - 1) ? dp[row - 1][col + 1] : INT_MAX
                });
            }
        }

        int result = INT_MAX;
        for (int col = 0; col < n; ++col) {
            result = min(result, dp[n - 1][col]);
        }

        return result;
    }
};