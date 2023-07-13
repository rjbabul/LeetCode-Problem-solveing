
class Solution {
public:
    bool canJump(vector<int>& nums) {
         if(nums[0]==0 && nums.size()>1)return false;
         else if(nums[0]==0 && nums.size()==1)return true;
        int r=0;
        for(int i=0;i<nums.size() && i<=r;i++){
            r= max(r,nums[i]+i);
        }

        if(r<nums.size()-1)return false;
        else return true;
    }
};
