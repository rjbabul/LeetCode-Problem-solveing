class Solution {
public:
    typedef long long int ll;
  void heapify(vector<int>&nums, int n, int at)
  {
      int mn =at;
      int l = at*2+1;
      int r = at*2+2;
      if(l<n && nums[l]>nums[mn]) mn =l;
      if(r<n && nums[r]> nums[mn]) mn =r ;
      if(mn != at)
      {
          swap(nums[mn], nums[at]);
          heapify(nums, n, mn);
      }
  }

   void heap(vector<int> &nums)
   {
       int n = nums.size();
       for(int  i=n/2-1; i>=0;i--) heapify(nums, n, i);

       for(int j= n-1;j>0 ;j--)
       {
           swap(nums[0], nums[j]);
           heapify(nums, j, 0);
       }
   }


    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector< vector<int > > ans;
       heap(nums);
        int n = nums.size();
        vector<int> temp;

        for(int i=0;i<nums.size()-1;i++)
        {

            for(int j= i+1; j<nums.size();j++)
            {
               long long int x= (ll)target - (ll)( nums[i]+nums[j]);
                int l = j+1, r= n-1;
                while(l<r)
                {
                    if(  nums[l]+nums[r]<x) l++;
                    else if(nums[l]+nums[r]>x) r--;
                    else{
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[l]);
                        temp.push_back(nums[r]);
                        ans.push_back(temp);
                        temp.clear();
                        l++, r--;

                         while(l<r && nums[l]== nums[l-1])l++;
                         while(l<r && nums[r]== nums[r+1])r--;
                    }
                }
                 while(j+1<n && nums[j]== nums[j+1])j++;
            }
            while(i+1<n && nums[i]== nums[i+1])i++;
        }


        return ans;
    }
};
