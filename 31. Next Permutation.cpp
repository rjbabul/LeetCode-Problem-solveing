class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1)return ;
        if(n==2)
        {
            swap(nums[0] , nums[1]);
            return ;
        }

        int i;
        bool flag=false;
        for(i=n-2;i>=0 && !flag;i--)
        {
            for(int j=i+1;j<n;j++)
            {

                if(nums[i]<nums[j])
                {
                    flag=true;
                    break;
                }
            }
            if(flag)break;
        }


        for(int j=i+1;j<n;j++)
        {
            for(int k=i+1;k<n-1;k++)
            {
                if(nums[k]>nums[k+1])
                {
                    swap(nums[k], nums[k+1]);
                }
            }
        }
         if(i==-1)
         {
             sort(nums.begin(), nums.end());
             return ;
         }

            for(int j=i+1;j<n;j++)
            {
                if(nums[i]<nums[j])
                {
                    swap(nums[i],nums[j]);
                    break;
                }
            }
    }
};
