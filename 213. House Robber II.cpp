class Solution {
public:
    int helper(vector<int> & nums, int l , int r)
    {
        int n = r-l;
        int dp[n+1];
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(i<2) dp[i]= nums[l+i];
            else if(i==2) dp[i]= max(nums[l+(i-1)], nums[l+i]+ nums[l+i-2]);
            else dp[i]= max(dp[i-2]+nums[l+i], nums[i+l]+dp[i-3]);
            mx= max(mx, dp[i]);
        }
        return mx;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(n==2) return max(nums[1], nums[0]);
        else if(n==3) return max(nums[0], max(nums[1],nums[2]));

        return max(helper(nums, 0, n-1) , helper(nums, 1, n));
    }
};
