class Solution {
public:

    void backtrack(int init, int target, vector<int> &candidates,vector<int >& temp, vector<vector<int> >& st)
    {

        if(target==0)
        {
            st.push_back(temp);

            return ;
        }

        for(int i=init;i<candidates.size();i++)
        {
            if(i>init && candidates[i]== candidates[i-1])
                continue;
            if(candidates[i]>target)break;
            temp.push_back(candidates[i]);
            backtrack(i+1, target-candidates[i], candidates,temp, st);
            temp.pop_back();
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        vector< vector<int> > st;
        vector<int > temp;
        backtrack(0, target,candidates,temp, st);
        return st;
    }
};
