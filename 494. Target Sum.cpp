class Solution {
public:

   int helper( vector<int>& nums,int at, int target, map< pair<int, int > ,int>& mp )
    {
          if(at==nums.size()) return target==0;
          if(mp.count({at, target})>0) return mp[{at,target}];

          return mp[{at,target}] = helper(nums,at+1,target-nums[at],mp) + helper(nums,at+1,target+nums[at],mp);
    }
    int findTargetSumWays(vector<int>& nums, int target) {

        map<pair<int, int> , int> mp;

        return helper(nums,0, target,mp);
    }
};
