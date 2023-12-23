class Solution {
public:

    bool isPathCrossing(string s) {
        int posX = 0, posY = 0;
        set<pair<int, int>> st;
        st.insert({0, 0});
        for(auto x: s)
        {
            if(x == 'N') posY++;
            if(x == 'S') posY--;
            if(x == 'E') posX++;
            if(x == 'W') posX--;
            if(st.find({posX, posY}) != st.end()) return true;    
            st.insert({posX, posY});
        }
        return false;
    }
    
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
};