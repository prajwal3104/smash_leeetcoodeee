class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> pq(nums.begin(), nums.end());
        long long totalScore = 0;

        for (int i = 0; i < k; ++i) {
            int currentMax = pq.top();
            pq.pop();

            totalScore += currentMax;

            int replace = (currentMax + 2) / 3;

            if (replace > 0) {
                pq.push(replace);
            }
        }
        return totalScore;
    }
};
