
class Solution {
public:
    int check(vector<int> &nums, int x)
    {
        int sum=0;
        for(auto n:nums)
        {
              int sum=0;
            for(auto n:nums)
            {

                sum+=(n-1)/x;
            }

            return sum ;
        }

        return sum ;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {

        int l =1, r=0;
        for(auto x:nums)
        {
            r=max(r, x);
        }

        int ans =1;
        while(l<=r)
        {
            int mid= (l+r)/2;
            int x= check(nums,mid);

            if(x<=maxOperations)
            {
                 ans=mid;
                 r= mid-1;
            }
            else l= mid+1;
        }

        return ans ;


    }
};
