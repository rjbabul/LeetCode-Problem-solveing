
class Solution {
public:


    void call(vector<int> & nums, int pos, vector<int> vt, vector<vector<int> >& st){
        st.push_back(vt);

        for(int i=pos; i<nums.size();i++){

          vt.push_back(nums[i]);
            call(nums,++pos, vt,st);
            vt.pop_back();}



    }


    vector<vector<int>> subsets(vector<int>& nums) {
       vector<int > vt;
        stack<vector<int> > stck;
       vector< vector<int > > st;
         call(nums,0, vt,st);

      return st;

    }
};
