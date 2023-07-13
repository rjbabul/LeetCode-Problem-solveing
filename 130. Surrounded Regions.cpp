
class Solution {
public:
    int visit[203][203];
    int dp[203][203];
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    void dfs(vector<vector<char> > & board, int r, int c, int n, int m)
    {
        for(int i=0;i<4;i++)
        {
            int rr= r+row[i];
            int cc= c+col[i];
            if(rr<0 || rr==n || cc<0 || cc==m || visit[rr][cc]) continue;
            if(board[rr][cc]=='X') continue;
            visit[rr][cc]=1;
            dp[rr][cc]=1;
            dfs(board, rr, cc, n, m);
        }
    }
    void solve(vector<vector<char>>& board) {
        int n= board.size();
        int m = board[0].size();

        memset(dp, 0, sizeof(dp));
        memset(visit, 0, sizeof(visit));

        queue< pair<int , int > > q;
        for(int i=0;i<n;i++)
            {
                if(board[i][0]=='O' && !visit[i][0])
                {
                    visit[i][0]=1;
                    dp[i][0]=1;
                    dfs(board,i,0,n,m);
                }
            }

        for(int i=0;i<n;i++)
            {
                if(board[i][m-1]=='O' && !visit[i][m-1])
                {
                    visit[i][m-1]=1;
                    dp[i][m-1]=1;
                    dfs(board,i,m-1,n,m);
                }
            }

         for(int i=0;i<m;i++)
            {
                if(board[0][i]=='O' && !visit[0][i])
                {

                    visit[0][i]=1;
                    dp[0][i]=1;
                    dfs(board,0,i,n,m);
                }
            }

          for(int i=0;i<m;i++)
            {
                if(board[n-1][i]=='O' && !visit[n-1][i])
                {
                    visit[n-1][i]=1;
                    dp[n-1][i]=1;
                    dfs(board,n-1,i,n,m);
                }
            }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!dp[i][j] && board[i][j]=='O') board[i][j]='X';

            }
        }

    }
};
