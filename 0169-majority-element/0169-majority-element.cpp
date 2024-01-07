class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> map;
        
        for(int i = 0; i < n; i++){
            map[nums[i]]++;
        }
        for(auto it: map){
            if(it.second > (n/2)) return it.first;
        }
        return -1;
    }
};
