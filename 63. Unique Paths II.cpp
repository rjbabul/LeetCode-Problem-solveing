class Solution {
public:

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();

        if(obstacleGrid[0][0]==1 || obstacleGrid[n-1][m-1]==1)return 0;
        int grid[n+2][m+2];
        memset(grid, 0, sizeof(grid));
        for(int i=0;i<m;i++)
        {
            if(obstacleGrid[0][i]==1)break;
            grid[0][i]=1;
        }
        for(int i=0;i<n;i++)
        {
            if(obstacleGrid[i][0]==1)break;
            grid[i][0]=1;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(obstacleGrid[i][j]==1)continue;

                if(obstacleGrid[i-1][j]==0) grid[i][j]+= grid[i-1][j];
                if(obstacleGrid[i][j-1]==0) grid[i][j]+= grid[i][j-1];
            }
        }

        return grid[n-1][m-1];

    }
};
