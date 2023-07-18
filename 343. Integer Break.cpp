
class Solution {
public:
    int integerBreak(int n) {
        int dp[60];
        dp[0]=0;
        dp[1]=0;
        dp[2]=1;

        for(int i=3;i<=n ; i++)
        {
            dp[i]=i-1;
            for(int j = 1; j<=i ;j++)
            {
               dp[i]= max(dp[i], max(dp[i-j],i-j)*j);
            }
        }


        return dp[n];
    }
};
