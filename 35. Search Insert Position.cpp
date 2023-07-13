class Solution {
public:

    int binary_searchs(vector<int>& nums, int l, int r, int x){
        if(l<r){

            int mid= (l+r)/2;

        if(nums[mid]==x)return mid;

        else if(nums[mid]>x)return binary_searchs(nums,l, mid, x);
        else return binary_searchs(nums, mid+1, r, x);
        }
       else  return  l;
    }
    int searchInsert(vector<int>& nums, int target) {
        int n  = nums.size();

        return binary_searchs(nums, 0 , n, target);
    }
};
