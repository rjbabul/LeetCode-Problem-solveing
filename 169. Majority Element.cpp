
class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int mx=0, ilements;
        map<int, int > mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mx<mp[nums[i]])mx =mp[nums[i]],ilements = nums[i];
        }
        return ilements;
    }
};
