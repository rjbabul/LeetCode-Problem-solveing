
class Solution {
public:
long long int check( vector<int>&candies,long long  int x)
    {
        long long int ans =0;

        for(auto candite:candies)
        {
           ans=ans+ candite/x;
        }
        return  ans ;
    }
    int maximumCandies(vector<int>& candies, long long k) {
        int l =1, r;
        long long int sum =0;
        for(auto x:candies){ r=max(r, x);sum+=x;}
         if(sum<k) return 0;
         l=1;
        int av=1;
        while(l<=r)
        {
             int mid= (l+r)/2;

            long long int x = check(candies,mid);

            if(x>=k){
                av =mid;
                l= mid+1;
            }
            else
                r=mid-1;
        }

        return av;

    }
};
