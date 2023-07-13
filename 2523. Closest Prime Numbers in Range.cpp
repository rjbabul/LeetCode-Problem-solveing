
class Solution {
public:
    vector<int>vt;
    int isPrime[1000005];
    void helper(int l, int r)
    {

        for(int i=2;i<=r;i++)
        {
            if(!isPrime[i])
            {
                if(i>=l && i<=r) vt.push_back(i);
                for(int j= i*2;j<=r;j+=i) isPrime[j]=1;
            }
        }

    }
    vector<int> closestPrimes(int left, int right) {
        vt.clear();
        memset(isPrime,0,sizeof(isPrime));
        helper(left, right);
        int mx=INT_MAX, a,b;
        for(int i=1;i<vt.size();i++)
        {
            if(vt[i]-vt[i-1]<mx)
            {
                mx=vt[i]-vt[i-1];
                a=vt[i-1]; b=vt[i];
            }
        }
        vector<int>st;
        if(mx==INT_MAX)
        {
            st.push_back(-1);st.push_back(-1);

        }
        else{
            st.push_back(a);st.push_back(b);
        }

        return st;

    }
};
