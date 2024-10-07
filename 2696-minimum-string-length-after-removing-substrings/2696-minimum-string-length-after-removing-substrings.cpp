class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        for(char ch:s) {
            if(!st.empty() and ((st.top()=='C' and ch=='D') or 
            (st.top()=='A' and ch=='B'))) {
                st.pop();
            }
            else {
                st.push(ch);
            }
        }
        return st.size();
    }
};