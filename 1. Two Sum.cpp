class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      map<int , int > mp;
        vector<int > vt;
        int n = nums.size();
        bool flag= false;
        for(int i=0;i<n && !flag;i++){
            if(mp[nums[i]]==0){
                mp[nums[i]]= i+1;
                if(mp[target-nums[i]]>0 && nums[i]*2!=target){
                    flag= true;
                    vt.push_back(i);
                    vt.push_back(mp[target-nums[i]]-1);
                }
            }
            else if(nums[i]*2==target){
                flag=true;
                 vt.push_back(i);
               vt.push_back(mp[nums[i]]-1);
            }
        }
        return vt;
    }
};
