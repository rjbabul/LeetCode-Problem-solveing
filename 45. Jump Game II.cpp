
class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()==1)return 0;
        int cnt=0,mx;
        for(int i=0;i<nums.size();i=mx){
            cnt++;
            mx=i+nums[i];
           // cout<<mx<<" ";
            if(mx>=nums.size()-1)break;
            for(int j=i+1; j<=i+nums[i];j++){
                if(mx+nums[mx]<j+nums[j]) mx= j;
            }

        }
        return cnt;
    }
};
