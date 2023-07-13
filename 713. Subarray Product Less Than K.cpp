
class Solution {
public:

    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        int sum=1, ans=0,l=0;
         int n;
        for(int i=0;i<nums.size();i++)if(nums[i]<k)ans++;

         for(int i=0,l=0;i<nums.size();i++){
             if((sum*nums[i])<k)
                {
                 sum =sum*nums[i];
                 ans+=(i-l);

                }

             else{

                 sum*=nums[i];
                 while(l<i && sum>=k) {sum/=nums[l]; l++;}
                 ans+=(i-l);
             }
         }
        return ans;
    }

};
