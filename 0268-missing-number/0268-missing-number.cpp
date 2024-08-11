class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        
        int sum = (n *(n + 1)) / 2;
        
        for(int i = 0; i < n; i++){
            cnt += nums[i];
        }
        
        int miss = sum - cnt;
        
        return miss;
        
    }
};