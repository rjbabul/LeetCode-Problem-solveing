
class Solution {
public:

    int firstMissingPositive(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        int mx= nums.size();
        int a[mx+2];
        memset(a, 0, sizeof(a));
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0 && nums[i]<= mx )a[nums[i]]++;
        }

        for(int i=1;i<=nums.size()+1;i++)

        if(a[i]==0)
            return i;
        return 1;
    }
};
