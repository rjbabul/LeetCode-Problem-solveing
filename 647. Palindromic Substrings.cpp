
class Solution {
public:
    int countSubstrings(string s) {
         int n = s.length();
        int dp[n+1][n+1];
        memset(dp, 0, sizeof(dp));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
         int cnt =s.length();
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                    dp[i][j]= 2+ dp[i+1][j-1];
                else
                    dp[i][j]= max(dp[i+1][j], dp[i][j-1]);
                if(dp[i][j]== j-i+1) cnt++;
            }
        }
        return cnt;
    }
};
