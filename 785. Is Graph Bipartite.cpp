
class Solution {
public:
    int visit[200];
    int bit[200];
     bool flag;
    void dfs(vector<vector<int>>& graph , int s)
    {
        visit[s]=1;

        for(int i=0;i<graph[s].size();i++)
        {
            int v = graph[s][i];
            if(!visit[v])
            {
                bit[v]= bit[s]^1;
                dfs(graph,v);
            }
            else if(bit[s]==bit[v])
            {
                flag= false;
                return ;
            }
        }

    }
    bool isBipartite(vector<vector<int>>& graph) {
        memset(visit, 0, sizeof(visit));
        memset(bit, 0, sizeof(bit));
        bit[0]=0;
        flag=true;
        for(int i=0;i<graph.size();i++)
           dfs(graph, i);
        return flag;
    }
};
