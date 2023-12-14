class Solution {
public:
    void rotate(vector<vector<int>>& matx) {
        int n = matx.size();
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                swap(matx [i][j], matx [j][i]);
            }
        }
        for(int i = 0; i < n; i++){
            reverse(matx[i].begin(), matx[i].end());
        }
        
    }
};