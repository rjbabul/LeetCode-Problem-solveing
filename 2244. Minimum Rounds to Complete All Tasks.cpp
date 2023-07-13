
class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int sum =0;

        map<int, int > mp;
        set<int>st;

        for(int i=0;i<tasks.size();i++)
        {
            mp[tasks[i]]++;
            st.insert(tasks[i]);
        }
        for(auto x:st)
        {
            int xx= mp[x];
            if(xx==1) return -1;
            int p = xx/3;
            int r=xx%3;
            if(r==1){
                p--;
                r+=3;
            }
            sum+= p + r/2;
        }
        return sum;
    }
};
