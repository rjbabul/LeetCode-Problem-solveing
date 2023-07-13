
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
       int mx =0;
        map<pair<int, int >,int > mp;

        stack< pair< int, int > > st;
        for(int i=0;i<grid.size(); i++){
            for(int j=0;j<grid[i].size();j++){
                if(grid[i][j]=='1' && mp[{i,j}]==0){
                    mx++;
                    st.push({i,j});
                    while(!st.empty()){
                        int x=st.top().first;
                        int y= st.top().second;
                        st.pop();
                        mp[{x,y}]++;
                        if(x>0 && grid[x-1][y]=='1' && mp[{x-1, y}]==0)
                             st.push({x-1,y});
                        if(y>0 && grid[x][y-1]=='1' && mp[{x, y-1}]==0)
                             st.push({x,y-1});

                        if(x+1<grid.size() && grid[x+1][y]=='1' && mp[{x+1, y}]==0)
                             st.push({x+1,y});

                        if(y+1<grid[i].size() && grid[x][y+1]=='1' && mp[{x, y+1}]==0)
                             st.push({x,y+1});
                    }
                }
            }
        }

        return mx;
    }

};
