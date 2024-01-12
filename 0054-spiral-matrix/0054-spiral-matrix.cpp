class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
         vector<int> ans;
        
        int left = 0, right = m - 1;
        int top = 0, botom = n - 1;
        
        
    while(top <= botom && left<= right){   
        for(int i = left; i <= right; i++){
            ans.push_back(matrix[top][i]);
        }
        top++;
        for(int i = top; i <= botom; i++){
            ans.push_back(matrix[i][right]);
        }
        right--;
        if(top <= botom){
        for(int i = right; i >= left; i--){
            ans.push_back(matrix[botom][i]);
        }
        botom--;
    }
        if(left <= right){
        for(int i = botom; i >= top; i--){
            ans.push_back(matrix[i][left]);
        }
        left++;
    }
    }
        return ans;
}
};