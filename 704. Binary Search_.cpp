class Solution {
public:
    int search(vector<int>& nums, int target) {
        int pos =-1;
        int l=0, r= nums.size()-1;
        while(l<=r && pos==-1)
        {
            int mid = (l+r)/2;
            if(nums[mid]==target) pos= mid;
            if(nums[mid]>target)r=mid-1;
            else l=mid+1;
        }
        return pos;
    }
};
