
class Solution {
public:
   int min(int a, int b){
         if(a>b)return b;
       else return a;
   }
    int minSubArrayLen(int target, vector<int>& nums) {
       int l=0, r=0;
         int mx =INT_MAX,sum =0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];

            while(l<=i && sum>=target){
                mx= min(mx,i-l+1);
                sum-=nums[l];
                l++;
            }

        }
        if(mx==INT_MAX)return 0;
        return mx;
    }
};
