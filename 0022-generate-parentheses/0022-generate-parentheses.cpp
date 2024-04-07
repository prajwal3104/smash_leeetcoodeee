class Solution {
public:
    vector<string> ans;
    void b(int i, int j, int n, string s){
        if(i == n && j == n){
            ans.push_back(s);
            return;
        }
        if(i < n){
            s = s + '(';
            b(i+1, j, n, s);
            s.pop_back();
        }
        if(j < i){
            s = s + ')';
            b(i, j+1, n, s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        b(0, 0, n, s);
        return ans;
        
    }
};