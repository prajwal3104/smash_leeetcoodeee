class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)
            return "1";
        
        string str = countAndSay(n-1);
        int len = str.length();
        string retStr = "";

        for(int i = 0; i < len;)
        {
            char ch = str[i];
            int j = i+1;
            
            while(j < len && ch == str[j])
                j++;

            retStr += to_string(j-i) + ch;
            i = j;
        }
        return retStr;
    }
};