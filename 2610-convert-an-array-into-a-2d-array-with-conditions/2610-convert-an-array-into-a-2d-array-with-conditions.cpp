class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int hash[501]={0};
        vector<vector<int>>ans;
        vector<int> temp;
        int mx=0;
        for(int i=0; i<nums.size(); i++)
        {
            hash[nums[i]]++;
        }
        
        for(int i=0; i<501; i++)
        {
            if(hash[i]>mx)
            mx=hash[i];
        }

        while(mx!=0)
        {
        for(int i=0; i<501; i++)
        {
            if(hash[i]>0)
            {
            temp.push_back(i);
            hash[i]--;
            }
        }
        ans.push_back(temp);
        temp.clear();
        mx--;
        }
        return ans;
    }
};
