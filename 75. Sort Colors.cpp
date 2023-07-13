
class Solution {
public:
    void heapify(vector<int> &nums, int n, int i){
        int mx= i;
        int l= i*2 + 1 ;
        int r =  2 * i + 2 ;
        if(l<n && nums[l]>nums[mx])mx=l;
        if(r<n && nums[r]>nums[mx])mx=r;
        if(mx!=i){
            swap(nums[i], nums[mx]);
            heapify(nums,n,mx);
        }
    }
    void sortColors(vector<int>& nums) {
        int n= nums.size();
        for(int i=n/2-1 ;  i>=0;i--) heapify(nums,n, i);

        for(int i=n-1;i>0;i--){
            swap(nums[0], nums[i]);
            heapify(nums, i, 0);
        }
    }
};
