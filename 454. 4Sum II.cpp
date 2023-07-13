
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {

        int ans =0;
        map<int, int > mp1;


        for(auto x:nums1){
            for(auto y:nums2){
                mp1[x+y]++;
            }
        }
        for(auto x:nums3){
            for(auto y: nums4){
                ans+= mp1[0-(x+y)];
            }
        }

        return ans;
    }
};
