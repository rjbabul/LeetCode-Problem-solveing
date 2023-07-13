
class Solution {
public:
    int check( vector<int>&piles, int x)
    {
        int ans =0;
        for(auto pile:piles)
        {
           ans= ans+ (pile-1)/x+1;
        }
        return ans ;
    }
    int minEatingSpeed(vector<int>& piles,long long int h) {
        int l =1 , r=0;
        long long int sum =0;
        for(auto x:piles) {r= max(r,x);sum+=x;}
        int av= r;
        l = ((sum-1)/h)+1;

        while(l<=r)
        {

            int mid= (l+r)/2;

            int x = check(piles,mid);

            if(x<=h){
                av =mid;
                r= mid-1;
            }
            else
                l=mid+1;
        }

        return av;

    }
};
