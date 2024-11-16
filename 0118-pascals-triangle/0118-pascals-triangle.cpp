class Solution {
public:
    vector<int> generateRow(int row) {
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for (int col = 1; col < row; col++) {
            ans = ans * (row - col); 
            ans = ans / (col); 
            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};



// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// `````` For finding the number at perticular place `````````````
// vector<vector<int>> nCr(int n, int r){
// if(r > n - r){
//     r = n - r
// }
//     long long res = 1;
//     for(int i = 0; i < r; i++){
//         res = res * (n - i);
//         res = res / (i + 1);
//     }
//     return res;
// }

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

// ````` Printing all the value at give row number````````
// vector<long long> getPascalsTriangleRow(int n) {
//     vector<long long> row;
//     long long ans = 1;
//     for (int i = 0; i <= n; i++) {
//         row.push_back(ans);
//         ans = ans * (n - i) / (i + 1);
//     }
//     return row;
// }