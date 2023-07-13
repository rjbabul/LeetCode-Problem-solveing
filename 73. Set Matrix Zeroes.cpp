
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<int, int > row, column;
        int n, m;
        n= matrix.size();
        m= matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)if( matrix[i][j]==0)row[i]++, column[j]++;
        }

         for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)if( row[i] + column[j]>0) matrix[i][j]=0;
        }
    }

};
