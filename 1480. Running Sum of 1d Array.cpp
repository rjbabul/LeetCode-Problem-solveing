class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int > vt;
        vt.push_back(nums[0]);
        for(int i=1;i<nums.size();i++) vt.push_back(vt[i-1]+nums[i]);
        return vt;
    }
};
