class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int dp[n+1][n+1];

        memset(dp , 0 , sizeof(dp));
        int mx =1;
        for(int i=0;i< n; i++)dp[i][i]=1;
        int index=0;
       for(int i=0;i<n-1;i++)
           if(s[i]==s[i+1])
           {
               dp[i][i+1]=1;mx=2;
               index = i;
           }



        for(int i=0,cnt=2;i<=n;i++,cnt++){

            for(int j=0;j+cnt<n;j++){
             int   k = j+cnt;
                if(s[j]==s[k] && dp[j+1][k-1]==1)
                {
                    dp[j][k]=1;
                    if(mx< (k-j+1)){
                        mx= k-j+1;
                        index=j;
                    }
                }
                else dp[j][k]=0;
        }
        }

        return s.substr(index, mx);
    }
};
