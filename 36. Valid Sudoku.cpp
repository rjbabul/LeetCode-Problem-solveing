
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n =9, m=9;
        map<char, int > mp;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]>='1' && board[i][j]<='9'){
                    if(mp[board[i][j]]>0) return false;
                    mp[board[i][j]]++;
                }
            }
            mp.clear();
        }
        for(int j=0;j<n;j++){
            for(int i=0;i<m;i++){
                if(board[i][j]>='1' && board[i][j]<='9'){
                    if(mp[board[i][j]]>0) return false;
                    mp[board[i][j]]++;
                }
            }
            mp.clear();
        }

       for(n=0;n<7;n+=3){
           for(m=0;m<7;m+=3){
               mp.clear();
                for(int i=n;i<=n+2;i++){
            for(int j=m;j<=m+2;j++){
                if(board[i][j]>='1' && board[i][j]<='9'){
                    if(mp[board[i][j]]>0) return false;
                    mp[board[i][j]]++;
                }
            }
        }
           }
       }

        return true;
    }
};
