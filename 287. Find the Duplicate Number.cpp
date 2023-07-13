
class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int n=nums.size();
        int a[n+1],pos=-1;
        memset(a,0,sizeof(a));

        for(int i=0;i<n;i++){
            a[nums[i]]++;
            if(a[nums[i]]>1) pos=i;
        }
    return nums[pos];

    }
};
