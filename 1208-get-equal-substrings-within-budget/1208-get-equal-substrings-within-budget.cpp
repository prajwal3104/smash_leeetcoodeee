class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int n = s.size();
        int e=0,st=0;
        int res =0;
        while(e<n+1){
            if(maxCost<0){
                maxCost+=abs(s[st]-t[st]);
                st++;
            }
            else if(maxCost>=0){
                res = max(res, e-st);
                maxCost-=abs(s[e]-t[e]);
                e++;
            }
        }
        return res;
    }
};