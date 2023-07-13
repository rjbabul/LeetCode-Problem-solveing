class Solution {
public:
    int leftbound(vector<int>& nums , int l, int r, int x, int s){
        if(l<r){
            int mid = (l+r)/2;
            if(nums[mid]==x){
                s= mid;
               // return leftbound( nums, 0, mid-1, x, s);
            }
            else if(nums[mid]>x) return leftbound(nums, 0, mid, x, s);
            else return leftbound(nums,mid+1,r,x,s);
        }
        if(s!=-1){
            while(s>=0 && nums[s]==x)s--;
            return s+1;
        }else
        return s;
    }
    int rightbound(vector<int>& nums , int l, int r, int x, int s){
        if(l<r){
            int mid = (l+r)/2;
            if(nums[mid]==x){
                s= mid;
               // return rightbound( nums, mid+1, nums.size(), x, s);
            }
            else if(nums[mid]>x) return rightbound(nums, 0, mid, x, s);
            else return rightbound(nums,mid+1,r,x,s);
        }
         if(s!=-1){
            while(s<nums.size() &&  nums[s]==x)s++;
             return s-1;
        }else
        return s;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector< int> vt;
        vt.push_back(leftbound(nums, 0, nums.size(), target,-1));
        vt.push_back(rightbound(nums, 0, nums.size(), target, -1));
        return vt;
    }
};
