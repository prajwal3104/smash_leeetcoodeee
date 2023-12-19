class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n = arr.size( );
        vector<int> temp;
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                temp.push_back(arr[i]);
            }
        }

        int no_Z = temp.size();

        for (int i = 0; i < no_Z; i++) {
            arr[i] = temp[i];
        }

        for (int i = no_Z; i < n; i++) {
            arr[i] = 0;
        }
        
    }
};