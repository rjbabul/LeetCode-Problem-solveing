
class Solution {
public:
    bool issafe(vector< vector< char> >& baord, int row, int col, char ch)
    {
        for(int i=0;i<9;i++)
        {
            if(baord[i][col]==ch)return false;
            if(baord[row][i]==ch) return false;
            if(baord[3*(row/3)+ i/3][3*(col/3)+i%3]==ch) return false;
        }
        return true;
    }
   bool solved(vector< vector< char> > & baord)
   {
       int n = baord.size();
       int m = baord[0].size();

       for(int i=0;i<n ;i++)
       {
           for(int j=0;j<m;j++)
           {
               if(baord[i][j]=='.')
               {
                   for(char ch='1';ch<='9';ch++)
                   {
                       if(issafe(baord,i,j,ch))
                       {
                           baord[i][j]=ch;
                           if( solved(baord)==true)return true;
                           baord[i][j]='.';
                       }
                   }
                    return false;
               }
           }
       }
       return true;
   }

    void solveSudoku(vector<vector<char>>& board) {
        solved(board);
    }
};
