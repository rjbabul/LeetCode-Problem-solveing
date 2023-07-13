
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
       int n= nums.size();
        int sumarray[n+1];
        memset(sumarray,0,sizeof(sumarray));
        map<int , int> mp;

        sumarray[0]= nums[0];

        for(int i=1;i<n;i++){
            sumarray[i]= sumarray[i-1]+ nums[i];
        }
        int l=0, i=1,mx=0;
        mp[nums[0]]++;
        for( i=1;i<n;i++){
            if(mp[nums[i]]==0) mp[nums[i]]++;
            else{
                mx=max(mx, sumarray[i-1]-sumarray[l]+ nums[l]);

                while(l<n && mp[nums[i]]>0){
                    mp[nums[l]]--;
                   l++;
                }
                mp[nums[i]]++;

            }
        }
         mx=max(mx, sumarray[i-1]-sumarray[l]+ nums[l]);

        return mx;
    }
};
