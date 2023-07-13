
class Solution {
public:
    int mark[12];

    void helper( int at,  int k, int n , vector< vector< int > > & ans, vector<int>vt)
    {
        if(vt.size()==k)
        {
            int sum =0;
            for(auto x:vt) sum+= x;
            if(sum==n)
                ans.push_back(vt);
            return ;
        }
        for(int i = at; i<=9;i++)
        {
            if(!mark[i])
            {
                vt.push_back(i);
                mark[i]=1;
                helper(i+1,k, n, ans,vt);
                mark[i]=0;
                vt.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector< vector< int> > ans;
        vector< int > vt;
        helper(1,k, n ,ans,vt);
        return ans ;
    }
};
