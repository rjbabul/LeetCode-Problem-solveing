
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        map<int, int > mp;
        int mx =0,ans =0;
        for(int i=0;i<edges.size();i++)
        {
            int n = edges[i][0];
            mp[n]++;
            if(mx<mp[n]){
                mx=mp[n];
                ans = n;
            }
            n= edges[i][1];
            mp[n]++;
              if(mx<mp[n]){
                mx=mp[n];
                ans = n;
            }
        }

        return ans ;

    }
};
