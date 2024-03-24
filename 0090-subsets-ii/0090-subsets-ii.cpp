class Solution {
private:
    void findSubset(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
        int n = nums.size();
        
        ans.push_back(ds);
        for(int i = ind; i < n; i++){
            if(ind != i && nums[i] == nums[i - 1]) continue;
            ds.push_back(nums[i]);
            findSubset(i+1, nums, ds, ans);
            ds.pop_back();
        }
        
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(nums.begin(), nums.end());
        findSubset(0, nums, ds, ans);
        return ans;
    }
};