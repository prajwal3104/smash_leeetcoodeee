class Solution {
public:
    int calTotalHour(vector<int>& piles, int h) {
        int totalH = 0;
        int n = piles.size();

        for (int i = 0; i < n; i++) {
            totalH += ceil((double)piles[i] / double(h));
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = INT_MAX;

        if (low > INT_MAX - high) {
            while (low <= high) {
            int mid = low + (high - low) / 2;
            int totalH = calTotalHour(piles, mid);   
            if (totalH <= h) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        }
        return low;
    }
};
