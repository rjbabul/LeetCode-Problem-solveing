
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int pos = nums.size();
        for(int i=0;i<nums.size();i++){
            if(i!= nums[i]){
                pos=i;
                break;
            }
        }
        return pos;
    }
};
