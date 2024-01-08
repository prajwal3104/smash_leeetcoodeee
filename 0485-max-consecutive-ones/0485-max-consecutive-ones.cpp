class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cout = 0;
        int maxi = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] == 1) cout++;
            else cout = 0;
            
            maxi = max(cout, maxi);
        }
        return maxi;
        
    }
};