
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if(nums.size()==0)return 0;
         sort(nums.begin(), nums.end());

         int c=1, mx=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1)c++;
            else if(nums[i]==nums[i-1])continue;
            else  c=1;
            mx=max(mx,c);
        }
        return mx;
    }
};
