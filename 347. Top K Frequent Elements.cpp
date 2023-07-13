
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue< pair<int, int>>q;
        map<int, int > mp;
       for(auto x: nums)mp[x]++;
        for(auto x: nums){
            if(mp[x]>0) q.push(make_pair(mp[x], x));
            mp[x]=0;
        }

        vector<int>vt;
        while(k--){
            vt.push_back(q.top().second);
            q.pop();
        }
        return vt;
    }
};
