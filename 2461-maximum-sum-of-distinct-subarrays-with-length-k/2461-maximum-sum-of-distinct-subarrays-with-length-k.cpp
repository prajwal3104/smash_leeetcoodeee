class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
    int n = nums.size();
    if (n < k) {
        return 0;
    }

    long long max_sum = 0;
    long long current_sum = 0;
    unordered_map<int, int> count;

    // Initialize the sliding window and count map
    for (int i = 0; i < k; ++i) {
        current_sum += nums[i];
        count[nums[i]]++;
    }

    // Check if the initial window has unique elements
    if (count.size() == k) {
        max_sum = current_sum;
    }

    for (int i = k; i < n; ++i) {
        // Remove the leftmost element
        int left_num = nums[i - k];
        current_sum -= left_num;
        count[left_num]--;
        if (count[left_num] == 0) {
            count.erase(left_num);
        }

        // Add the rightmost element
        int right_num = nums[i];
        current_sum += right_num;
        count[right_num]++;

        if (count.size() == k) {
            max_sum = max(max_sum, current_sum);
        }
    }

    return max_sum;
    }
};