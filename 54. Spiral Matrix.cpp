
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int dp[n+1][m+1];
        memset(dp, 0 , sizeof(dp));
        vector<int > vt;
        int i=0,j=0;
        int c=0;
        while(c<n*m){
            while(j<m && dp[i][j]==0){
                vt.push_back(matrix[i][j]);
                dp[i][j]=1;
                j++;
                c++;
            }
            j--;
            i++;
             while(i<n && dp[i][j]==0){
                vt.push_back(matrix[i][j]);
                dp[i][j]=1;
                i++;
                c++;
            }
            i--;
            j--;
           // cout<<i<<" "<<j<<endl;
             while(j>=0 && dp[i][j]==0){
                vt.push_back(matrix[i][j]);
                dp[i][j]=1;
                j--;
                c++;
            }
            j++;
            i--;
             while(i>=0 && dp[i][j]==0){
                vt.push_back(matrix[i][j]);
                dp[i][j]=1;
                i--;
                c++;
            }
            j++;
            i++;

        }
        return vt;
    }
};
