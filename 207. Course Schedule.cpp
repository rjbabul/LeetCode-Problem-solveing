
class Solution {
public:

    vector<int > vt[2006];
    int visit[2005];
    bool flag = true;
    void isValid(int s, int d)
    {
        if(s==d) flag= false;
        for(int i=0;i<vt[s].size();i++)
        {
            int v = vt[s][i];
            if(!visit[v])
            {
                visit[v]=1;
                isValid(v,d);
                visit[v]=0;
            }
        }
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        for(int i=0;i<prerequisites.size();i++)
        {
            int u= prerequisites[i][1];
            int v= prerequisites[i][0];
            flag=true;
            isValid(v,u);
            if(!flag) return false;
            vt[u].push_back(v);
        }
        return true;
    }
};
