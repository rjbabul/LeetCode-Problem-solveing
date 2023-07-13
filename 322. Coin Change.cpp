class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int infs = 100000;
        int n = coins.size();

        if(amount==0)return 0;
        coins.push_back(1);
        for(int i=n;i>0;i--) coins[i]= coins[i-1];

        int dp[n+1][amount+1];

        for(int i=0;i<=n;i++)for(int j=0;j<=amount;j++)if(j==0)dp[i][j]=0;else dp[i][j]=infs;

        for(int i=1;i<=n;i++){

            for(int j=0;j<=amount;j++){


               if(j<coins[i]){
                 dp[i][j]=  dp[i-1][j];
               }
                else {

                    dp[i][j]= min(dp[i-1][j], 1+ dp[i][j-coins[i]]);

                }
            }
        }

        if(dp[n][amount]>=100000)return -1;
        return dp[n][amount];
    }
};
