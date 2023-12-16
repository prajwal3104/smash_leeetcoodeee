class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[0];
        int flag=true;
        while(slow!=fast or flag){
            if(flag) flag = false;
            slow=nums[slow];
            fast=nums[fast];
            fast=nums[fast];
        }
        slow=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};