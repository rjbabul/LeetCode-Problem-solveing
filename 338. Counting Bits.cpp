
class Solution {
public:
   int call(int i)
   {
       int cnt=0;
       while(i)
       {
           cnt+= (i&1);
           i= i>>1;
       }
       return cnt;
   }
    vector<int> countBits(int n) {
        vector<int> vt;
        for(int i=0;i<=n;i++)
        {
            vt.push_back(call(i));
        }

        return vt;
    }
};
