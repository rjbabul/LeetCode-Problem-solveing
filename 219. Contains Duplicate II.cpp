
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> mp;
        vector<int>vt[100001];
        set<int>st;

        for(int i=0;i<nums.size();i++)
        {
            if(mp[nums[i]]==0)
            {
               int index = st.size()+1;
               st.insert(nums[i]);
               mp[nums[i]]= index;
               vt[index].push_back(i);
            }
            else
            {
                int index= mp[nums[i]];
                vt[index].push_back(i);
            }
        }

        for(auto x:st)
        {
            int index = mp[x];
            for(int i=1;i<vt[index].size();i++)
            {
              if(vt[index][i]- vt[index][i-1]<=k)return true;
            }
        }
        return false;
    }
};
