class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int > > vt;
        int n = nums.size();
        int a[n+1];
        for(int i=0;i<n;i++)a[i]= nums[i];
        sort(a,a+n);
         do{
             vector<int> s;

             for(int i=0;i<n;i++){
                 s.push_back(a[i]);
             }
             vt.push_back(s);

         }while(next_permutation(a, a+n));

        return vt;
    }
};
