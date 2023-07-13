
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long int mn=0,mx=0;
       long long  int ans =0,st=0,mns=0,mxs=0;

        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]==minK){ mn=1;
             mns=i;}
            if(nums[i]==maxK)
            {
                mx=1;
                mxs=i;
            }

            if(nums[i]>maxK) {  mx=0,mn=0; st = i+1;}
            if(nums[i]<minK){  mx=0,mn=0;st= i+1;}
            if(mn*mx)
                ans  =ans+ (min(mns,mxs)-st+1);
        }

        return ans;
    }
};
