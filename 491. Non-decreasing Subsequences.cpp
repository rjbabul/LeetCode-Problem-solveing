class Solution
{
public:
    int mark[20000];
    set<vector<int > >ans;
    vector<int > vt;

    void helper(vector<int >&nums,  int at, int n)
    {
        if(vt.size()>1)
        {
            ans.insert(vt);
        }

        for(int i= at; i<n; i++)
        {
            if(!mark[i])
            {
                mark[i]=1;
                if(vt.size()==0 || vt.back()<=nums[i])
                {
                    vt.push_back(nums[i]);
                    helper(nums, i, n );
                    vt.pop_back();
                    mark[i]=0;
                }
                mark[i]=0;
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums)
    {
        memset(mark, 0, sizeof(mark));
        helper(nums, 0, nums.size());
        return vector(ans.begin(), ans.end()) ;
    }
};
