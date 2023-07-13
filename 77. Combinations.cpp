
class Solution {
public:
   int mask[1000];
    void helper(vector<vector<int> > & vt, vector<int>st ,int pre, int n, int cnt, int k)
    {
        if(cnt==k)
        {
            vt.push_back(st);
        }

        for(int i=pre; i<=n;i++)
        {
            if(!mask[i])
            {
                st.push_back(i);
                mask[i]=1;
                helper(vt,st, i,n,cnt+1,k);
                mask[i]=0;
                st.pop_back();
            }
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector< vector< int> > vt;
        vector<int> st;
        helper(vt,st,1, n ,0,k);
        return vt;
}
};
