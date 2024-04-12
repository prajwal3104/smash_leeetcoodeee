class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> maxh;

        // keep left max
        int m = 0;
        for (int h : height) {
            maxh.push_back(m);
            m = max(m, h);
        }

        // keep min(left max, right max)
        m = 0;
        for (int i = height.size() - 1; i >= 0; i--) {
            maxh[i] = min(maxh[i], m);
            m = max(m, height[i]);
        }

        // trapped water = min(left max, right max) - height
        int result = 0;
        for (int i = 0; i < height.size(); i++) {
            if (maxh[i] - height[i] > 0) {
                result += maxh[i] - height[i];
            }
        }
        return result;
    }
};
