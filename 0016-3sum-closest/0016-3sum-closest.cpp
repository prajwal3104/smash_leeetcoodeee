class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int sum=0;
        int j=0, k =0;
        int presum = nums[0] + nums[1] + nums[2];
        if(nums.size() == 3)
        return nums[0] + nums[1] + nums[2];
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++)
        {
            j = i + 1;
            k = nums.size() - 1;
            while(j < k)
            {
                sum = nums[i] + nums[j] + nums[k];
                if(sum == target) return sum;
                else if(sum < target) j++;
                else k--;
                if((abs(sum - target) < abs(presum - target))) presum = sum;
            }
        }
        return presum;
    }
};