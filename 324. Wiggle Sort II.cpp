
class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        vector<int > vt;
        for(int i=0;i<n;i++){
            vt.push_back(nums[i]);
        }
        sort(vt.begin(), vt.end());

        int j =n-1;
        for(int i=1;i<nums.size();i+=2) nums[i]= vt[j--];
        for(int i=0;i<nums.size();i+=2) nums[i]= vt[j--];

    }
};
