
class Solution {
public:
    int dp[200005];

    int call(string str, int i){
        if(i==str.length()) {
            return 1;
        }
        if(str[i]=='0') return 0;

         if(dp[i]!=-1) return dp[i];
         int ans= 0;
        ans  = ans + call(str, i+1);

        if(i+1< str.length() && str.substr(i, 2)<="26")
          ans= ans+ call(str, i+2);

           return dp[i]= ans;
    }
    int numDecodings(string s) {
        memset(dp, -1, sizeof(dp));
        int index=0,ans=0;
       return  call(s, index);


        return ans;
    }
};
