
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        int dp[n+1];
        memset(dp, 0, sizeof(dp));
        dp[n]=1;
        for(int i=n-1;i>=0;i--){
            string str= s.substr(i, n-i);
            for(string x: wordDict){
                if(x== str.substr(0,x.length()) && dp[i+x.length()]) dp[i]=1;
            }
        }
        return dp[0];

    }
};
