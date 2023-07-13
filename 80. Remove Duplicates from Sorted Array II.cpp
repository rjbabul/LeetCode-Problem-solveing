class Solution
{
public:
    int removeDuplicates(vector<int>& nums)
    {
        int cnt =1;
        int sum =0;
        vector< int> vt;
        int temp =0;
        for(int i=0; i<nums.size()-1; i++)
        {
            if(nums[i] == nums[i+1])
            {
                cnt++;
            }
            else
            {
                temp= min(cnt, 2);
                for(int j=0; j<temp; j++)
                {
                    vt.push_back(nums[i]);

                }

                sum = sum+ temp;

                cnt=1;
            }
        }

        temp= min(cnt, 2);
        for(int i=0; i<temp; i++)
            vt.push_back(nums[nums.size()-1]);
        sum = sum+ temp;
        for(int i=0; i<sum; i++)
        {
            nums[i]=vt[i];
        }


        return sum ;
    }
};
