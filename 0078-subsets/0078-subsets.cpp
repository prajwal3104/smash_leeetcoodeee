class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        
        for(int num = 0; num < (1 << n); num++){
            vector<int> sub;
            for(int i = 0; i < n; i++){
                if(num & (1 << i)) sub.push_back(nums[i]);
            }
            ans.push_back(sub);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};
