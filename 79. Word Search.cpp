
class Solution {
public:
     bool find(vector<vector< char> > & board, int i, int j,string word, int pos){
         int n=board.size();
         int m= board[0].size();
         if(pos== word.size()) return true;
         if(i<0 || j<0 || i>=n || j>=m) return false;

         if(board[i][j]!= word[pos]) return false;

         int temp = board[i][j];
         board[i][j]='*';

         if(find(board, i+1, j, word, pos+1) || find(board,i-1,j, word, pos+1) ||
            find(board, i, j+1, word, pos+1)|| find(board, i, j-1, word, pos+1))
             return true;
        board[i][j]= temp;
         return false;

     }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                if(word[0]== board[i][j] && find(board, i,j,word, 0))
                    return true;
            }
        }
        return false;
    }
};
