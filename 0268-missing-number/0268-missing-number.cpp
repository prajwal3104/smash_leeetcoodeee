class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR = 0;
        int n= nums.size();
        for(int i=0; i<=n; i++){
            XOR = XOR ^ i;
        }
        for(auto it: nums){
            XOR = XOR ^ it;
        }
        return XOR;
    }
};