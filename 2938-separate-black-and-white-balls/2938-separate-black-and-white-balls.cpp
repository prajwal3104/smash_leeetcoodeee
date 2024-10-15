class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.size();
        int white = 0;
        long long steps = 0;
        
        for(int i = n -1; i >= 0; i--){
            if(s[i] == '0') white++;
            else steps += white;
        }
        return steps;
    }
};