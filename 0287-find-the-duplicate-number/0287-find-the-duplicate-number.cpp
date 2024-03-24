class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        map< long long, int>map;
        
        for(int i = 0; i < n; i++){
            map[nums[i]]++;
        }
        for(auto it: map){
            if(it.second >= 2) return it.first;
        }
        return -1;
    }
};