class Solution {
public:
    int dp[102];
    int rob(vector<int>& nums) {
        int mx =0;
        int n = nums.size();
        memset(dp, 0, sizeof(dp));
        for(int i=0;i<n;i++)
        {
            if(i<2) dp[i]=nums[i];
            else if(i==2) dp[i] = nums[i]+ dp[i-2];
            else dp[i]= max(nums[i]+ dp[i-2], nums[i]+dp[i-3]);
            mx=max(dp[i], mx);
        }
        return mx;
    }
};
