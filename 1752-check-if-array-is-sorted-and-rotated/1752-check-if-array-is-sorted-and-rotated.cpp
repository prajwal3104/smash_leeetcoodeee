class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> temp = nums;
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
           temp.push_back(nums[i]);
        }
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < temp.size(); i++){
            if(temp[i] == nums[0]){
                int j = 0;
                int x = i;
                for(j = 0; j < n && x < temp.size(); j++){
                    if(temp[x] != nums[j]) break;
                    x++;
                }
                if(j == n) return true;
            }
        }
        return false;
    }
};


