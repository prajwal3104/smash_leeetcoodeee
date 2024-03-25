class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> mp;
        vector<int> duplicates;
        
        for(int num : nums){
            mp[num]++;
        }
        for(auto it : mp){
            if(it.second > 1) duplicates.push_back(it.first);
        } 
        
        return duplicates;
    }
};