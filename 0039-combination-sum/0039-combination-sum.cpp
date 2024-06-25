class Solution {
public:
    vector<vector<int>> res;
    void solve(int i, int target, vector<int>&temp, vector<int>& candidates){
        if(target == 0){
            res.push_back(temp);
            return;
        }
        if(i == candidates.size()) return;

        if(candidates[i] <= target){
            target -= candidates[i];
            temp.push_back(candidates[i]);

            solve(i, target, temp, candidates);

            target += candidates[i];
            temp.pop_back();
        }

        solve(i+1, target, temp, candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        res.clear();
        vector<int> temp;
        solve(0, target, temp, candidates);
        return res;
    }
};