
class Solution {
public:
    int dp[201][201];
    int maxRect(int row, int m)
    {
        int mx =0;

        int left[m+1];
        int right[m+1];
        for(int i=0;i<m;i++)
        {
            int l =i;
            while(l-1>=0 && dp[row][i]<= dp[row][l-1]) l--;
            left[i]=l;
            l=i;
            while(l+1<m && dp[row][i]<= dp[row][l+1]) l++;
            right[i]=l;
        }


        for(int i=0;i<m;i++)
        {
            mx=max(mx, dp[row][i]* (right[i]-left[i]+1));
        }

        return mx;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        memset(dp, 0,sizeof(dp));

        for(int i=0;i<m;i++)
            if(matrix[0][i]=='0')dp[0][i]=0;
            else dp[0][i]=1;

        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='0') dp[i][j]=0;
                else dp[i][j]= dp[i-1][j]+1;
            }
        }

        int ans =0;


        for(int row=0;row<n;row++)
        {
            ans = max(ans, maxRect( row, m));
        }

        return ans ;
    }
};
