class Solution {
public:
    vector<vector<int>> findMatrix(vector<int> &nums) {
        vector<vector<int>> ans;
        vector<int> temp(nums.size() + 1);

        for(int i : nums) {
            if(temp[i] >= ans.size())
                ans.push_back({});
            ans[temp[i]].push_back(i);
            temp[i]++;
        }

        return ans;
    }

};