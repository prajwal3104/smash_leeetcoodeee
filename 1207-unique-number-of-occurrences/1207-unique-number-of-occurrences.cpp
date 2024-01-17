class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>map;
        unordered_set<int>st;
        for(auto i:arr)map[i]++;
        for(auto i:map)st.insert(i.second);
        return map.size()==st.size();
        
    }
};