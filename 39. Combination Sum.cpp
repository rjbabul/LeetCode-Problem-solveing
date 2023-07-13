class Solution {
public:
    int dp[32][42];
    vector<int> temp;
    void set_way(vector<int>&candidates, int target)
    {
        int n = candidates.size();
        for(int i=1;i<=n;i++) dp[i][0]=1;

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=target;j++)
            {
                dp[i][j]= dp[i-1][j];
                if(j>=candidates[i-1]) dp[i][j]+=  dp[i][j-candidates[i-1]];
            }
        }

    }

    void backtrack(vector<int> &candidates, int i, int j, vector<vector<int> >& st)
    {
        if(dp[i][j]==0)return ;
        if(j==0)
        {
            st.push_back(temp);

            return ;
        }
        if(dp[i][j]>dp[i-1][j])
        {
            temp.push_back(candidates[i-1]);
            backtrack(candidates, i, j-candidates[i-1], st);
            temp.pop_back();
        }
            backtrack(candidates, i-1, j, st);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        memset(dp, 0 , sizeof(dp));
        set_way(candidates, target);
        vector< vector<int> > st;

        backtrack(candidates, candidates.size(), target, st);
        return st;
    }
};
