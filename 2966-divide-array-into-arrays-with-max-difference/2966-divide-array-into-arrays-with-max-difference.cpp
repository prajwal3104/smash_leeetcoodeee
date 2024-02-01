class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n  = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> temp;
        
        for(int i = 0; i + 2 < n; i++){
            if(i % 3 == 0){
                if (nums[i + 2] - nums[i] <= k){
                    temp.push_back({nums[i], nums[i + 1], nums[i + 2]});
                }
                else return {};
                
            }
        }
        return temp;
        
    }
};