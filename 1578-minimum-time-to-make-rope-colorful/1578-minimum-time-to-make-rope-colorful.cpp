class Solution {
public:
     int minCost(string colors, vector<int>& neededTime) {
        int n = colors.length();
        int left = 0, right = 0;
        int fTime = 0;
        while (left < n) {
            while (right < n && colors[right] == colors[left])
                right++;
            int currentTime = 0, i = INT_MIN;
            while (left < right) {
                currentTime = currentTime + neededTime[left];
                i = max(i, neededTime[left]);
                left++;
            }
            fTime = fTime + currentTime - i;
            left = right;
        }
        return fTime;
    }
};