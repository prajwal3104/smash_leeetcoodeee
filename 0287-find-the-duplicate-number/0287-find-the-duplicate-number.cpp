class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<long long, int> mp;
        
        for(int i = 0; i < n; i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second >= 2) return it.first;
        }
        return -1;
    }
};
