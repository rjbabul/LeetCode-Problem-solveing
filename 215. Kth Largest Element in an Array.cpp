
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        k=nums.size()-k;
        return nums[k];
    }
};
