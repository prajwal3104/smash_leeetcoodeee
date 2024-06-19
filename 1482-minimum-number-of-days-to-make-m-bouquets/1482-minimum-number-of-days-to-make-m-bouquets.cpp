class Solution {
public:
    bool check(int mid,vector<int>& a, int m, int k)
    {
        int nf=0;
        int nb=0;
               int n= a.size();
     
        for(int i=0;i<n;i++)
        {
           
             if(a[i]<=mid)
             nf++;
             else
             nf=0;
            
             if(nf==k)
            {  
                 nf=0;
                nb++;
                if(nb==m)
                return 1;
            }
        }
        return 0;
    }
    int minDays(vector<int>& a, int m, int k) {
        int mi=INT_MAX;
        int ma=INT_MIN;
        int n= a.size();
        for(int i=0;i<n;i++)
        {
        mi=min(mi,a[i]);
         ma=max(ma,a[i]);
        }
        int ans=-1;
        while(mi<=ma)
        {
            int mid=mi+(ma-mi)/2;
            if(check(mid,a,m,k))
            {

                ans=mid;
                ma=mid-1;

            }
            else
            mi=mid+1;
        }
        return ans;
    }
};
