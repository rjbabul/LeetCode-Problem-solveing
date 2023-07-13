
class Solution {

public:
    int cnt ;

    bool issafe(vector<string > &nQueens, int row, int col, int n)
{
    for(int i=0;i<n;i++) if(nQueens[i][col]=='Q') return false;

    for(int i=row-1, j= col-1;i>=0 && j>=0;i--,j--) if(nQueens[i][j]=='Q') return false;

    for(int i=row-1, j= col+1;i>=0 && j<n;i--,j++) if(nQueens[i][j]=='Q') return false;

    return true;
}


void solveNQueens(int n ,vector<string > &nQueens, int row)
{
    if(row == n)
    {
        cnt++;
        return ;
    }

    for(int i=0;i<n;i++)
    {
        if(issafe(nQueens,row, i,n))
        {
            nQueens[row][i]='Q';
            solveNQueens(n, nQueens, row+1);
            nQueens[row][i]='.';
        }
    }
}
    int totalNQueens(int n) {
        cnt =0;
        vector<string> nQueens(n , string(n, '.'));
        solveNQueens(n,  nQueens, 0);

        return cnt ;
    }
};
