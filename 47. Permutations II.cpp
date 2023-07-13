class Solution {
public:

    vector<int> temp;
    int visit[10];

    void heapify(vector< int>& nums, int at, int size)
    {
        int l = at*2+1;
        int r = at*2+2;

        int mn = at;
        if(l<size && nums[l]>= nums[mn])mn = l;
        if(r<size && nums[r]>=nums[mn]) mn=r;

        if(mn != at)
        {

            int temp = nums[mn];
            nums[mn]= nums[at];
            nums[at]=temp;
            heapify(nums, mn, size);
        }
    }
    void heap_sort(vector<int>& nums)
    {
        for(int i= nums.size()/2-1;i>=0;i--)
        {
            heapify(nums, i, nums.size());
        }
        for(int j=nums.size()-1; j>0 ;j--)
        {

            int temp = nums[0];
            nums[0]= nums[j];
            nums[j]=temp;

            heapify(nums, 0, j);
        }
    }
    void permutation(vector<int >nums, int at, vector< vector< int > > &ans)
    {
        if(at == nums.size())
        {
            ans.push_back(temp);

            return ;
        }

        for(int i=0;i<nums.size(); i++)
        {
            if(i>0 && nums[i]==nums[i-1] && !visit[i-1])
                continue;
            if(!visit[i])
            {
                visit[i]= 1;
                temp.push_back(nums[i]);
                permutation(nums, at+1, ans);
                temp.pop_back();
                visit[i]=0;
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        memset(visit, 0,sizeof(visit));
        vector< vector<int> > ans;
        heap_sort(nums);

        permutation(nums,0, ans);
        return ans;
    }

};
