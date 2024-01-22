class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(2, 0);
        set<int> st;

        int sum = n * (n + 1) / 2;

        for (int i = 0; i < n; i++) {
            if (st.count(nums[i]) == 1) {
                result[0] = nums[i];
            }
            st.insert(nums[i]);
            sum -= nums[i];
        }

        result[1] = sum + result[0];

        return result;
    }
};
