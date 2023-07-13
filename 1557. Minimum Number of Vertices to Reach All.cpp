
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        map<int, int > mp;
        for(int i =0;i<edges.size();i++)
        {
            mp[edges[i][1]]++;
        }

        int cnt=0;
        vector<int> vt;
    for(int i=0 ; i< n ; i++)
    {
        if(mp[i]==0) vt.push_back(i);
    }
     return vt;
    }

};
