class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map;
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            int num = nums[i];
            int need = target - num;
            if(map.find(need) != map.end()){
                return {map[need], i};
            }
            map[num] = i;
        }
        return{};
    }
};