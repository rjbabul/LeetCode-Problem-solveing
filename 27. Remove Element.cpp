
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        stack<int> st;

        for(auto x:nums) if(x!=val) st.push(x);
        int ans = st.size();
        for(int i=0;i<ans;i++) {
            nums[i]=st.top();
            st.pop();
        }

        return ans ;
    }
};
