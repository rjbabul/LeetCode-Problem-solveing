
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int ans =1;
        int z=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            ans*=nums[i];
            else z++;
        }
        vector<int > vt;
        if(z>1){
            for(int i=0;i<nums.size();i++)vt.push_back(0);
            return vt;
        }
        else if(z==1){
            for(int i=0;i<nums.size();i++) if(nums[i]!=0)vt.push_back(0);
            else vt.push_back(ans);
            return vt;
        }
        else
        { for(int i=0;i<nums.size();i++){
            vt.push_back(ans/nums[i]);

        }
        return vt;
        }
    }
};
