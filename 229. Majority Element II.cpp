class Solution {
public:

    void heapify(vector<int>& nums, int n, int at)
    {
        int mn =at;
        int l = at*2+1;
        int r = at*2+2;
        if(l<n && nums[l]>nums[mn])mn=l;
        if(r<n && nums[r]>nums[mn])mn=r;
        if(mn!=at)
        {
            swap(nums[mn], nums[at]);
            heapify (nums, n, mn);
        }
    }
    void heapsort(vector<int> & nums)
    {
        int n = nums.size();
        for(int i=n/2-1;i>=0;i--) heapify(nums, n, i);

        for(int j=n-1;j>0;j--)
        {
            swap(nums[0], nums[j]);
                heapify(nums, j, 0);
        }
    }
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size()/3;
        heapsort(nums);
        vector<int> vt;
        int cnt =1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                cnt++;
            }
            else
            {
                if(cnt>n)vt.push_back(nums[i]);
                cnt=1;
            }
        }
        if(cnt>n)
        {
            vt.push_back(nums[nums.size()-1]);
        }
        return vt;
    }
};
