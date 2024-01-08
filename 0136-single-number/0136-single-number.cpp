class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int temp;
        
        for(int i = 0; i < n; i++){
            temp = nums[i];
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(nums[j] == temp) cnt++;
            }
            if(cnt == 1) return temp;
        }
        return -1;
    }
};


