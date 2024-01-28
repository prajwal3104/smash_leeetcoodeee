class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int size = 0;
        for(int i=0; i<n; i++)
        {
            if(iswalnum(s[i]))
            {
                char ch = tolower(s[i]);
                s[size] = ch;
                size++;
            }
        }  
        if(size == 0)
        {
            return true;
        }
        int i = 0;
        int j= size - 1;
        while(i <= size/2)
        {
            if(s[i] != s[j])
            {
                return false;
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};
