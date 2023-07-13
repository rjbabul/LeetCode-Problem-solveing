
class Solution {
public:

    int minimumTotal(vector<vector<int>>& triangle) {
        for(int i=1,j;i<triangle.size();i++){
            for( j=0;j<triangle[i].size()-1;j++){
                triangle[i][j]+= triangle[i-1][j];
                if(j-1>=0 && triangle[i-1][j]> triangle[i-1][j-1]) triangle[i][j]-=(triangle[i-1][j]-triangle[i-1][j-1]);
            }
            triangle[i][j]+= triangle[i-1][j-1];
        }
        int n=triangle.size()-1,mn=INT_MAX;
        for(int i=0;i<triangle[n].size();i++){
            mn=min(mn, triangle[n][i]);
        }
        return mn;
    }
};
