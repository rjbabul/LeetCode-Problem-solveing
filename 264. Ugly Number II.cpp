
class Solution {
public:

    int nthUglyNumber(int n) {
      long long  int a[]={2,3,5};
       priority_queue< long long  int, vector< long long  int>, greater< long long  int> > q;
       vector< long long  int> vt;
       vt.push_back(1);
       q.push(1);
       map< long long  int, int> mp;
       mp[1]=1;
       while(vt.size()<1783)
       {
           while(!q.empty() && vt.size()<1783)
           {
              long long  int x = q.top();
               q.pop();

               for(int i=0;i<3;i++)
               {
                  long long int v= a[i]*x;

                   if(mp[v]==0)
                   {
                       q.push(v);
                       vt.push_back(v);
                       mp[v]=1;
                   }
               }
           }
       }
       sort(vt.begin(), vt.end());
       return vt[n-1] ;
    }
};
