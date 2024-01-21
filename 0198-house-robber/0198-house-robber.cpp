class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        int robPrev = 0;
        int noRobPrev = 0;

        for(int i = 0; i < n; i++){
            int newRob = noRobPrev + nums[i];
            int newNoRob = max(robPrev, noRobPrev);
            
            robPrev = newRob;
            noRobPrev = newNoRob;
        }

        return max(robPrev, noRobPrev);
    }
};



