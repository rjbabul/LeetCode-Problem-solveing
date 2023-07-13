
class Solution {
public:
    bool binary_searchs(vector<int >& nums, int l, int r, int x){
        ios_base::sync_with_stdio(false);

        if(l<r){
            int mid = (l+r)/2;
            if(nums[mid]==x) return true;
            else if(nums[mid]>x)return binary_searchs(nums, l, mid, x);
            else return binary_searchs(nums, mid+1, r,x);
        }
        return false;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        vector< int  > vt[100005];
        int k=0;
        sort(nums.begin(), nums.end());
        map< pair<int, pair<int , int > >,bool> mp;

        int n = nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(nums[i]+nums[j]>0)continue;
                if(binary_searchs(nums,j+1,n,0-(nums[i]+nums[j]))&&!mp[make_pair(nums[i], make_pair(nums[j], 0- nums[i]+nums[j])) ] ){
                    vt[k].push_back(nums[i]);
                     vt[k].push_back(nums[j]);
                     vt[k].push_back(0-(nums[j]+nums[i]));
                    k++;
                    mp[make_pair(nums[i], make_pair(nums[j], 0- nums[i]+nums[j])) ]=true;

                }
            }
        }
        vector< vector<int> > st(k);
        for(int i=0;i<k;i++){
            for(int j=0;j<3;j++)
            st[i].push_back(vt[i][j]);
        }

        return st;
    }
};
