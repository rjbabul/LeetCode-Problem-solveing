
class Solution {
public:


    int lcm(string str, string st){
        int n= str.length();
        int m= st.length();
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(str[j-1]== st[i-1]) dp[i][j]= dp[i-1][j-1]+1;
                else dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
            }
        }


        return dp[m][n];
    }
    int minDistance(string word1, string word2) {
        int n= word1.length()+ word2.length();
        int m= lcm(word1, word2);

        return n- 2*m;
    }
};
