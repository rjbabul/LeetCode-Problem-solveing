
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {

        int n,m;
        string str, st;
        str+='0';
        st+='0';
        str+= text1;
        st+=text2;
        n=str.length();
        m=st.length();
        int dp[n+1][m+1];
        memset(dp, 0, sizeof(dp));

        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(str[i]==st[j]) dp[i][j]= dp[i-1][j-1]+1;
                else dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n-1][m-1];
    }
};
