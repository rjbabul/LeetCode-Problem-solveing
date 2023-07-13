
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n= nums.size();
        int pos =0;
        int temp[n];
        temp[0]=nums[0];
        if(n==1)return 0;

        for(int i=1;i<nums.size();i++) temp[i]= temp[i-1]+ nums[i];
        if(temp[n-1]-temp[0]==0) return 0;

        for(int i=1;i<n;i++){

            if(temp[i-1] == (temp[n-1]-temp[i])) {pos= i;break;}
        }
        return pos==0?-1:pos;
    }
};
