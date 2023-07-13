
class Solution {
public:
    bool helper(vector<int> & nums, int l, int r, int x)
    {
        if(l==r && nums[l]==x) return true;
        while(l<r)
        {
            int mid= (l+r)/2;
            if(nums[mid]==x) return true;
            else if(nums[l]>=nums[r])
            {
                return helper(nums, l, mid,x )|| helper(nums, mid+1, r,x);;
            }
            else if(nums[mid]>x )return helper(nums, l, mid,x );
            else return helper(nums, mid+1, r,x);
        }
        return false;
    }
    bool search(vector<int>& nums, int target) {
        return helper(nums, 0, nums.size()-1, target);

    }
};
