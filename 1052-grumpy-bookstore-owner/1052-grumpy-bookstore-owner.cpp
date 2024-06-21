class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();
        
        int a = 0;
        
        for (int i = 0; i < n; ++i) {
            if (!grumpy[i]) {
                a += customers[i];
            }
        }
        
        int b = 0;
        int c = 0;

        for (int i = 0; i < n; ++i) {
            if (grumpy[i]) {
                c += customers[i];
            }
            
            if (i >= minutes && grumpy[i - minutes]) {
                c -= customers[i - minutes];
            }
            
            b = max(b, c);
        }
        
        return a + b;
    }
};
