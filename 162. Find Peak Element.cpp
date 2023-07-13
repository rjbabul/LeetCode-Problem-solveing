
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int index;
        if(nums.size()==1)index= 0;
       else if(nums[0]>nums[1])index = 0;

       else if(nums[nums.size()-1]> nums[nums.size()-2])return nums.size()-1;
        else
        for(int i=1;i<nums.size()-1;i++) if(nums[i]>nums[i-1] && nums[i]>nums[i+1])index=         i;
        return index;
    }
};
