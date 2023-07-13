
class Solution {
public:
    string st ;
    vector<string >ans;
    int visit[14];
    void permutation(string str, int at, int n ,int k)
    {
        if(ans.size()==k)return ;
        if(at==n)
        {
           ans.push_back(st);

             return ;
        }

        for(int i=1;i<=n;i++)
        {
            if(!visit[i])
            {
                st+= str[i-1];
                visit[i]=1;
                permutation(str, at+1,n,k);
                visit[i]=0;
                st.pop_back();
            }
        }
    }
    string getPermutation(int n, int k) {

        st.clear();
        ans.clear();
        string str;
        for(int i=1;i<=n;i++) str+= (char)(i+48);
        permutation(str, 0, n,k);
        string s;
        for(int i=0;i<str.size();i++) s+= ans[k-1][i];
        return s;
    }
};
