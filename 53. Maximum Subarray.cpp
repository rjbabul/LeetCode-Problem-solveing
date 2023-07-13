
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int maxArray;

        int mx;
        mx=maxArray= nums[0];

        for(int i=1;i<n;i++){
            maxArray= max(maxArray+nums[i], nums[i]);
            mx=max(mx, maxArray);
        }
        return mx;
    }
};
