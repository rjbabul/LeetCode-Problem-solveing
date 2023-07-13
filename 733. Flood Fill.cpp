class Solution {
public:
    struct {
        int first, second, value;

    }qu[51];

    int frnt =0, size_= 0;
    int visited[51][51];

    void push (int i, int j , int val)
    {
        qu[size_].first= i;
        qu[size_].second = j;
        qu[size_].value= val;
        size_= size_+1;
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

        memset(visited, 0 , sizeof(visited));
        int n = image.size();
        int m = image[0].size();
        frnt =0, size_= 0;


        int temp= image[sr][sc];
        image[sr][sc]= color;


        visited[sr][sc]= 1;
        push(sr, sc, color);

        int x, y, z;

        while(frnt<size_)
        {
            x= qu[frnt].first;
            y= qu[frnt].second;
            z= qu[frnt].value;
            frnt++;

             if(y>0 && !visited[x][y-1] && image[x][y-1]==temp)
            {
                visited[x][y-1]= 1;
                image[x][y-1]= color;
                push(x, y-1, color);
            }
             if(y+1<m && !visited[x][y+1] && image[x][y+1]==temp)
            {
                visited[x][y+1]= 1;
                image[x][y+1]= color;
                push(x, y+1, color);
            }
             if(x>0 && !visited[x-1][y] && image[x-1][y]==temp)
            {
                visited[x-1][y]= 1;
                image[x-1][y]= color;
                push(x-1, y, color);
            }
             if(x+1<n && !visited[x+1][y] && image[x+1][y]==temp)
            {
                visited[x+1][y]= 1;
                image[x+1][y]= color;
                push(x+1, y, color);
            }
        }

        return image;
    }
};
