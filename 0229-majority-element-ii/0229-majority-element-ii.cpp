class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<long long, int> map;
        vector<int> result;

        for(int i = 0; i < n; i++) {
            map[nums[i]]++;
        }

        for(auto it : map) {
            if(it.second > (n / 3)) {
                result.push_back(static_cast<int>(it.first));
            }
        }

        return result;
    }
};