
class Solution {
public:
int dp[202][10004];
    int numSquares(int n) {
        vector<int> vt;
        for(int i=1;i*i<=n;i++)
           vt.push_back(i*i);

        int m = vt.size();

        swap(n,m);
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));

        for(int i=0;i<=n;i++) dp[i][0]=1;
        for(int i=0;i<=m;i++) dp[0][i]= m;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(j<vt[i-1]) dp[i][j]=dp[i-1][j];

                else if(j==vt[i-1])dp[i][j]= 1;
                else dp[i][j]  = min(dp[i-1][j], dp[i][j-vt[i-1]]+1);
            }
        }
        return dp[n][m];

    }
};
