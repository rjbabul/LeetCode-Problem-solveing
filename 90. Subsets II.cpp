
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int bitN= nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int> > st;
        for(int i = 0;i< (1<<nums.size());i++)
        {
            vector<int> vt;
            for(int mask =0; mask<bitN;mask++)
            {
                if(i & (1<<mask)) vt.push_back(nums[mask]);
            }
            st.insert(vt);
        }
        vector< vector<int> > ans;
        for(auto x:st) ans.push_back(x);
        return ans;
    }
};
