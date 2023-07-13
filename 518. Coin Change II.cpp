
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        int dp[n+1][amount+1];
        memset(dp, 0, sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<=amount;j++)
            {
                if(j==0) dp[i][j]=1;
                else if(j< coins[i-1]) dp[i][j]= dp[i-1][j];
                else dp[i][j]= dp[i-1][j]+ dp[i][j-coins[i-1]];
            }
        }
        return dp[n][amount];
    }
};
