

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>vt;
        int i=0;
       for( i = 0;i<nums.size()-1;i++)
        {
            if((nums[i]^nums[i+1])==0) i++;
            else vt.push_back(nums[i]);
        }
       if(vt.size()==0) {
           vt.push_back(nums[nums.size()-2]);
            vt.push_back(nums[nums.size()-1]);
       }
       else if(vt.size()==1) {
            vt.push_back(nums[nums.size()-1]);
       }

        return vt;
    }
};
