class Solution {
public:
    int n, m;
    
    void setRow(vector<vector<int>>& matrix, int i){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] != 0) matrix[i][j] = -10;
        }
    }
    
    void setColum(vector<vector<int>>& matrix, int j){
        for(int i = 0; i < n; i++){
            if(matrix[i][j] != 0) matrix[i][j] = -10;
        }
    }
    
    void setZeroes(vector<vector<int>>& matrix) {
        n = matrix.size();
        m = matrix[0].size();
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    setRow(matrix, i);
                    setColum(matrix, j);
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == -10) matrix[i][j] = 0;
            }
        }
        
    }
};