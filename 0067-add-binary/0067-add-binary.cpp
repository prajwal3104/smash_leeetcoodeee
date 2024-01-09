class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string result = "";
        int i = 0;
        int n = a.size();
        int m = b.size();
        
        while (i < n || i < m || carry != 0) {
            int x = 0;
            if (i < n && a[n - 1 - i] == '1') x = 1;
            int y = 0;
            if (i < m && b[m - 1 - i] == '1') y = 1;
            
            int sum = x + y + carry;
            result = to_string(sum % 2) + result;
            carry = sum / 2;
            i++;
        }
        return result;
    }
};
