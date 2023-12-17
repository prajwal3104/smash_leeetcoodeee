#include <set>
#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        std::set<int> uniqueSet;

        for (int i = 0; i < nums.size(); ++i) {
            uniqueSet.insert(nums[i]);
        }

        int k = uniqueSet.size();
        int j = 0;

        for (int x : uniqueSet) {
            nums[j++] = x;
        }

        return k;
    }
};
