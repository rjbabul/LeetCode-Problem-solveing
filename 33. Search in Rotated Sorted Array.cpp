
class Solution {
public:
  int binary_searchs(vector<int>& nums, int l, int r, int x){
          if(l<r){
            int mid = (l+r)/2;
            if(nums[mid]==x)return mid;
            else if( nums[mid]>x)return binary_searchs(nums,l, mid, x);
            else return binary_searchs(nums,mid+1,r,x);
          }
          return -1;
    }

    int search(vector<int>& nums, int target) {
        int n  = nums.size();
        int pos = 0,mx=0;
         for(int i=0;i<n;i++){
            if(mx<nums[i])mx=nums[i],pos=i;
         }
         return max(binary_searchs(nums, 0 ,pos+1, target), binary_searchs(nums, pos+1, n, target));
    }
};
