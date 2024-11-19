class Solution {
public:
    int uniquePaths(int m, int n) {
            int N = n + m - 2;
            int s = m - 1; 
            double res = 1;
            
            for (int i = 1; i <= s; i++)
                res = res * (N - s + i) / i;
            return (int)res;
    }
};
