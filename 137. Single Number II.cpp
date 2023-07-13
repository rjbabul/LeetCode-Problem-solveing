
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1) return nums[0];

        if(nums[0]!=nums[1]) return nums[0];
        if(nums[nums.size()-1] != nums[nums.size()-2]) return nums[nums.size()-1];
       int n;
        for(int i=1;i<nums.size()-2;i++)
        {
            if(nums[i]!= nums[i-1] && nums[i]!=nums[i+1]) n = nums[i];

        }
        return n;
    }
};
