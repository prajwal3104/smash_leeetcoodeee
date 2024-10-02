class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> sortarr = arr;
        sort(sortarr.begin(), sortarr.end()); 
        unordered_map<int, int> mp;
        
        int rank = 1;
        for (int i = 0; i < sortarr.size(); ++i) {
            if (mp.find(sortarr[i]) == mp.end()) {
                mp[sortarr[i]] = rank++;
            }
        }

        for (int i = 0; i < n; ++i) {
            arr[i] = mp[arr[i]];
        }

        return arr;
    }
};
