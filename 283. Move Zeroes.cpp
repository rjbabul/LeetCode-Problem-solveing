class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) nums[l++]= nums[i];
        }
        while(l<nums.size()){
            nums[l++]=0;
        }
    }
};
