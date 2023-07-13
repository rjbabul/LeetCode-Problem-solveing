
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int x, y;
        int n = matrix[0].size()-1;

        for(int i=0;i<n-i;i++)
        for(int j=i,l=i; j<n-i;j++){

            x= j;
            y=n-l;

           // cout<<l<<" "<<j<<endl;

          //  cout<<x<<" a "<<y<<endl;
             swap(matrix[l][j], matrix[x][y]);
            x=y;
            y=(n-j);

          // cout<<x<<"b "<<y<<endl;
            swap(matrix[l][j], matrix[x][y]);
            x=y;
            y=l;

          //   cout<<x<<" c "<<y<<endl;
             swap(matrix[l][j], matrix[x][y]);
        }
       // cout<<endl;

    }
};
