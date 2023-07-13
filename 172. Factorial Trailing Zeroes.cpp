
class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        int m=5;
        while(m<=n){
            ans+= (n/m);
            //cout<<ans<<" "<<m<<endl;
            m*=5;

        }
        return ans;
    }
};
