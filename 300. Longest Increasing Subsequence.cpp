
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {

         int b[20000],mx=1;
         int n=nums.size();
        for(int i=0;i<n;i++)b[i]=1;
        for(int i=0;i<n;i++){
               for(int j=i+1;j<n;j++){
                  if(nums[i]<nums[j]){
                    b[j]=max(b[j], b[i]+1);
                    mx=max(mx, b[j]);
                  }
               }
        }
         return mx;
    }
};
