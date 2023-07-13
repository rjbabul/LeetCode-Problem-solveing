
class Solution {
public:
    typedef long long int ll;
   int divide(ll dividend, ll divisor) {
       long long int sing =1;
      //  if(dividend*divisor<0)sing=-1;
        if(dividend<0 && divisor>=0)sing = -1;
         if(dividend>=0 && divisor<0)sing = -1;

        long long int s= abs((dividend/divisor))*sing;
        if(s>2147483647)return 2147483647;
        else if(s<-2147483648) return -2147483648;
        else return (int)s;

    }
};
