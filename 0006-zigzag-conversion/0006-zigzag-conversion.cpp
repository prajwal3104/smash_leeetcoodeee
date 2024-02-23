class Solution {
public:
    string convert(string s, int numRows,string ans = "",int row = 0,int inc = -1) {
        if(s.size() == 1 or numRows == 1)return s;
        vector<string> arr(numRows);
        for(int i = 0;i<s.size();i++){
            if(i%(numRows-1)==0)inc*=-1;
            arr[row].push_back(s[i]);
            row+=inc;
        }
        for(auto ele:arr)ans+=ele;
        return ans;
    }
};